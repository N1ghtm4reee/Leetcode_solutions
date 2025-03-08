class Solution(object):
    def minimumRecolors(self, blocks, k):
        """
        :type blocks: str
        :type k: int
        :rtype: int
        """
        max_counter = float('inf')
        for i in range(len(blocks) - k + 1):
            start = i
            counter = 0
            end = i + k
            for start in range(start, end):
                if blocks[start] == 'W':
                    counter += 1
            if counter < max_counter:
                max_counter = counter
        return max_counter
