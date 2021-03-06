//#include"structs.h"

/*
 *
 * Definition of structs in structs.h
 *
 */
/*Structs.c*/


/*
 *
 * Definition of structs in structs.h
 *
 */

struct root_sector {
  //allocation table
  //root directory
  int allocation_table_loc;
  int root_directory_loc;
  //jump instruction
  //OEM name in text
  //Bios parameter block
  //extended BIOS parameter block
  //bootstrap code
  //end of sector marker
};

struct allocation_pages{
  //tracks sectors in use and how they're connected to each other
  int *page_address;
  int *next_bytes;
  int linked_pages[];
};

struct directory_pages {
  //page of directory entries
  int *page_address;
  int isEmpty;
  struct folder_entry* filelocations;
  
};

struct folder_entry{
  char* name; //8 + 3 chars
  int location;
  //attribute byte -- 8 bits of information
  //create time -- 24 bits
  //create date -- 16 bits
  //last access date -- 16 bits
  //last modified time -- 16 bits
  //last modified date -- 16 bits
  //starting cluster number in the file allocation table -- 16 bits
  //file size -- 32 bits
  
};
