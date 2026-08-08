int lengthOfLongestSubstring(char* s) {
    int visited[128]={0};
    int left=0;
    int maxlen=0;
    for(int right=0;s[right]!='\0';right++){
        while(visited[s[right]]){
            visited[s[left]]=0;
            left++;
        }
        visited[s[right]]=1;
        int lenght=right-left+1;
        if(lenght>maxlen){
            maxlen=lenght;
        }
    }
    return maxlen;
}