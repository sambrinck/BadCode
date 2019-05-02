class bar
{
  public:
    int location;
    char token
};

bar* findToken(const std::string hugeString)
{
    int i, location;
    unsigned char token;
    char* hugeCopy;
    bar retval;
    
    if(hugeString.size() > 1000)
    {
        std::cout << "Using token '/'\n";
        token = '/';
    }
    else
        std::cout << "Using token '-'\n";
        token = '-';
  
    hugeCopy = new char[398328];
    strcpy(hugeCopy, hugeString->c_str());
  
    // Find the first index of the token within our string by calling our
    // function findFirst(char* inputString, int inputStringSize, char token);
    // If it cannot find the token it returns 0.
    location = findFirst(hugeCopy, 398328, token);
    if( location = 0 )
    {
        printf("ERROR\n");
        return nullptr;
    }
    else
    {
        retval.location = location;
        retval.token = token;
    }
    delete hugeCopy;
    return &retval;
}
