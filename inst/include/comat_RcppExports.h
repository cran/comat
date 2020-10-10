// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_comat_RCPPEXPORTS_H_GEN_
#define RCPP_comat_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace comat {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("comat", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("comat", "_comat_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in comat");
            }
        }
    }

    inline double rcpp_get_entropy(const Rcpp::NumericVector x, std::string base = "log2") {
        typedef SEXP(*Ptr_rcpp_get_entropy)(SEXP,SEXP);
        static Ptr_rcpp_get_entropy p_rcpp_get_entropy = NULL;
        if (p_rcpp_get_entropy == NULL) {
            validateSignature("double(*rcpp_get_entropy)(const Rcpp::NumericVector,std::string)");
            p_rcpp_get_entropy = (Ptr_rcpp_get_entropy)R_GetCCallable("comat", "_comat_rcpp_get_entropy");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_entropy(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(base)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline std::vector<int> get_unique_values(const Rcpp::IntegerVector& x, bool na_omit) {
        typedef SEXP(*Ptr_get_unique_values)(SEXP,SEXP);
        static Ptr_get_unique_values p_get_unique_values = NULL;
        if (p_get_unique_values == NULL) {
            validateSignature("std::vector<int>(*get_unique_values)(const Rcpp::IntegerVector&,bool)");
            p_get_unique_values = (Ptr_get_unique_values)R_GetCCallable("comat", "_comat_get_unique_values");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_get_unique_values(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(na_omit)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<int> >(rcpp_result_gen);
    }

    inline double rcpp_ent(const Rcpp::NumericMatrix x, std::string base = "log2") {
        typedef SEXP(*Ptr_rcpp_ent)(SEXP,SEXP);
        static Ptr_rcpp_ent p_rcpp_ent = NULL;
        if (p_rcpp_ent == NULL) {
            validateSignature("double(*rcpp_ent)(const Rcpp::NumericMatrix,std::string)");
            p_rcpp_ent = (Ptr_rcpp_ent)R_GetCCallable("comat", "_comat_rcpp_ent");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_ent(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(base)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rcpp_joinent(const Rcpp::NumericMatrix x, std::string base = "log2", bool ordered = true) {
        typedef SEXP(*Ptr_rcpp_joinent)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_joinent p_rcpp_joinent = NULL;
        if (p_rcpp_joinent == NULL) {
            validateSignature("double(*rcpp_joinent)(const Rcpp::NumericMatrix,std::string,bool)");
            p_rcpp_joinent = (Ptr_rcpp_joinent)R_GetCCallable("comat", "_comat_rcpp_joinent");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_joinent(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(base)), Shield<SEXP>(Rcpp::wrap(ordered)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rcpp_condent(const Rcpp::NumericMatrix x, std::string base = "log2", bool ordered = true) {
        typedef SEXP(*Ptr_rcpp_condent)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_condent p_rcpp_condent = NULL;
        if (p_rcpp_condent == NULL) {
            validateSignature("double(*rcpp_condent)(const Rcpp::NumericMatrix,std::string,bool)");
            p_rcpp_condent = (Ptr_rcpp_condent)R_GetCCallable("comat", "_comat_rcpp_condent");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_condent(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(base)), Shield<SEXP>(Rcpp::wrap(ordered)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rcpp_mutinf(const Rcpp::NumericMatrix x, std::string base = "log2", bool ordered = true) {
        typedef SEXP(*Ptr_rcpp_mutinf)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_mutinf p_rcpp_mutinf = NULL;
        if (p_rcpp_mutinf == NULL) {
            validateSignature("double(*rcpp_mutinf)(const Rcpp::NumericMatrix,std::string,bool)");
            p_rcpp_mutinf = (Ptr_rcpp_mutinf)R_GetCCallable("comat", "_comat_rcpp_mutinf");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_mutinf(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(base)), Shield<SEXP>(Rcpp::wrap(ordered)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rcpp_relmutinf(const NumericMatrix x, std::string base = "log2", bool ordered = true) {
        typedef SEXP(*Ptr_rcpp_relmutinf)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_relmutinf p_rcpp_relmutinf = NULL;
        if (p_rcpp_relmutinf == NULL) {
            validateSignature("double(*rcpp_relmutinf)(const NumericMatrix,std::string,bool)");
            p_rcpp_relmutinf = (Ptr_rcpp_relmutinf)R_GetCCallable("comat", "_comat_rcpp_relmutinf");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_relmutinf(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(base)), Shield<SEXP>(Rcpp::wrap(ordered)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline IntegerMatrix rcpp_get_cocoma(const IntegerMatrix x, const IntegerMatrix y, const arma::imat directions) {
        typedef SEXP(*Ptr_rcpp_get_cocoma)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_cocoma p_rcpp_get_cocoma = NULL;
        if (p_rcpp_get_cocoma == NULL) {
            validateSignature("IntegerMatrix(*rcpp_get_cocoma)(const IntegerMatrix,const IntegerMatrix,const arma::imat)");
            p_rcpp_get_cocoma = (Ptr_rcpp_get_cocoma)R_GetCCallable("comat", "_comat_rcpp_get_cocoma");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_cocoma(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(directions)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerMatrix >(rcpp_result_gen);
    }

    inline IntegerMatrix rcpp_get_cocoma_internal(const IntegerMatrix x, const IntegerMatrix y, const arma::imat directions, std::vector<int> classes_x, std::vector<int> classes_y) {
        typedef SEXP(*Ptr_rcpp_get_cocoma_internal)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_cocoma_internal p_rcpp_get_cocoma_internal = NULL;
        if (p_rcpp_get_cocoma_internal == NULL) {
            validateSignature("IntegerMatrix(*rcpp_get_cocoma_internal)(const IntegerMatrix,const IntegerMatrix,const arma::imat,std::vector<int>,std::vector<int>)");
            p_rcpp_get_cocoma_internal = (Ptr_rcpp_get_cocoma_internal)R_GetCCallable("comat", "_comat_rcpp_get_cocoma_internal");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_cocoma_internal(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(directions)), Shield<SEXP>(Rcpp::wrap(classes_x)), Shield<SEXP>(Rcpp::wrap(classes_y)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerMatrix >(rcpp_result_gen);
    }

    inline IntegerMatrix rcpp_get_coma(const IntegerMatrix& x, const arma::imat directions) {
        typedef SEXP(*Ptr_rcpp_get_coma)(SEXP,SEXP);
        static Ptr_rcpp_get_coma p_rcpp_get_coma = NULL;
        if (p_rcpp_get_coma == NULL) {
            validateSignature("IntegerMatrix(*rcpp_get_coma)(const IntegerMatrix&,const arma::imat)");
            p_rcpp_get_coma = (Ptr_rcpp_get_coma)R_GetCCallable("comat", "_comat_rcpp_get_coma");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_coma(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(directions)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerMatrix >(rcpp_result_gen);
    }

    inline IntegerMatrix rcpp_get_coma_internal(const IntegerMatrix& x, const arma::imat directions, std::vector<int> classes) {
        typedef SEXP(*Ptr_rcpp_get_coma_internal)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_coma_internal p_rcpp_get_coma_internal = NULL;
        if (p_rcpp_get_coma_internal == NULL) {
            validateSignature("IntegerMatrix(*rcpp_get_coma_internal)(const IntegerMatrix&,const arma::imat,std::vector<int>)");
            p_rcpp_get_coma_internal = (Ptr_rcpp_get_coma_internal)R_GetCCallable("comat", "_comat_rcpp_get_coma_internal");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_coma_internal(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(directions)), Shield<SEXP>(Rcpp::wrap(classes)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerMatrix >(rcpp_result_gen);
    }

    inline List rcpp_get_incoma(const List x, const arma::imat directions) {
        typedef SEXP(*Ptr_rcpp_get_incoma)(SEXP,SEXP);
        static Ptr_rcpp_get_incoma p_rcpp_get_incoma = NULL;
        if (p_rcpp_get_incoma == NULL) {
            validateSignature("List(*rcpp_get_incoma)(const List,const arma::imat)");
            p_rcpp_get_incoma = (Ptr_rcpp_get_incoma)R_GetCCallable("comat", "_comat_rcpp_get_incoma");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_incoma(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(directions)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline List rcpp_get_incoma_list(const List x, const arma::imat directions, List classes) {
        typedef SEXP(*Ptr_rcpp_get_incoma_list)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_incoma_list p_rcpp_get_incoma_list = NULL;
        if (p_rcpp_get_incoma_list == NULL) {
            validateSignature("List(*rcpp_get_incoma_list)(const List,const arma::imat,List)");
            p_rcpp_get_incoma_list = (Ptr_rcpp_get_incoma_list)R_GetCCallable("comat", "_comat_rcpp_get_incoma_list");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_incoma_list(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(directions)), Shield<SEXP>(Rcpp::wrap(classes)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline IntegerMatrix rcpp_get_incoma_matrix(const List x) {
        typedef SEXP(*Ptr_rcpp_get_incoma_matrix)(SEXP);
        static Ptr_rcpp_get_incoma_matrix p_rcpp_get_incoma_matrix = NULL;
        if (p_rcpp_get_incoma_matrix == NULL) {
            validateSignature("IntegerMatrix(*rcpp_get_incoma_matrix)(const List)");
            p_rcpp_get_incoma_matrix = (Ptr_rcpp_get_incoma_matrix)R_GetCCallable("comat", "_comat_rcpp_get_incoma_matrix");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_incoma_matrix(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerMatrix >(rcpp_result_gen);
    }

    inline List rcpp_get_incoma_matrix_to_list(IntegerMatrix x) {
        typedef SEXP(*Ptr_rcpp_get_incoma_matrix_to_list)(SEXP);
        static Ptr_rcpp_get_incoma_matrix_to_list p_rcpp_get_incoma_matrix_to_list = NULL;
        if (p_rcpp_get_incoma_matrix_to_list == NULL) {
            validateSignature("List(*rcpp_get_incoma_matrix_to_list)(IntegerMatrix)");
            p_rcpp_get_incoma_matrix_to_list = (Ptr_rcpp_get_incoma_matrix_to_list)R_GetCCallable("comat", "_comat_rcpp_get_incoma_matrix_to_list");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_incoma_matrix_to_list(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline NumericVector rcpp_get_vec(NumericMatrix x, bool ordered, std::string normalization) {
        typedef SEXP(*Ptr_rcpp_get_vec)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_vec p_rcpp_get_vec = NULL;
        if (p_rcpp_get_vec == NULL) {
            validateSignature("NumericVector(*rcpp_get_vec)(NumericMatrix,bool,std::string)");
            p_rcpp_get_vec = (Ptr_rcpp_get_vec)R_GetCCallable("comat", "_comat_rcpp_get_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_vec(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(ordered)), Shield<SEXP>(Rcpp::wrap(normalization)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector rcpp_get_wecove(NumericMatrix x, bool ordered, std::string normalization) {
        typedef SEXP(*Ptr_rcpp_get_wecove)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_wecove p_rcpp_get_wecove = NULL;
        if (p_rcpp_get_wecove == NULL) {
            validateSignature("NumericVector(*rcpp_get_wecove)(NumericMatrix,bool,std::string)");
            p_rcpp_get_wecove = (Ptr_rcpp_get_wecove)R_GetCCallable("comat", "_comat_rcpp_get_wecove");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_wecove(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(ordered)), Shield<SEXP>(Rcpp::wrap(normalization)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector rcpp_get_cove(IntegerMatrix x, bool ordered, std::string normalization) {
        typedef SEXP(*Ptr_rcpp_get_cove)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_cove p_rcpp_get_cove = NULL;
        if (p_rcpp_get_cove == NULL) {
            validateSignature("NumericVector(*rcpp_get_cove)(IntegerMatrix,bool,std::string)");
            p_rcpp_get_cove = (Ptr_rcpp_get_cove)R_GetCCallable("comat", "_comat_rcpp_get_cove");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_cove(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(ordered)), Shield<SEXP>(Rcpp::wrap(normalization)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector rcpp_get_cocove(IntegerMatrix x, bool ordered, std::string normalization) {
        typedef SEXP(*Ptr_rcpp_get_cocove)(SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_cocove p_rcpp_get_cocove = NULL;
        if (p_rcpp_get_cocove == NULL) {
            validateSignature("NumericVector(*rcpp_get_cocove)(IntegerMatrix,bool,std::string)");
            p_rcpp_get_cocove = (Ptr_rcpp_get_cocove)R_GetCCallable("comat", "_comat_rcpp_get_cocove");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_cocove(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(ordered)), Shield<SEXP>(Rcpp::wrap(normalization)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline IntegerVector is_cross_mat(int n_layers) {
        typedef SEXP(*Ptr_is_cross_mat)(SEXP);
        static Ptr_is_cross_mat p_is_cross_mat = NULL;
        if (p_is_cross_mat == NULL) {
            validateSignature("IntegerVector(*is_cross_mat)(int)");
            p_is_cross_mat = (Ptr_is_cross_mat)R_GetCCallable("comat", "_comat_is_cross_mat");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_is_cross_mat(Shield<SEXP>(Rcpp::wrap(n_layers)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerVector >(rcpp_result_gen);
    }

    inline NumericVector rcpp_get_incove(List x, bool ordered, bool repeated, std::string normalization) {
        typedef SEXP(*Ptr_rcpp_get_incove)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_incove p_rcpp_get_incove = NULL;
        if (p_rcpp_get_incove == NULL) {
            validateSignature("NumericVector(*rcpp_get_incove)(List,bool,bool,std::string)");
            p_rcpp_get_incove = (Ptr_rcpp_get_incove)R_GetCCallable("comat", "_comat_rcpp_get_incove");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_incove(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(ordered)), Shield<SEXP>(Rcpp::wrap(repeated)), Shield<SEXP>(Rcpp::wrap(normalization)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericMatrix rcpp_get_wecoma(const IntegerMatrix& x, const NumericMatrix& w, const arma::imat& directions, const std::string fun, const std::string na_action) {
        typedef SEXP(*Ptr_rcpp_get_wecoma)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_wecoma p_rcpp_get_wecoma = NULL;
        if (p_rcpp_get_wecoma == NULL) {
            validateSignature("NumericMatrix(*rcpp_get_wecoma)(const IntegerMatrix&,const NumericMatrix&,const arma::imat&,const std::string,const std::string)");
            p_rcpp_get_wecoma = (Ptr_rcpp_get_wecoma)R_GetCCallable("comat", "_comat_rcpp_get_wecoma");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_wecoma(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(w)), Shield<SEXP>(Rcpp::wrap(directions)), Shield<SEXP>(Rcpp::wrap(fun)), Shield<SEXP>(Rcpp::wrap(na_action)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericMatrix >(rcpp_result_gen);
    }

    inline NumericMatrix rcpp_get_wecoma_internal(const IntegerMatrix& x, const NumericMatrix& w, const arma::imat& directions, std::vector<int> classes, const std::string fun, const std::string na_action) {
        typedef SEXP(*Ptr_rcpp_get_wecoma_internal)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_rcpp_get_wecoma_internal p_rcpp_get_wecoma_internal = NULL;
        if (p_rcpp_get_wecoma_internal == NULL) {
            validateSignature("NumericMatrix(*rcpp_get_wecoma_internal)(const IntegerMatrix&,const NumericMatrix&,const arma::imat&,std::vector<int>,const std::string,const std::string)");
            p_rcpp_get_wecoma_internal = (Ptr_rcpp_get_wecoma_internal)R_GetCCallable("comat", "_comat_rcpp_get_wecoma_internal");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_get_wecoma_internal(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(w)), Shield<SEXP>(Rcpp::wrap(directions)), Shield<SEXP>(Rcpp::wrap(classes)), Shield<SEXP>(Rcpp::wrap(fun)), Shield<SEXP>(Rcpp::wrap(na_action)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericMatrix >(rcpp_result_gen);
    }

}

#endif // RCPP_comat_RCPPEXPORTS_H_GEN_
