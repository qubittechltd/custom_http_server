#ifndef MIDDLEWARE_IMPL_H
#define MIDDLEWARE_IMPL_H

#include <QtHttpServer/QHttpServerRequest>
#include <QtHttpServer/QHttpServerResponse>


namespace QUBIT {
    struct MiddleWareIMpl
    {
        using  MiddleWares = std::vector<const MiddleWareIMpl *>;
        using  RequestHandler  =std::function<QHttpServerResponse(const QHttpServerRequest &)>;
        struct Next{

            std::unique_ptr<QHttpServerResponse> operator()(const QHttpServerRequest &request) const {

                if(_middlewares.cbegin() ==  _middlewares.cend()){

                    QHttpServerResponse* responsePtr = (QHttpServerResponse*)malloc(sizeof(QHttpServerResponse));

                    // memcpy(responsePtr,_hander(request),malloc(sizeof(QHttpServerResponse))
                    *responsePtr = _hander(request);

                    auto response = std::unique_ptr<QHttpServerResponse>(responsePtr);

                    return response;
                }

                const MiddleWareIMpl * curr = *_middlewares.cbegin();

                auto nextItr = std::next(_middlewares.cbegin());

                Next next(MiddleWares(nextItr,_middlewares.cend()),_hander);

                auto  response = curr->handle(request,next);

                return response;
            }
        protected:
            Next(const MiddleWares middlewares,const RequestHandler & hander):
                _hander(hander),
                _middlewares(middlewares)
            {

            }
        private:
            RequestHandler _hander;
            const MiddleWares _middlewares;
        };
    protected:
        virtual std::unique_ptr<QHttpServerResponse> handle(const QHttpServerRequest &request, const Next &next) const {
            return next(request);
        };
    public:
        MiddleWareIMpl * only(const std::string & method_name){
            qWarning("TODO MiddleWareIMpl * only(std::string method_name = %s) not implemented",method_name.c_str());
            return this;
        }

        using ControllerHandler = std::function<QHttpServerResponse(const QHttpServerRequest &, QUBIT::Session &)>;
        using ControllerHandlerRegex = std::function<QHttpServerResponse(const QRegularExpressionMatch &,const QHttpServerRequest &, QUBIT::Session &)>;

        MiddleWareIMpl * only(const std::variant<ControllerHandler,ControllerHandlerRegex> & handler){
            Q_UNUSED(handler)
            qWarning("TODO MiddleWareIMpl * only(std::variant<ControllerHandler,ControllerHandlerRegex> ) not implemented");
            return this;
        }

    };
}



#endif // MIDDLEWARE_IMPL_H
