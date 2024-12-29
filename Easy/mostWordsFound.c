int mostWordsFound(char** sentences, int sentencesSize) {
    int w_max = 0;
    int word = 0;
    int i = 0;
    int j = 0;
    while(i < sentencesSize)
    {
        word = 0;
        j = 0;
        while(sentences[i][j])
        {
            if (sentences[i][j])
                word++;
            while(sentences[i][j] && sentences[i][j] != ' ')
                j++;
            if (sentences[i][j] == ' ')
                j++;
        }
        if (word > w_max)
            w_max = word;
        i++;
    }
    return w_max;
}
