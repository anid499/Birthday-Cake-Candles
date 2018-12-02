// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar) {
    int i, no, count=0;
    no = ar[0];
    for(i=0;i<ar_count;i++){
        if(ar[i] == no){
            count++;
        }
        else if(ar[i]>no){
            count = 1;
            no = ar[i];
        }
    }
    return count;
}
