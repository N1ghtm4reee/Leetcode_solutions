class Solution(object):
    def countWords(self, words1, words2):
        """
        :type words1: List[str]
        :type words2: List[str]
        :rtype: int
        """
        word_map = {}
        
        for word in words1:
            word_map[word] = word_map.get(word, 0) + 1
        
        count = 0
        for word in words2:
            if word in word_map:
                if word_map[word] == 1:
                    count += 1
                    word_map[word] = -1
                elif word_map[word] == -1:
                    count -= 1
                    word_map[word] = -2
        
        return count
