#ifndef KH_01_HPP
#define KH_01_HPP

template<typename Func,typename... Args>
inline auto curry(Func func, Args... args){

    return [=]( auto... secondParam){   return func(args..., secondParam...);  };

}


#endif // KH_01_HPP
