char* readline();

// Complete the factorial function below.
int factorial(int n) {
    
    return (n == 1) ? 1 : n * factorial(n - 1);
}
