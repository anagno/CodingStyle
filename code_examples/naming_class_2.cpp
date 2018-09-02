class ExampleClass
{
  public:
  ...
  int 
  getNumEntries() const 
  { 
    return num_entries_; 
  }

  void 
  setNumEntries (int num_entries) 
  { 
    num_entries_ = num_entries; 
  }

  protected: 
  ... 

  private:
  int num_entries_;
  int example_name_; 

}
