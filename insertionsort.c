    void insertionsort(int *V, int N){
    int i, j, aux;  
    for(i = 1; i < N; i++){ //N because it repeats N times
        aux = V[i];
        for (j = i; (j > 0) && (aux < V[j-1]); j--){ //N in the worst case to organize the inverse and 1 in the best case to organize the ordered
            V[j] = V[j-1];
        }
        V[j] = aux;
    }
} //O(n²) in worst case, O(n) in best case
 