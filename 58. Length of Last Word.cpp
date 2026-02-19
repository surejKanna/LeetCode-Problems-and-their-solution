int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int flag=0;
    for(int i=len-1;i>=0;i--){
        if(s[i] != ' '){
            flag++;
        }
        else if(s[i] == ' ' && (s[i+1] == '\0' || s[i+1] == ' ')){
            continue;
        }
        else{
            break;
        }
    }
    return flag;
}
