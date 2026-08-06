void main() {
    int n, temp, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    for(; temp > 0; temp = temp / 10) {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}