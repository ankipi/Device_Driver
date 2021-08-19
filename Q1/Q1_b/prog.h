
	struct file_operations {
   struct module *owner;                             
  loff_t (*llseek) (struct file *, loff_t, int);    
   ssize_t (*read) (struct file *, char __user *, size_t, loff_t *);    // Used to retrieve data from the device
   ssize_t (*write) (struct file *, const char __user *, size_t, loff_t *);   // Used to send data to the device
   ssize_t (*aio_read) (struct kiocb *, const struct iovec *, unsigned long, loff_t);  // Asynchronous read
   ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long, loff_t); // Asynchronous write
   ssize_t (*read_iter) (struct kiocb *, struct iov_iter *);            // possibly asynchronous read
   ssize_t (*write_iter) (struct kiocb *, struct iov_iter *);           // possibly asynchronous write
   int (*iterate) (struct file *, struct dir_context *);                // called when VFS needs to read the directory contents
   unsigned int (*poll) (struct file *, struct poll_table_struct *);    // Does a read or write block?
   long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long); // Called by the ioctl system call
   long (*compat_ioctl) (struct file *, unsigned int, unsigned long);   
   int (*mmap) (struct file *, struct vm_area_struct *);                
   int (*mremap)(struct file *, struct vm_area_struct *);               
   int (*open) (struct inode *, struct file *);             
   int (*flush) (struct file *, fl_owner_t id);            
   int (*release) (struct inode *, struct file *);          
   int (*fsync) (struct file *, loff_t, loff_t, int datasync);  // notify device of change in its FASYNC flag
   int (*aio_fsync) (struct kiocb *, int datasync);         
   int (*fasync) (int, struct file *, int);                 
   int (*lock) (struct file *, int, struct file_lock *);    
};
