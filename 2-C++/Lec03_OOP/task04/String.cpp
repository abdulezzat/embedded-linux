#include "String,h"
#include <cstddef>

// constructors
String::String() : len(0), s(nullptr) { std::cout << "String()" << std::endl; };

String::String(const char *dt) : len(0) {
  std::cout << "String(const char* )" << std::endl;
  while (dt[this->len++] != '\0')
    ;
  this->s = new char[this->len];
  for (int i = 0; i < this->len; i++)
    this->s[i] = dt[i];
};

String::String(unsigned int l, const char *dt) : len(l) {
  std::cout << "String(unsigned int , const char *)" << std::endl;
  this->s = new char[len];
  for (int i = 0; i < this->len; i++) {
    this->s[i] = dt[i];
    if (i == (this->len - 1) && dt[i] != '\0')
      this->s[i] = '\0';
  }
}

// copy constructor
String::String(const String &dt) : len(dt.len) {
  std::cout << "String(const String & )" << std::endl;
  this->s = new char[this->len];
  for (int i = 0; i < this->len; i++)
    this->s[i] = dt.s[i];
};

// move constructor
String::String(String &&dt) : len(dt.len) {
  std::cout << "String(String && )" << std::endl;
  this->s = dt.s; // Ownership movement
  dt.clear();
};

// functions
unsigned int String::size() const {
  std::cout << "size()" << std::endl;
  return this->len;
};

bool String::is_empty() const {
  std::cout << "is_empty()" << std::endl;
  return (this->len == 0 && this->s == nullptr);
};

int String::str_cmp(const String &dt) const {
  std::cout << "str_cmp(const String &)" << std::endl;
  if (dt.is_empty())
    return 1;
  else if (this->is_empty())
    return -1;
  else {
    int i = 0;
    while (true) {
      if (this->s[i] != dt.s[i] || this->s[i] == '\0' || dt.s[i] == '\0')
        break;
      i++;
    }
    int result = ((this->s[i] - dt.s[i]) == 0)
                     ? 0
                     : (((this->s[i] - dt.s[i]) > 0) ? 1 : -1);
    return result;
  }
};

void String::clear() {
  std::cout << "clear()" << std::endl;
  if (this->s) {
    delete[] this->s;
    this->s = nullptr;
  }
  this->len = 0;
};

// operators
String String::operator+(const String &dt) {
  std::cout << "operator+(const String & )" << std::endl;
  int new_len = this->len + dt.len;
  char *new_s = new char[new_len];
  int count = 0;
  for (int i = 0; i < this->len; i++)
    if (this->s[i] != '\0')
      new_s[count++] = this->s[i];

  for (int i = 0; i < dt.len; i++)
    if (dt.s[i] != '\0')
      new_s[count++] = dt.s[i];

  new_s[count++] = '\0';

  new_s = (char *)realloc(new_s, sizeof(*new_s) * count);

  return String(count, new_s);
};

String String::operator+(const char *s) {
  std::cout << "operator+(const char * )" << std::endl;
  String dt(s);
  int new_len = this->len + dt.len;
  char *new_s = new char[new_len];
  int count = 0;
  for (int i = 0; i < this->len; i++)
    if (this->s[i] != '\0')
      new_s[count++] = this->s[i];

  for (int i = 0; i < dt.len; i++)
    if (dt.s[i] != '\0')
      new_s[count++] = dt.s[i];

  new_s[count++] = '\0';

  new_s = (char *)realloc(new_s, sizeof(*new_s) * count);

  return String(count, new_s);
};

void String::operator+=(const String& dt){
  std::cout << "operator+=(const String & )" << std::endl;
  int new_len = this->len + dt.len;
  char *new_s = new char[new_len];
  int count = 0;
  for (int i = 0; i < this->len; i++)
    if (this->s[i] != '\0')
      new_s[count++] = this->s[i];

  for (int i = 0; i < dt.len; i++)
    if (dt.s[i] != '\0')
      new_s[count++] = dt.s[i];

  new_s[count++] = '\0';

  new_s = (char *)realloc(new_s, sizeof(*new_s) * count);
  
  this->clear();

  this->len = count;
  this->s = new_s;
}

void String::operator+=(const char * s){
  std::cout << "operator+=(const char * )" << std::endl;
  String dt(s);
  int new_len = this->len + dt.len;
  char *new_s = new char[new_len];
  int count = 0;
  for (int i = 0; i < this->len; i++)
    if (this->s[i] != '\0')
      new_s[count++] = this->s[i];

  for (int i = 0; i < dt.len; i++)
    if (dt.s[i] != '\0')
      new_s[count++] = dt.s[i];

  new_s[count++] = '\0';

  new_s = (char *)realloc(new_s, sizeof(*new_s) * count);

  this->clear();

  this->len = count;
  this->s = new_s;
}

String &String::operator=(const char *chr) {
  std::cout << "operator=(const char * )" << std::endl;
  if (chr != this->s) {
    if (!this->is_empty())
      this->clear();
    while (chr[this->len++] != '\0')
      ;
    this->s = new char[this->len];
    for (int i = 0; i < this->len; i++)
      this->s[i] = chr[i];
  }
  return *this;
};

String &String::operator=(const String &dt) { // copy constructor
  std::cout << "operator=(const String & )" << std::endl;
  if (&dt != this) {
    if (!this->is_empty())
      this->clear();
    this->len = dt.len;
    this->s = new char[this->len];
    for (int i = 0; i < this->len; i++)
      this->s[i] = dt.s[i];
  }
  return *this;
};

String &String::operator=(String &&dt) { // move assignment
  std::cout << "operator=(const String && )" << std::endl;
  if (&dt != this) {
    if (!this->is_empty())
      this->clear();
    this->len = dt.len;
    this->s = dt.s;

    dt.s = nullptr;
    dt.len = 0;
  }
  return *this;
}; 

std::ostream &operator<<(std::ostream &os, const String &dt) {
  std::cout << "operator<<(std::ostream & , const String & )" << std::endl;
  if (!dt.is_empty()) {
    for (int i = 0; i < dt.len; i++)
      os << dt.s[i];
  }

  return os;
};

std::istream &operator>>(std::istream &is, String &dt) {
std::cout << "operator<<(std::istream & , String & )" << std::endl;
  if (!dt.is_empty()) {
    dt.clear();
  }

  int size = 10;
  char *str;
  int ch;
  size_t len = 0;
  str = (char *)realloc(NULL, sizeof(*str) * size); // size is start size
  // if(!str)return str;
  while (EOF != (ch = is.get()) && ch != '\n') {
    str[len++] = ch;
    if (len == size) {
      str = (char *)realloc(str, sizeof(*str) * (size += 16));
      // if(!str)return str;
    }
  }
  str[len++] = '\0';

  dt.s = (char *)realloc(str, sizeof(*str) * len);
  dt.len = len;

  return is;
};

String::operator char *(){
  std::cout << "operator char *()" << std::endl;
  return this->s;
}

// distructor
String::~String() {
  std::cout << "~String()" << std::endl;
  if (!this->is_empty()) {
    this->clear();
  }
};