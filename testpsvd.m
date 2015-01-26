NN=20

[a,b,c,d]=svdxi(randn(NN),randn(NN),randn(NN),randn(NN))

plot([a,b,c,d])

title('SVD Singular Values for Guassian Matrices via Parallel Example')
print('svd-random-gaussian-matrix-singular-values.pdf')



