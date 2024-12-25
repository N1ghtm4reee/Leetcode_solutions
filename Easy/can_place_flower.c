bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i = 0;
    int counter = 0;
    while(i < flowerbedSize)
    {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbedSize - 1 || flowerbed[i+1] == 0))
        {
            flowerbed[i] = 1;
            n--;
        }
        if (n <= 0)
            return true;
        i++;
    }
    if (n > 0)
        return false;
    return true;
}
