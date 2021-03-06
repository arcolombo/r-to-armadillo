#ifndef R_TO_ARMADILLO
#define R_TO_ARMADILLO

#define my_isok(x) (!ISNA(x) & !ISNAN(x))

arma::vec diff_cpp(arma::vec x, unsigned int lag = 1, unsigned int differences = 1);

arma::vec ARMAtoMA_cpp(arma::vec ar, arma::vec ma, int lag_max);

arma::vec cfilter(arma::vec x, arma::vec filter, int sides = 2, bool circular = false);

arma::vec rfilter(arma::vec x, arma::vec filter, arma::vec init);

arma::vec ARMAacf_cpp(arma::vec ar, arma::vec ma, unsigned int lag_max);

arma::vec dft_acf(const arma::vec& x);

#endif
