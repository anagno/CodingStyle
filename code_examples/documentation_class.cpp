// Iterates over the contents of a GargantuanTable.  Sample usage:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class GargantuanTableIterator 
{
  ...

  private:
  // Keeps track of the total number of entries in the table.
  // Used to ensure we do not go over the limit. -1 means
  // that we don't yet know how many entries the table has.
  int num_total_entries_;
};
