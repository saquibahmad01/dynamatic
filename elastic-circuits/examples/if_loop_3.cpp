//------------------------------------------------------------------------
// If loop
//------------------------------------------------------------------------

int if_loop(int a[], int b[], int n) {
    int i;
    int dist;
    int sum = 1000;

    for (i = 0; i < n; i++) {
        dist = a[i] - b[i];

        if (dist >= 0) {

            sum = (sum / dist);
        }
    }
    return sum;
}
