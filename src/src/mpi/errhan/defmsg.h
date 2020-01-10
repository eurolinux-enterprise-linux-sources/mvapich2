/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file automatically created by extracterrmsgs
 * DO NOT EDIT
 */
typedef struct msgpair {
        const unsigned int sentinal1;
        const char *short_name, *long_name; 
        const unsigned int sentinal2; } msgpair;
#if MPICH_ERROR_MSG_LEVEL > MPICH_ERROR_MSG_NONE
/* The names are in sorted order, allowing the use of a simple
  linear search or bisection algorithm to find the message corresponding to
  a particular message */
static const char short_gen0[] = "**CreateFileMapping";
static const char long_gen0[]  = "CreateFileMapping failed";
static const char short_gen1[] = "**CreateThread";
static const char long_gen1[]  = "CreateThread failed";
static const char short_gen2[] = "**FindWindowEx";
static const char long_gen2[]  = "FindWindowEx failed";
static const char short_gen3[] = "**MPIDI_CH3I_SHM_Attach_to_mem";
static const char long_gen3[]  = "MPIDI_CH3I_SHM_Attach_to_mem failed";
static const char short_gen4[] = "**MPIU_Strdup";
static const char long_gen4[]  = "MPIU_Strdup failed";
static const char short_gen5[] = "**MapViewOfFileEx";
static const char long_gen5[]  = "MapViewOfFileEx failed";
static const char short_gen6[] = "**OpenProcess";
static const char long_gen6[]  = "OpenProcess failed";
static const char short_gen7[] = "**abi_version_mismatch";
static const char long_gen7[]  = "ABI version mismatch";
static const char short_gen8[] = "**activeports";
static const char long_gen8[]  = "Insufficient ports in active state.";
static const char short_gen9[] = "**afinetinvalid";
static const char long_gen9[]  = "Network type AF_INET invalid in call to inet_pton";
static const char short_gen10[] = "**alloc_shar_mem";
static const char long_gen10[]  = "unable to allocate shared memory";
static const char short_gen11[] = "**allocmem";
static const char long_gen11[]  = "Unable to allocate memory for MPI_Alloc_mem";
static const char short_gen12[] = "**arg";
static const char long_gen12[]  = "Invalid argument";
static const char short_gen13[] = "**argarrayneg";
static const char long_gen13[]  = "Negative value in array ";
static const char short_gen14[] = "**argerrcode";
static const char long_gen14[]  = "Invalid error code";
static const char short_gen15[] = "**argneg";
static const char long_gen15[]  = "Invalid argument; must be non-negative";
static const char short_gen16[] = "**argnonpos";
static const char long_gen16[]  = "Invalid argument; must be positive";
static const char short_gen17[] = "**argpackbuf";
static const char long_gen17[]  = "Pack buffer is too small for data";
static const char short_gen18[] = "**argposneg";
static const char long_gen18[]  = "Value of position must be nonnegative";
static const char short_gen19[] = "**argrange";
static const char long_gen19[]  = "Argument is not within valid range";
static const char short_gen20[] = "**argstr_hostd";
static const char long_gen20[]  = "no space for the host description";
static const char short_gen21[] = "**argstr_missinghost";
static const char long_gen21[]  = "Missing hostname or invalid host/port description in business card";
static const char short_gen22[] = "**argstr_missingifname";
static const char long_gen22[]  = "Missing ifname or invalid host/port description in business card";
static const char short_gen23[] = "**argstr_missingport";
static const char long_gen23[]  = "Missing port or invalid host/port description in business card";
static const char short_gen24[] = "**argstr_no_port_name_tag";
static const char long_gen24[]  = "no port_name tag in MPI port.  Make sure that port was created with MPI_Open_port";
static const char short_gen25[] = "**argstr_port";
static const char long_gen25[]  = "no space for the listener port";
static const char short_gen26[] = "**argstr_port_name_tag";
static const char long_gen26[]  = "no space for port_name tag";
static const char short_gen27[] = "**argstr_shmpid";
static const char long_gen27[]  = "no process id in the business card";
static const char short_gen28[] = "**argstr_shmq";
static const char long_gen28[]  = "no space for the shared memory queue name";
static const char short_gen29[] = "**assert";
static const char long_gen29[]  = "Invalid assert argument";
static const char short_gen30[] = "**attach_shar_mem";
static const char long_gen30[]  = "unable to attach to shared memory";
static const char short_gen31[] = "**attach_to_mem";
static const char long_gen31[]  = "attach to shared memory segment failed";
static const char short_gen32[] = "**attrnotptr";
static const char long_gen32[]  = "The attribute value is not the address of a pointer or pointer-sized integer.  A common error is to pass the address of an integer to any of the MPI_Xxx_get_attr routines on systems where the size of a pointer is larger than the size of an integer.";
static const char short_gen33[] = "**attrsentinal";
static const char long_gen33[]  = "Internal fields in an attribute have been overwritten; possible errors in using the attribute value in user code.";
static const char short_gen34[] = "**bad_listenersock";
static const char long_gen34[]  = "bad listener sock";
static const char short_gen35[] = "**bad_set";
static const char long_gen35[]  = "bad set parameter";
static const char short_gen36[] = "**bad_sock";
static const char long_gen36[]  = "bad sock";
static const char short_gen37[] = "**badcase";
static const char long_gen37[]  = "INTERNAL ERROR: unexpected value in case statement";
static const char short_gen38[] = "**badportrange";
static const char long_gen38[]  = "MPICH_PORT_RANGE - invalid range specified";
static const char short_gen39[] = "**base";
static const char long_gen39[]  = "Invalid base address";
static const char short_gen40[] = "**bind";
static const char long_gen40[]  = " Unable to bind socket to address";
static const char short_gen41[] = "**bindportrange";
static const char long_gen41[]  = " Unable to bind socket to port range";
static const char short_gen42[] = "**boot_create";
static const char long_gen42[]  = "unable to create a bootstrap message queue";
static const char short_gen43[] = "**boot_detach";
static const char long_gen43[]  = "detaching from message queue failed";
static const char short_gen44[] = "**boot_recv";
static const char long_gen44[]  = "receiving bootstrap message failed";
static const char short_gen45[] = "**boot_send";
static const char long_gen45[]  = "sending bootstrap message failed";
static const char short_gen46[] = "**boot_unlink";
static const char long_gen46[]  = "unable to unlink the shared memory message queue";
static const char short_gen47[] = "**bootqmsg";
static const char long_gen47[]  = "invalid bootstrap queue message size";
static const char short_gen48[] = "**bsendbufsmall";
static const char long_gen48[]  = "Buffer size is smaller than MPI_BSEND_OVERHEAD";
static const char short_gen49[] = "**buf_inplace";
static const char long_gen49[]  = "buffer cannot be MPI_IN_PLACE";
static const char short_gen50[] = "**bufalias";
static const char long_gen50[]  = "Buffers must not be aliased";
static const char short_gen51[] = "**bufbsend";
static const char long_gen51[]  = "Insufficient space in Bsend buffer";
static const char short_gen52[] = "**bufexists";
static const char long_gen52[]  = "Buffer already attached with MPI_BUFFER_ATTACH.";
static const char short_gen53[] = "**buffer";
static const char long_gen53[]  = "Invalid buffer pointer";
static const char short_gen54[] = "**bufnull";
static const char long_gen54[]  = "Null buffer pointer";
static const char short_gen55[] = "**buscard";
static const char long_gen55[]  = "unable to create a business card";
static const char short_gen56[] = "**buscard_len";
static const char long_gen56[]  = "no space left in the business card to add a parameter";
static const char short_gen57[] = "**business_card";
static const char long_gen57[]  = "Invalid business card";
static const char short_gen58[] = "**cancelunknown";
static const char long_gen58[]  = "Attempt to cancel an unknown type of request";
static const char short_gen59[] = "**cartcoordinvalid";
static const char long_gen59[]  = "Cartesian coordinate is invalid (not in range)";
static const char short_gen60[] = "**cartdim";
static const char long_gen60[]  = "Size of Cartesian grid is larger than the size of the communicator";
static const char short_gen61[] = "**ch3|badmsgtype";
static const char long_gen61[]  = "request contained an invalid message type";
static const char short_gen62[] = "**ch3|badreqtype";
static const char long_gen62[]  = "request contained an invalid request type";
static const char short_gen63[] = "**ch3|cancelreq";
static const char long_gen63[]  = "failure occurred while sending remote cancellation request packet";
static const char short_gen64[] = "**ch3|cancelresp";
static const char long_gen64[]  = "failure occurred while attempting to send cancel response packet";
static const char short_gen65[] = "**ch3|cancelrndv";
static const char long_gen65[]  = "failure occurred while performing local cancellation of a rendezvous message";
static const char short_gen66[] = "**ch3|ch3_init";
static const char long_gen66[]  = "channel initialization failed";
static const char short_gen67[] = "**ch3|close_progress";
static const char long_gen67[]  = "an error occurred while the device was waiting for all open connections to close";
static const char short_gen68[] = "**ch3|conn_parent";
static const char long_gen68[]  = "spawned process group was unable to connect back to the parent";
static const char short_gen69[] = "**ch3|ctspkt";
static const char long_gen69[]  = "failure occurred while attempting to send CTS packet";
static const char short_gen70[] = "**ch3|eagermsg";
static const char long_gen70[]  = "failure occurred while attempting to send an eager message";
static const char short_gen71[] = "**ch3|get_parent_port";
static const char long_gen71[]  = "spawn process group was unable to obtain parent port name from the channel";
static const char short_gen72[] = "**ch3|loadrecviov";
static const char long_gen72[]  = "failure occurred while loading the receive I/O vector";
static const char short_gen73[] = "**ch3|loadsendiov";
static const char long_gen73[]  = "failure occurred while loading the send I/O vector";
static const char short_gen74[] = "**ch3|nopktcontainermem";
static const char long_gen74[]  = "failed to allocate memory for a packet reorder container";
static const char short_gen75[] = "**ch3|ooocancelreq";
static const char long_gen75[]  = "UNIMPLEMENTED: unable to process out-of-order cancellation requests";
static const char short_gen76[] = "**ch3|pktarraytoosmall";
static const char long_gen76[]  = " Size of the array of packet handlers is too small";
static const char short_gen77[] = "**ch3|pktordered";
static const char long_gen77[]  = "failure occurred while processing a reordered packet";
static const char short_gen78[] = "**ch3|pmi_finalize";
static const char long_gen78[]  = "PMI_Finalize failed";
static const char short_gen79[] = "**ch3|postrecv";
static const char long_gen79[]  = "failure occurred while posting a receive for message data";
static const char short_gen80[] = "**ch3|rmamsg";
static const char long_gen80[]  = "failure occurred while attempting to send an RMA message";
static const char short_gen81[] = "**ch3|rmarndvmsg";
static const char long_gen81[]  = "failure occured while MPIDI_CH3I_Send_rma_msg";
static const char short_gen82[] = "**ch3|rndv";
static const char long_gen82[]  = "failure occured while preparing rendezvous transfer";
static const char short_gen83[] = "**ch3|rtspkt";
static const char long_gen83[]  = "failure occurred while attempting to send RTS packet";
static const char short_gen84[] = "**ch3|send_close_ack";
static const char long_gen84[]  = "an error occurred when the device attempted to acknowledge the closing of a connection";
static const char short_gen85[] = "**ch3|senddata";
static const char long_gen85[]  = "failure occurred while attempting to send message data";
static const char short_gen86[] = "**ch3|sock|accept";
static const char long_gen86[]  = "[ch3:sock] accepting a new connection failed";
static const char short_gen87[] = "**ch3|sock|addrinuse";
static const char long_gen87[]  = "[ch3:sock] tcp port already in use";
static const char short_gen88[] = "**ch3|sock|badhost";
static const char long_gen88[]  = "[ch3:soc] invalid host description";
static const char short_gen89[] = "**ch3|sock|badpacket";
static const char long_gen89[]  = "[ch3:sock] received packet of unknow type";
static const char short_gen90[] = "**ch3|sock|badsock";
static const char long_gen90[]  = "[ch3:sock] internal error - bad sock";
static const char short_gen91[] = "**ch3|sock|connalloc";
static const char long_gen91[]  = "[ch3:sock] unable to allocate an internal connection structure";
static const char short_gen92[] = "**ch3|sock|connclose";
static const char long_gen92[]  = "[ch3:sock] active connection unexpectedly closed";
static const char short_gen93[] = "**ch3|sock|connectionfailed";
static const char long_gen93[]  = "Connection failed for virtual channel";
static const char short_gen94[] = "**ch3|sock|connfailed";
static const char long_gen94[]  = "[ch3:sock] failed to connnect to remote process";
static const char short_gen95[] = "**ch3|sock|connrefused";
static const char long_gen95[]  = "[ch3:sock] connection refused";
static const char short_gen96[] = "**ch3|sock|connterm";
static const char long_gen96[]  = "[ch3:sock] active connection unexpectedly terminated";
static const char short_gen97[] = "**ch3|sock|failure";
static const char long_gen97[]  = "[ch3:sock] unknown failure";
static const char short_gen98[] = "**ch3|sock|handle_sock_event";
static const char long_gen98[]  = "an error occurred while handling an event returned by MPIDU_Sock_Wait()";
static const char short_gen99[] = "**ch3|sock|hostlookup";
static const char long_gen99[]  = "[ch3:sock] hostname lookup failed";
static const char short_gen100[] = "**ch3|sock|immedread";
static const char long_gen100[]  = "immediate read operation failed";
static const char short_gen101[] = "**ch3|sock|immedwrite";
static const char long_gen101[]  = "immediate write operation failed";
static const char short_gen102[] = "**ch3|sock|open_lrecv_data";
static const char long_gen102[]  = "[ch3:sock] failed to handle open lrecv data packet";
static const char short_gen103[] = "**ch3|sock|openlsend";
static const char long_gen103[]  = "[ch3:sock] failed to handle open lsend packet";
static const char short_gen104[] = "**ch3|sock|postconnect";
static const char long_gen104[]  = "[ch3:sock] post connect failed";
static const char short_gen105[] = "**ch3|sock|postread";
static const char long_gen105[]  = "attempt to post a read operation failed";
static const char short_gen106[] = "**ch3|sock|postwrite";
static const char long_gen106[]  = "attempt to post a write operation failed";
static const char short_gen107[] = "**ch3|sock|scconnaccept";
static const char long_gen107[]  = "[ch3:sock] failed to handle connection accept packet";
static const char short_gen108[] = "**ch3|sock|scopenresp";
static const char long_gen108[]  = "[ch3:sock] failed to handle open response packet";
static const char short_gen109[] = "**ch3|sock|writefailed";
static const char long_gen109[]  = "Write to socket failed";
static const char short_gen110[] = "**ch3|syncack";
static const char long_gen110[]  = "failure occurred while attempting to send eager synchronization packet";
static const char short_gen111[] = "**ch3|unhandled_connection_state";
static const char long_gen111[]  = "encountered an unexpected connection state";
static const char short_gen112[] = "**close";
static const char long_gen112[]  = "close of socket failed";
static const char short_gen113[] = "**closesocket";
static const char long_gen113[]  = "closesocket failed";
static const char short_gen114[] = "**comm";
static const char long_gen114[]  = "Invalid communicator";
static const char short_gen115[] = "**comm_fail";
static const char long_gen115[]  = "Communication error";
static const char short_gen116[] = "**commnotinter";
static const char long_gen116[]  = "An intercommunicator is required but an intracommunicator was provided.";
static const char short_gen117[] = "**commnotintra";
static const char long_gen117[]  = "An intracommunicator is required but an intercommunicator was provided.";
static const char short_gen118[] = "**commnull";
static const char long_gen118[]  = "Null communicator";
static const char short_gen119[] = "**commperm";
static const char long_gen119[]  = "Cannot free permanent communicator";
static const char short_gen120[] = "**conversion";
static const char long_gen120[]  = "An error occurred in a user-defined data conversion function";
static const char short_gen121[] = "**cookiepkt";
static const char long_gen121[]  = "failure occurred while attempting to send COOKIE packet";
static const char short_gen122[] = "**count";
static const char long_gen122[]  = "Invalid count";
static const char short_gen123[] = "**countneg";
static const char long_gen123[]  = "Negative count";
static const char short_gen124[] = "**ctspkt";
static const char long_gen124[]  = "failure occurred while attempting to send CTS packet";
static const char short_gen125[] = "**darrayblock";
static const char long_gen125[]  = "Value of m must be positive for block(m) distribution";
static const char short_gen126[] = "**darrayblock2";
static const char long_gen126[]  = "m * nprocs is less than array_size and is not valid for block(m) distribution (optional arguments: {m*nprocs}, {array_size} (int))";
static const char short_gen127[] = "**darraycyclic";
static const char long_gen127[]  = "Value of m must be positive for a cyclic(m) distribution";
static const char short_gen128[] = "**darraydist";
static const char long_gen128[]  = "For MPI_DISTRIBUTE_NONE, the number of processes in that dimension of the grid must be 1";
static const char short_gen129[] = "**darrayoverflow";
static const char long_gen129[]  = "Cannot use an array of this size unless the MPI implementation defines a 64-bit MPI_Aint";
static const char short_gen130[] = "**darrayunknown";
static const char long_gen130[]  = "Unknown distribution type ";
static const char short_gen131[] = "**datarepextent";
static const char long_gen131[]  = "Invalid extent callback";
static const char short_gen132[] = "**datarepname";
static const char long_gen132[]  = "Invalid datarep name";
static const char short_gen133[] = "**datarepunsupported";
static const char long_gen133[]  = "Unsupported datarep passed to MPI_File_set_view ";
static const char short_gen134[] = "**datarepused";
static const char long_gen134[]  = "The requested datarep name has already been specified to MPI_REGISTER_DATAREP";
static const char short_gen135[] = "**decode_buffer";
static const char long_gen135[]  = "decode_buffer failed";
static const char short_gen136[] = "**desc_len";
static const char long_gen136[]  = "host description buffer too small";
static const char short_gen137[] = "**detach_shar_mem";
static const char long_gen137[]  = "unable to detach shared memory";
static const char short_gen138[] = "**dev|pg_create";
static const char long_gen138[]  = "unable to create a new process group";
static const char short_gen139[] = "**dev|pg_finalize";
static const char long_gen139[]  = "unable to shutdown the process group management module";
static const char short_gen140[] = "**dev|pg_finalize|list_not_empty";
static const char long_gen140[]  = "process group list was not empty";
static const char short_gen141[] = "**dev|pg_init";
static const char long_gen141[]  = "unable to initialize the process group management module";
static const char short_gen142[] = "**dev|pg_not_found";
static const char long_gen142[]  = "the specified process group object could not be located";
static const char short_gen143[] = "**dev|selfsenddeadlock";
static const char long_gen143[]  = "DEADLOCK: attempting to send a message to the local process without a prior matching receive";
static const char short_gen144[] = "**dev|vcrt_create";
static const char long_gen144[]  = "failed to a create VCRT";
static const char short_gen145[] = "**dev|vcrt_get_ptr";
static const char long_gen145[]  = "failed to get a pointer to VCR table";
static const char short_gen146[] = "**dims";
static const char long_gen146[]  = "Invalid dimension argument";
static const char short_gen147[] = "**dimsmany";
static const char long_gen147[]  = "Number of dimensions is too large ";
static const char short_gen148[] = "**dimspartition";
static const char long_gen148[]  = "Cannot partition nodes as requested ";
static const char short_gen149[] = "**dimszero";
static const char long_gen149[]  = "Communicator associated with zero-dimensional cartesian topology";
static const char short_gen150[] = "**dllversionmismatch";
static const char long_gen150[]  = " The version of the channel DLL Library does not match the version expected by the executable. ";
static const char short_gen151[] = "**donepkt";
static const char long_gen151[]  = "failure occurred while attempting to send DONE packet";
static const char short_gen152[] = "**dtype";
static const char long_gen152[]  = "Invalid datatype";
static const char short_gen153[] = "**dtypecommit";
static const char long_gen153[]  = "Datatype has not been committed ";
static const char short_gen154[] = "**dtypemismatch";
static const char long_gen154[]  = "Receiving data with a datatype whose signature does not match that of the sending datatype.";
static const char short_gen155[] = "**dtypenull";
static const char long_gen155[]  = "Null datatype";
static const char short_gen156[] = "**dtypeperm";
static const char long_gen156[]  = "Cannot free permanent data type ";
static const char short_gen157[] = "**duphandle";
static const char long_gen157[]  = "unable to duplicate a handle";
static const char short_gen158[] = "**dupprocesses";
static const char long_gen158[]  = "Local and remote groups in MPI_Intercomm_create must not contain the same processes";
static const char short_gen159[] = "**dynamic_node_ids";
static const char long_gen159[]  = " Node information for dynamic processes currently is not implemnted";
static const char short_gen160[] = "**edgeoutrange";
static const char long_gen160[]  = "Edge index in graph topology is out of range";
static const char short_gen161[] = "**encode_buffer";
static const char long_gen161[]  = "decode_buffer failed";
static const char short_gen162[] = "**epid_getfailed";
static const char long_gen162[]  = " kvs get of epid failed";
static const char short_gen163[] = "**epid_putcommit";
static const char long_gen163[]  = " kvs commit of epid failed";
static const char short_gen164[] = "**epid_putfailed";
static const char long_gen164[]  = " kvs put of epid failed";
static const char short_gen165[] = "**errhandler";
static const char long_gen165[]  = "Invalid errhandler";
static const char short_gen166[] = "**errhandlernull";
static const char long_gen166[]  = "Null errhandler ";
static const char short_gen167[] = "**errhandnotfile";
static const char long_gen167[]  = "Error handler is not a file error handler";
static const char short_gen168[] = "**errhandnotwin";
static const char long_gen168[]  = "Error handler is not a win error handler";
static const char short_gen169[] = "**f90typecomplexnone";
static const char long_gen169[]  = " No complex type with the requested range and/or precision is available";
static const char short_gen170[] = "**f90typeintnone";
static const char long_gen170[]  = " No integer type with the requested range is available";
static const char short_gen171[] = "**f90typerealnone";
static const char long_gen171[]  = " No real type with the requested range and/or precision is available";
static const char short_gen172[] = "**f90typetoomany";
static const char long_gen172[]  = "Too many requests for unnamed, predefined f90 types";
static const char short_gen173[] = "**fail";
static const char long_gen173[]  = "";
static const char short_gen174[] = "**fdopen";
static const char long_gen174[]  = "fdopen failed";
static const char short_gen175[] = "**file";
static const char long_gen175[]  = "Invalid MPI_File";
static const char short_gen176[] = "**fileaccess";
static const char long_gen176[]  = "Access denied to file";
static const char short_gen177[] = "**fileamode";
static const char long_gen177[]  = "Invalid amode value in MPI_File_open ";
static const char short_gen178[] = "**fileamodeone";
static const char long_gen178[]  = "Exactly one of MPI_MODE_RDONLY, MPI_MODE_WRONLY, or MPI_MODE_RDWR must be specified";
static const char short_gen179[] = "**fileamoderead";
static const char long_gen179[]  = "Cannot use MPI_MODE_CREATE or MPI_MODE_EXCL with MPI_MODE_RDONLY ";
static const char short_gen180[] = "**fileamodeseq";
static const char long_gen180[]  = "Cannot specify MPI_MODE_SEQUENTIAL with MPI_MODE_RDWR";
static const char short_gen181[] = "**fileexist";
static const char long_gen181[]  = "File exists";
static const char short_gen182[] = "**fileinuse";
static const char long_gen182[]  = "File in use by some process";
static const char short_gen183[] = "**filename";
static const char long_gen183[]  = "Invalid file name";
static const char short_gen184[] = "**filenamedir";
static const char long_gen184[]  = "Invalid or missing directory";
static const char short_gen185[] = "**filenamelong";
static const char long_gen185[]  = "Pathname too long";
static const char short_gen186[] = "**filenoexist";
static const char long_gen186[]  = "File does not exist";
static const char short_gen187[] = "**filenospace";
static const char long_gen187[]  = "Not enough space for file ";
static const char short_gen188[] = "**fileopunsupported";
static const char long_gen188[]  = "Unsupported file operation ";
static const char short_gen189[] = "**filequota";
static const char long_gen189[]  = "Quota exceeded for files";
static const char short_gen190[] = "**filerdonly";
static const char long_gen190[]  = "Read-only file or filesystem name";
static const char short_gen191[] = "**finalize_boot";
static const char long_gen191[]  = "destroying the message queue failed";
static const char short_gen192[] = "**finalize_progress_finalize";
static const char long_gen192[]  = "Progress finalize failed";
static const char short_gen193[] = "**finalize_release_mem";
static const char long_gen193[]  = "Release shared memory failed";
static const char short_gen194[] = "**finalized";
static const char long_gen194[]  = "MPI has already called MPI_Finalize";
static const char short_gen195[] = "**flag";
static const char long_gen195[]  = "invalid flag parameter";
static const char short_gen196[] = "**fopen";
static const char long_gen196[]  = "fopen failed";
static const char short_gen197[] = "**ftb_connect";
static const char long_gen197[]  = "FTB_Connect failed";
static const char short_gen198[] = "**ftb_declare_publishable_events";
static const char long_gen198[]  = "FTB_Declare_publishable_events failed";
static const char short_gen199[] = "**ftok";
static const char long_gen199[]  = "failed to create a sysv key from a file name";
static const char short_gen200[] = "**ftruncate";
static const char long_gen200[]  = "unable to resize the shared memory object";
static const char short_gen201[] = "**gethostbyname";
static const char long_gen201[]  = "gethostbyname failed";
static const char short_gen202[] = "**getinfo";
static const char long_gen202[]  = "getaddrinfo failed";
static const char short_gen203[] = "**getsockname";
static const char long_gen203[]  = "getsockname failed";
static const char short_gen204[] = "**getsockopt";
static const char long_gen204[]  = "getsockopt failed";
static const char short_gen205[] = "**globus|badreqtype";
static const char long_gen205[]  = "globus|badreqtype";
static const char short_gen206[] = "**globus|bc_add_contact";
static const char long_gen206[]  = "globus|bc_add_contact";
static const char short_gen207[] = "**globus|bc_contact_not_found";
static const char long_gen207[]  = "the requested information was not found in the business card";
static const char short_gen208[] = "**globus|bc_copy";
static const char long_gen208[]  = "globus|bc_copy";
static const char short_gen209[] = "**globus|bc_deserialize";
static const char long_gen209[]  = "globus|bc_deserialize";
static const char short_gen210[] = "**globus|bc_get_contact";
static const char long_gen210[]  = "globus|bc_get_contact";
static const char short_gen211[] = "**globus|bc_serialize";
static const char long_gen211[]  = "globus|bc_serialize";
static const char short_gen212[] = "**globus|cancel_completed_sreq";
static const char long_gen212[]  = "globus|cancel_completed_sreq";
static const char short_gen213[] = "**globus|cm_other|recv_any_source";
static const char long_gen213[]  = "globus|cm_other|recv_any_source";
static const char short_gen214[] = "**globus|cm_other|vc_recv_any_source";
static const char long_gen214[]  = "globus|cm_other|vc_recv_any_source";
static const char short_gen215[] = "**globus|cm_pe_test";
static const char long_gen215[]  = "globus|cm_pe_test";
static const char short_gen216[] = "**globus|cm_pe_wait";
static const char long_gen216[]  = "globus|cm_pe_wait";
static const char short_gen217[] = "**globus|cm_self|hostname";
static const char long_gen217[]  = "globus|cm_self|hostname";
static const char short_gen218[] = "**globus|cm_self|probedeadlock";
static const char long_gen218[]  = "globus|cm_self|probedeadlock";
static const char short_gen219[] = "**globus|cm_vmpi|cancel_ras";
static const char long_gen219[]  = "globus|cm_vmpi|cancel_ras";
static const char short_gen220[] = "**globus|cm_vmpi|dt_resize_bounds";
static const char long_gen220[]  = "globus|cm_vmpi|dt_resize_bounds";
static const char short_gen221[] = "**globus|cm_vmpi|iprobe_any_source";
static const char long_gen221[]  = "globus|cm_vmpi|iprobe_any_source";
static const char short_gen222[] = "**globus|cm_vmpi|localcomm";
static const char long_gen222[]  = "globus|cm_vmpi|localcomm";
static const char short_gen223[] = "**globus|cm_vmpi|pe_table_add_req";
static const char long_gen223[]  = "globus|cm_vmpi|pe_table_add_req";
static const char short_gen224[] = "**globus|cm_vmpi|reg_ras";
static const char long_gen224[]  = "globus|cm_vmpi|reg_ras";
static const char short_gen225[] = "**globus|cm_vmpi|unreg_ras";
static const char long_gen225[]  = "globus|cm_vmpi|unreg_ras";
static const char short_gen226[] = "**globus|cm_vmpi|uuid_create";
static const char long_gen226[]  = "an error occurred while attempting to create a UUID";
static const char short_gen227[] = "**globus|cm_vmpi|uuid_generate";
static const char long_gen227[]  = "globus|cm_vmpi|uuid_generate";
static const char short_gen228[] = "**globus|cm_vmpi|uuid_import";
static const char long_gen228[]  = "globus|cm_vmpi|uuid_import";
static const char short_gen229[] = "**globus|cm_vmpi|uuid_parse";
static const char long_gen229[]  = "globus|cm_vmpi|uuid_parse";
static const char short_gen230[] = "**globus|cm_xio_port_find_and_lock";
static const char long_gen230[]  = "globus|cm_xio_port_find_and_lock";
static const char short_gen231[] = "**globus|cm_xio|client_connect_port";
static const char long_gen231[]  = "globus|cm_xio|client_connect_port";
static const char short_gen232[] = "**globus|cm_xio|client_connect_proc";
static const char long_gen232[]  = "globus|cm_xio|client_connect_proc";
static const char short_gen233[] = "**globus|cm_xio|client_handle_create";
static const char long_gen233[]  = "attempt to create an XIO handle failed";
static const char short_gen234[] = "**globus|cm_xio|client_handle_open";
static const char long_gen234[]  = "globus|cm_xio|client_handle_open";
static const char short_gen235[] = "**globus|cm_xio|client_handle_port_closing";
static const char long_gen235[]  = "globus|cm_xio|client_handle_port_closing";
static const char short_gen236[] = "**globus|cm_xio|client_handle_port_enq_failed";
static const char long_gen236[]  = "globus|cm_xio|client_handle_port_enq_failed";
static const char short_gen237[] = "**globus|cm_xio|client_handle_port_not_found";
static const char long_gen237[]  = "globus|cm_xio|client_handle_port_not_found";
static const char short_gen238[] = "**globus|cm_xio|client_handle_port_unexp_resp";
static const char long_gen238[]  = "globus|cm_xio|client_handle_port_unexp_resp";
static const char short_gen239[] = "**globus|cm_xio|client_handle_recv_magic";
static const char long_gen239[]  = "globus|cm_xio|client_handle_recv_magic";
static const char short_gen240[] = "**globus|cm_xio|client_handle_recv_open_port_resp";
static const char long_gen240[]  = "globus|cm_xio|client_handle_recv_open_port_resp";
static const char short_gen241[] = "**globus|cm_xio|client_handle_recv_open_proc_resp";
static const char long_gen241[]  = "globus|cm_xio|client_handle_recv_open_proc_resp";
static const char short_gen242[] = "**globus|cm_xio|client_handle_send_magic";
static const char long_gen242[]  = "globus|cm_xio|client_handle_send_magic";
static const char short_gen243[] = "**globus|cm_xio|client_handle_send_open_port_req";
static const char long_gen243[]  = "globus|cm_xio|client_handle_send_open_port_req";
static const char short_gen244[] = "**globus|cm_xio|client_handle_send_open_port_resp_ack";
static const char long_gen244[]  = "globus|cm_xio|client_handle_send_open_port_resp_ack";
static const char short_gen245[] = "**globus|cm_xio|client_handle_send_open_proc_req";
static const char long_gen245[]  = "globus|cm_xio|client_handle_send_open_proc_req";
static const char short_gen246[] = "**globus|cm_xio|client_magic_mismatch";
static const char long_gen246[]  = "globus|cm_xio|client_magic_mismatch";
static const char short_gen247[] = "**globus|cm_xio|client_port_vc_failed";
static const char long_gen247[]  = "globus|cm_xio|client_port_vc_failed";
static const char short_gen248[] = "**globus|cm_xio|client_reg_recv_magic";
static const char long_gen248[]  = "globus|cm_xio|client_reg_recv_magic";
static const char short_gen249[] = "**globus|cm_xio|client_reg_recv_open_port_resp";
static const char long_gen249[]  = "globus|cm_xio|client_reg_recv_open_port_resp";
static const char short_gen250[] = "**globus|cm_xio|client_reg_recv_open_proc_resp";
static const char long_gen250[]  = "globus|cm_xio|client_reg_recv_open_proc_resp";
static const char short_gen251[] = "**globus|cm_xio|client_reg_recv_open_resp";
static const char long_gen251[]  = "globus|cm_xio|client_reg_recv_open_resp";
static const char short_gen252[] = "**globus|cm_xio|client_reg_send_magic";
static const char long_gen252[]  = "globus|cm_xio|client_reg_send_magic";
static const char short_gen253[] = "**globus|cm_xio|client_reg_send_open_port_req";
static const char long_gen253[]  = "globus|cm_xio|client_reg_send_open_port_req";
static const char short_gen254[] = "**globus|cm_xio|client_reg_send_open_port_resp_ack";
static const char long_gen254[]  = "globus|cm_xio|client_reg_send_open_port_resp_ack";
static const char short_gen255[] = "**globus|cm_xio|client_reg_send_open_proc_req";
static const char long_gen255[]  = "globus|cm_xio|client_reg_send_open_proc_req";
static const char short_gen256[] = "**globus|cm_xio|disconnect_close_proc";
static const char long_gen256[]  = "globus|cm_xio|disconnect_close_proc";
static const char short_gen257[] = "**globus|cm_xio|disconnect_close_temp";
static const char long_gen257[]  = "globus|cm_xio|disconnect_close_temp";
static const char short_gen258[] = "**globus|cm_xio|disconnect_handle_send_close_msg";
static const char long_gen258[]  = "globus|cm_xio|disconnect_handle_send_close_msg";
static const char short_gen259[] = "**globus|cm_xio|disconnect_send_enq_close_msg";
static const char long_gen259[]  = "globus|cm_xio|disconnect_send_enq_close_msg";
static const char short_gen260[] = "**globus|cm_xio|disconnnect_handle_close_proc";
static const char long_gen260[]  = "globus|cm_xio|disconnnect_handle_close_proc";
static const char short_gen261[] = "**globus|cm_xio|module_init";
static const char long_gen261[]  = "an error occurred while initializing the XIO communication module";
static const char short_gen262[] = "**globus|cm_xio|msg_handler";
static const char long_gen262[]  = "globus|cm_xio|msg_handler";
static const char short_gen263[] = "**globus|cm_xio|nets_init";
static const char long_gen263[]  = "globus|cm_xio|nets_init";
static const char short_gen264[] = "**globus|cm_xio|port_dequeue_vc";
static const char long_gen264[]  = "globus|cm_xio|port_dequeue_vc";
static const char short_gen265[] = "**globus|cm_xio|port_list_insert";
static const char long_gen265[]  = "globus|cm_xio|port_list_insert";
static const char short_gen266[] = "**globus|cm_xio|port_name_too_long";
static const char long_gen266[]  = "globus|cm_xio|port_name_too_long";
static const char short_gen267[] = "**globus|cm_xio|rcq_deq_test";
static const char long_gen267[]  = "globus|cm_xio|rcq_deq_test";
static const char short_gen268[] = "**globus|cm_xio|rcq_deq_wait";
static const char long_gen268[]  = "globus|cm_xio|rcq_deq_wait";
static const char short_gen269[] = "**globus|cm_xio|rcq_finalize";
static const char long_gen269[]  = "globus|cm_xio|rcq_finalize";
static const char short_gen270[] = "**globus|cm_xio|rcq_init";
static const char long_gen270[]  = "globus|cm_xio|rcq_init";
static const char short_gen271[] = "**globus|cm_xio|recv_handle_incoming_msg";
static const char long_gen271[]  = "globus|cm_xio|recv_handle_incoming_msg";
static const char short_gen272[] = "**globus|cm_xio|recv_handle_xio_read_msg_data";
static const char long_gen272[]  = "globus|cm_xio|recv_handle_xio_read_msg_data";
static const char short_gen273[] = "**globus|cm_xio|recv_next_msg";
static const char long_gen273[]  = "attempt to post a receive for the next incoming message failed";
static const char short_gen274[] = "**globus|cm_xio|reg_read_rreq";
static const char long_gen274[]  = "globus|cm_xio|reg_read_rreq";
static const char short_gen275[] = "**globus|cm_xio|reg_read_vc_msgbuf";
static const char long_gen275[]  = "globus|cm_xio|reg_read_vc_msgbuf";
static const char short_gen276[] = "**globus|cm_xio|reg_write_sreq";
static const char long_gen276[]  = "globus|cm_xio|reg_write_sreq";
static const char short_gen277[] = "**globus|cm_xio|req_recv_state";
static const char long_gen277[]  = "globus|cm_xio|req_recv_state";
static const char short_gen278[] = "**globus|cm_xio|seg_pack_iov";
static const char long_gen278[]  = "globus|cm_xio|seg_pack_iov";
static const char short_gen279[] = "**globus|cm_xio|send_enq_cancel_send_msg";
static const char long_gen279[]  = "a failure occurred while sending a cancel send message";
static const char short_gen280[] = "**globus|cm_xio|send_enq_cancel_send_resp_msg";
static const char long_gen280[]  = "a failure occurred while send a cancel send response message";
static const char short_gen281[] = "**globus|cm_xio|send_enq_isend";
static const char long_gen281[]  = "globus|cm_xio|send_enq_isend";
static const char short_gen282[] = "**globus|cm_xio|send_enq_rndv_cts_msg";
static const char long_gen282[]  = "globus|cm_xio|send_enq_rndv_cts_msg";
static const char short_gen283[] = "**globus|cm_xio|send_enq_rndv_data_msg";
static const char long_gen283[]  = "globus|cm_xio|send_enq_rndv_data_msg";
static const char short_gen284[] = "**globus|cm_xio|send_enq_sreq";
static const char long_gen284[]  = "globus|cm_xio|send_enq_sreq";
static const char short_gen285[] = "**globus|cm_xio|send_enq_ssend_ack_msg";
static const char long_gen285[]  = "globus|cm_xio|send_enq_ssend_ack_msg";
static const char short_gen286[] = "**globus|cm_xio|send_handle_msg_data";
static const char long_gen286[]  = "globus|cm_xio|send_handle_msg_data";
static const char short_gen287[] = "**globus|cm_xio|send_handle_write_control_msg";
static const char long_gen287[]  = "globus|cm_xio|send_handle_write_control_msg";
static const char short_gen288[] = "**globus|cm_xio|send_next_sreq";
static const char long_gen288[]  = "attempt to send the next request on the send queue failed";
static const char short_gen289[] = "**globus|cm_xio|send_open_port_req";
static const char long_gen289[]  = "globus|cm_xio|send_open_port_req";
static const char short_gen290[] = "**globus|cm_xio|send_open_proc_req";
static const char long_gen290[]  = "globus|cm_xio|send_open_proc_req";
static const char short_gen291[] = "**globus|cm_xio|server_create";
static const char long_gen291[]  = "globus|cm_xio|server_create";
static const char short_gen292[] = "**globus|cm_xio|server_get_cs";
static const char long_gen292[]  = "globus|cm_xio|server_get_cs";
static const char short_gen293[] = "**globus|cm_xio|server_handle_connection";
static const char long_gen293[]  = "globus|cm_xio|server_handle_connection";
static const char short_gen294[] = "**globus|cm_xio|server_handle_recv_open_port_req";
static const char long_gen294[]  = "globus|cm_xio|server_handle_recv_open_port_req";
static const char short_gen295[] = "**globus|cm_xio|server_handle_recv_open_proc_req";
static const char long_gen295[]  = "globus|cm_xio|server_handle_recv_open_proc_req";
static const char short_gen296[] = "**globus|cm_xio|server_listen";
static const char long_gen296[]  = "globus|cm_xio|server_listen";
static const char short_gen297[] = "**globus|cm_xio|server_multiple_failures";
static const char long_gen297[]  = "the XIO communication module encountered too many errors while accepting connections from the listener";
static const char short_gen298[] = "**globus|cm_xio|server_port_vc_failed";
static const char long_gen298[]  = "globus|cm_xio|server_port_vc_failed";
static const char short_gen299[] = "**globus|cm_xio|server_reg_recv_magic";
static const char long_gen299[]  = "globus|cm_xio|server_reg_recv_magic";
static const char short_gen300[] = "**globus|cm_xio|server_reg_recv_open_req";
static const char long_gen300[]  = "globus|cm_xio|server_reg_recv_open_req";
static const char short_gen301[] = "**globus|cm_xio|server_reg_send_magic";
static const char long_gen301[]  = "globus|cm_xio|server_reg_send_magic";
static const char short_gen302[] = "**globus|cm_xio|server_reg_send_open_proc_resp";
static const char long_gen302[]  = "globus|cm_xio|server_reg_send_open_proc_resp";
static const char short_gen303[] = "**globus|cm_xio|server_reg_send_open_resp";
static const char long_gen303[]  = "globus|cm_xio|server_reg_send_open_resp";
static const char short_gen304[] = "**globus|cm_xio|server_send_open_error_resp";
static const char long_gen304[]  = "globus|cm_xio|server_send_open_error_resp";
static const char short_gen305[] = "**globus|cm_xio|server_send_open_port_resp";
static const char long_gen305[]  = "globus|cm_xio|server_send_open_port_resp";
static const char short_gen306[] = "**globus|cm_xio|server_send_open_proc_resp_ack";
static const char long_gen306[]  = "globus|cm_xio|server_send_open_proc_resp_ack";
static const char short_gen307[] = "**globus|cm_xio|server_send_open_proc_resp_nak";
static const char long_gen307[]  = "globus|cm_xio|server_send_open_proc_resp_nak";
static const char short_gen308[] = "**globus|cm_xio|stream_req_init";
static const char long_gen308[]  = "globus|cm_xio|stream_req_init";
static const char short_gen309[] = "**globus|cm_xio|stream_rreq_init";
static const char long_gen309[]  = "globus|cm_xio|stream_rreq_init";
static const char short_gen310[] = "**globus|cm_xio|stream_rreq_unpack";
static const char long_gen310[]  = "globus|cm_xio|stream_rreq_unpack";
static const char short_gen311[] = "**globus|cm_xio|stream_rreq_unpack_vc_msgbuf";
static const char long_gen311[]  = "globus|cm_xio|stream_rreq_unpack_vc_msgbuf";
static const char short_gen312[] = "**globus|cm_xio|stream_sreq_init";
static const char long_gen312[]  = "globus|cm_xio|stream_sreq_init";
static const char short_gen313[] = "**globus|cm_xio|stream_sreq_pack";
static const char long_gen313[]  = "globus|cm_xio|stream_sreq_pack";
static const char short_gen314[] = "**globus|cm_xio|stream_trunc";
static const char long_gen314[]  = "globus|cm_xio|stream_trunc";
static const char short_gen315[] = "**globus|cm_xio|vc_connection";
static const char long_gen315[]  = "globus|cm_xio|vc_connection";
static const char short_gen316[] = "**globus|cm_xio|vc_corrupt";
static const char long_gen316[]  = "globus|cm_xio|vc_corrupt";
static const char short_gen317[] = "**globus|cm_xio|vc_uninit";
static const char long_gen317[]  = "globus|cm_xio|vc_uninit";
static const char short_gen318[] = "**globus|cm_xio|xio_attr_cntl";
static const char long_gen318[]  = "globus|cm_xio|xio_attr_cntl";
static const char short_gen319[] = "**globus|cm_xio|xio_attr_destroy";
static const char long_gen319[]  = "globus|cm_xio|xio_attr_destroy";
static const char short_gen320[] = "**globus|cm_xio|xio_attr_init";
static const char long_gen320[]  = "globus|cm_xio|xio_attr_init";
static const char short_gen321[] = "**globus|cm_xio|xio_close_server";
static const char long_gen321[]  = "globus|cm_xio|xio_close_server";
static const char short_gen322[] = "**globus|cm_xio|xio_driver_load_transform";
static const char long_gen322[]  = "globus|cm_xio|xio_driver_load_transform";
static const char short_gen323[] = "**globus|cm_xio|xio_driver_load_transport";
static const char long_gen323[]  = "globus|cm_xio|xio_driver_load_transport";
static const char short_gen324[] = "**globus|cm_xio|xio_driver_unload_transport";
static const char long_gen324[]  = "globus|cm_xio|xio_driver_unload_transport";
static const char short_gen325[] = "**globus|cm_xio|xio_reg_close";
static const char long_gen325[]  = "globus|cm_xio|xio_reg_close";
static const char short_gen326[] = "**globus|cm_xio|xio_reg_open";
static const char long_gen326[]  = "globus|cm_xio|xio_reg_open";
static const char short_gen327[] = "**globus|cm_xio|xio_reg_read";
static const char long_gen327[]  = "globus|cm_xio|xio_reg_read";
static const char short_gen328[] = "**globus|cm_xio|xio_reg_readv";
static const char long_gen328[]  = "globus|cm_xio|xio_reg_readv";
static const char short_gen329[] = "**globus|cm_xio|xio_reg_write";
static const char long_gen329[]  = "globus|cm_xio|xio_reg_write";
static const char short_gen330[] = "**globus|cm_xio|xio_reg_writev";
static const char long_gen330[]  = "globus|cm_xio|xio_reg_writev";
static const char short_gen331[] = "**globus|cm_xio|xio_server_reg_accept";
static const char long_gen331[]  = "globus|cm_xio|xio_server_reg_accept";
static const char short_gen332[] = "**globus|cm_xio|xio_stack_destroy";
static const char long_gen332[]  = "globus|cm_xio|xio_stack_destroy";
static const char short_gen333[] = "**globus|cm_xio|xio_stack_init";
static const char long_gen333[]  = "globus|cm_xio|xio_stack_init";
static const char short_gen334[] = "**globus|cm_xio|xio_stack_push_driver";
static const char long_gen334[]  = "globus|cm_xio|xio_stack_push_driver";
static const char short_gen335[] = "**globus|cm|add_contact_info";
static const char long_gen335[]  = "an error occurred while a communication method was adding its contact information to the business card";
static const char short_gen336[] = "**globus|cm|construct_vc_contact_info";
static const char long_gen336[]  = "an error ocurred while a communication method was attempting to extract contact information";
static const char short_gen337[] = "**globus|cm|finalize";
static const char long_gen337[]  = "an error occurred while shutting down a communication method";
static const char short_gen338[] = "**globus|cm|init";
static const char long_gen338[]  = "an error occured while initializing a communication method";
static const char short_gen339[] = "**globus|cm|select_comm_method";
static const char long_gen339[]  = "an error ocurred while a communication method was deciding if it could handle communication for the specified process";
static const char short_gen340[] = "**globus|cm|select_comm_method_none";
static const char long_gen340[]  = "no suitable communication method was found";
static const char short_gen341[] = "**globus|comm_create_key";
static const char long_gen341[]  = "globus|comm_create_key";
static const char short_gen342[] = "**globus|comm_destroy_key";
static const char long_gen342[]  = "globus|comm_destroy_key";
static const char short_gen343[] = "**globus|comm_finalize";
static const char long_gen343[]  = "globus|comm_finalize";
static const char short_gen344[] = "**globus|comm_init";
static const char long_gen344[]  = "globus|comm_init";
static const char short_gen345[] = "**globus|comm_set_attr";
static const char long_gen345[]  = "globus|comm_set_attr";
static const char short_gen346[] = "**globus|cond_destroy";
static const char long_gen346[]  = "an error occurred while destroying a condition variable ";
static const char short_gen347[] = "**globus|cond_init";
static const char long_gen347[]  = "an error occurred while initializing a condition variable ";
static const char short_gen348[] = "**globus|connacc|bcast_vct_error_status";
static const char long_gen348[]  = "globus|connacc|bcast_vct_error_status";
static const char short_gen349[] = "**globus|connacc|bcast_vct_error_status_recvd";
static const char long_gen349[]  = "globus|connacc|bcast_vct_error_status_recvd";
static const char short_gen350[] = "**globus|connacc|bcast_vct_len";
static const char long_gen350[]  = "globus|connacc|bcast_vct_len";
static const char short_gen351[] = "**globus|connacc|bcast_vct_str";
static const char long_gen351[]  = "globus|connacc|bcast_vct_str";
static const char short_gen352[] = "**globus|connacc|close_port";
static const char long_gen352[]  = "globus|connacc|close_port";
static const char short_gen353[] = "**globus|connacc|ctxalloc";
static const char long_gen353[]  = "globus|connacc|ctxalloc";
static const char short_gen354[] = "**globus|connacc|open_port";
static const char long_gen354[]  = "globus|connacc|open_port";
static const char short_gen355[] = "**globus|connacc|port_accept";
static const char long_gen355[]  = "globus|connacc|port_accept";
static const char short_gen356[] = "**globus|connacc|port_connect";
static const char long_gen356[]  = "globus|connacc|port_connect";
static const char short_gen357[] = "**globus|connacc|port_vc_recv";
static const char long_gen357[]  = "globus|connacc|port_vc_recv";
static const char short_gen358[] = "**globus|connacc|port_vc_send";
static const char long_gen358[]  = "globus|connacc|port_vc_send";
static const char short_gen359[] = "**globus|connacc|vcrt_deserialize";
static const char long_gen359[]  = "globus|connacc|vcrt_deserialize";
static const char short_gen360[] = "**globus|connacc|vcrt_serialize";
static const char long_gen360[]  = "globus|connacc|vcrt_serialize";
static const char short_gen361[] = "**globus|datatype_bc_to_cmap";
static const char long_gen361[]  = "globus|datatype_bc_to_cmap";
static const char short_gen362[] = "**globus|datatype_cmap_to_bc";
static const char long_gen362[]  = "globus|datatype_cmap_to_bc";
static const char short_gen363[] = "**globus|fifo_enq";
static const char long_gen363[]  = "globus|fifo_enq";
static const char short_gen364[] = "**globus|get_vc_compatability";
static const char long_gen364[]  = "globus|get_vc_compatability";
static const char short_gen365[] = "**globus|inttostrconv";
static const char long_gen365[]  = "an error occurred while converting an integer to a string";
static const char short_gen366[] = "**globus|module_activate";
static const char long_gen366[]  = "attempt to activate a Globus module failed";
static const char short_gen367[] = "**globus|module_deactivate";
static const char long_gen367[]  = "attempt to deactivate a Globus module failed";
static const char short_gen368[] = "**globus|mutex_destroy";
static const char long_gen368[]  = "an error occurred while destroying a mutex";
static const char short_gen369[] = "**globus|mutex_init";
static const char long_gen369[]  = "an error occurred while initializing a mutex ";
static const char short_gen370[] = "**globus|pe_poke";
static const char long_gen370[]  = "globus|pe_poke";
static const char short_gen371[] = "**globus|pe_wait";
static const char long_gen371[]  = "globus|pe_wait";
static const char short_gen372[] = "**globus|pg_acquire_ref";
static const char long_gen372[]  = "globus|pg_acquire_ref";
static const char short_gen373[] = "**globus|pg_create";
static const char long_gen373[]  = "globus|pg_create";
static const char short_gen374[] = "**globus|pg|lpid_counter";
static const char long_gen374[]  = "globus|pg|lpid_counter";
static const char short_gen375[] = "**globus|pm_distribute_business_cards";
static const char long_gen375[]  = "an error occcurred while attempting to distribute business cards ";
static const char short_gen376[] = "**globus|pm_finalize";
static const char long_gen376[]  = "globus|pm_finalize";
static const char short_gen377[] = "**globus|pm_finalized";
static const char long_gen377[]  = "attempt to use the process manangement module after shutdown";
static const char short_gen378[] = "**globus|pm_get_app_num";
static const char long_gen378[]  = "globus|pm_get_app_num";
static const char short_gen379[] = "**globus|pm_get_sjrank";
static const char long_gen379[]  = "an error occurred while attempting to acquire the rank of this process within its subjob";
static const char short_gen380[] = "**globus|pm_get_sjsize";
static const char long_gen380[]  = "an error occurred while attempting to acquire  the size of the subjob to which this process belongs";
static const char short_gen381[] = "**globus|pm_get_topology";
static const char long_gen381[]  = "an error occurred while exchanging topology information";
static const char short_gen382[] = "**globus|pm_gk_insufficient_bc";
static const char long_gen382[]  = "globus|pm_gk_insufficient_bc";
static const char short_gen383[] = "**globus|pm_gk_intra_subjob_bcast";
static const char long_gen383[]  = "globus|pm_gk_intra_subjob_bcast";
static const char short_gen384[] = "**globus|pm_gk_intra_subjob_gather";
static const char long_gen384[]  = "globus|pm_gk_intra_subjob_gather";
static const char short_gen385[] = "**globus|pm_gk_intra_subjob_receive";
static const char long_gen385[]  = "globus|pm_gk_intra_subjob_receive";
static const char short_gen386[] = "**globus|pm_gk_intra_subjob_send";
static const char long_gen386[]  = "globus|pm_gk_intra_subjob_send";
static const char short_gen387[] = "**globus|pm_gk_malformed_app_num";
static const char long_gen387[]  = "globus|pm_gk_malformed_app_num";
static const char short_gen388[] = "**globus|pm_gk_no_app_num";
static const char long_gen388[]  = "the PM_GK_APP_NUM contact string was missing from the business card";
static const char short_gen389[] = "**globus|pm_gk_sj_index_atoi";
static const char long_gen389[]  = "globus|pm_gk_sj_index_atoi";
static const char short_gen390[] = "**globus|pm_init";
static const char long_gen390[]  = "an error occurred while initializing the process management module";
static const char short_gen391[] = "**globus|pm_no_exchange";
static const char long_gen391[]  = "globus|pm_no_exchange";
static const char short_gen392[] = "**globus|pm_no_module";
static const char long_gen392[]  = "globus|pm_no_module";
static const char short_gen393[] = "**globus|pm_not_init";
static const char long_gen393[]  = "attempt to use the process manangement module before initialization";
static const char short_gen394[] = "**globus|pm_pg_id_create";
static const char long_gen394[]  = "an error occurred while attempting to create a process group id";
static const char short_gen395[] = "**globus|pm_xchg";
static const char long_gen395[]  = "an error occurred while exchanging business cards with the other processes";
static const char short_gen396[] = "**globus|recvq_deq_posted_or_enq_unexp";
static const char long_gen396[]  = "globus|recvq_deq_posted_or_enq_unexp";
static const char short_gen397[] = "**globus|recvq_deq_unexp_or_enq_posted";
static const char long_gen397[]  = "globus|recvq_deq_unexp_or_enq_posted";
static const char short_gen398[] = "**globus|recvq_finalize";
static const char long_gen398[]  = "an error occurred while shutting down the receive queue module";
static const char short_gen399[] = "**globus|recvq_fuaes";
static const char long_gen399[]  = "globus|recvq_fuaes";
static const char short_gen400[] = "**globus|recvq_init";
static const char long_gen400[]  = "an error occurred while initializing the receive queue module";
static const char short_gen401[] = "**globus|recvq_unreg_ras";
static const char long_gen401[]  = "globus|recvq_unreg_ras";
static const char short_gen402[] = "**globus|request_get_ptr";
static const char long_gen402[]  = "globus|request_get_ptr";
static const char short_gen403[] = "**globus|server_handle_open_proc_resp_ack";
static const char long_gen403[]  = "globus|server_handle_open_proc_resp_ack";
static const char short_gen404[] = "**globus|strspace_extract_element";
static const char long_gen404[]  = "globus|strspace_extract_element";
static const char short_gen405[] = "**globus|strtointconv";
static const char long_gen405[]  = "globus|strtointconv";
static const char short_gen406[] = "**globus|tcp_buf_size_invalid";
static const char long_gen406[]  = "globus|tcp_buf_size_invalid";
static const char short_gen407[] = "**globus|tcp_buf_size_neg";
static const char long_gen407[]  = "globus|tcp_buf_size_neg";
static const char short_gen408[] = "**globus|tcp_buf_size_overflow";
static const char long_gen408[]  = "globus|tcp_buf_size_overflow";
static const char short_gen409[] = "**globus|topology_comm_construct";
static const char long_gen409[]  = "globus|topology_comm_construct";
static const char short_gen410[] = "**globus|topology_comm_destruct";
static const char long_gen410[]  = "globus|topology_comm_destruct";
static const char short_gen411[] = "**globus|topology_finalize";
static const char long_gen411[]  = "globus|topology_finalize";
static const char short_gen412[] = "**globus|topology_init";
static const char long_gen412[]  = "globus|topology_init";
static const char short_gen413[] = "**globus|vc_construct_contact_info";
static const char long_gen413[]  = "an error occurred while initializing the contact information contained within a VC";
static const char short_gen414[] = "**globus|vc_ptr_bad";
static const char long_gen414[]  = "globus|vc_ptr_bad";
static const char short_gen415[] = "**globus|vc_select_comm_method";
static const char long_gen415[]  = "a error occurred while attempting to select a suitable method for communicating with a process";
static const char short_gen416[] = "**globus|vmpi_fn_failed";
static const char long_gen416[]  = "globus|vmpi_fn_failed";
static const char short_gen417[] = "**globus|vmpi_pe_finalize";
static const char long_gen417[]  = "globus|vmpi_pe_finalize";
static const char short_gen418[] = "**globus|vmpi_pe_init";
static const char long_gen418[]  = "globus|vmpi_pe_init";
static const char short_gen419[] = "**globus|vmpi_pe_table_inc_size";
static const char long_gen419[]  = "globus|vmpi_pe_table_inc_size";
static const char short_gen420[] = "**globus|vmpi_req_failed";
static const char long_gen420[]  = "globus|vmpi_req_failed";
static const char short_gen421[] = "**gm_get_unique_board_id";
static const char long_gen421[]  = "gm_get_unique_board_id failed";
static const char short_gen422[] = "**gm_incompatible_lib";
static const char long_gen422[]  = "GM library and driver are different versions";
static const char short_gen423[] = "**gm_init";
static const char long_gen423[]  = "gm_init failed";
static const char short_gen424[] = "**gm_no_port";
static const char long_gen424[]  = "unable to find a free GM port";
static const char short_gen425[] = "**gm_regmem";
static const char long_gen425[]  = "gm_register_memory failed";
static const char short_gen426[] = "**graphnnodes";
static const char long_gen426[]  = "Number of graph nodes exceeds size of communicator.";
static const char short_gen427[] = "**group";
static const char long_gen427[]  = "Invalid group";
static const char short_gen428[] = "**groupnotincomm";
static const char long_gen428[]  = "Specified group is not within the communicator";
static const char short_gen429[] = "**groupnull";
static const char long_gen429[]  = "Null group";
static const char short_gen430[] = "**groupperm";
static const char long_gen430[]  = "Cannot free permanent group";
static const char short_gen431[] = "**handle_sock_op";
static const char long_gen431[]  = "handle_sock_op failed";
static const char short_gen432[] = "**handle_written";
static const char long_gen432[]  = "unable to handle written data";
static const char short_gen433[] = "**ibv_create_ah";
static const char long_gen433[]  = "ibv_create_ah failed";
static const char short_gen434[] = "**ibv_get_device_name";
static const char long_gen434[]  = "ibv_get_device_name failed.";
static const char short_gen435[] = "**ibv_query_device";
static const char long_gen435[]  = "ibv_query_device failed";
static const char short_gen436[] = "**ifnameinvalid";
static const char long_gen436[]  = "Interface name was invalid in call to inet_pton";
static const char short_gen437[] = "**indexneg";
static const char long_gen437[]  = "Index value in graph topology must be nonnegative";
static const char short_gen438[] = "**indexnonmonotone";
static const char long_gen438[]  = "Index values in graph topology must be monotone nondecreasing";
static const char short_gen439[] = "**inet_addr";
static const char long_gen439[]  = " inet_addr failed";
static const char short_gen440[] = "**info";
static const char long_gen440[]  = "Invalid MPI_Info";
static const char short_gen441[] = "**infokey";
static const char long_gen441[]  = "Invalid key for MPI_Info ";
static const char short_gen442[] = "**infokeyempty";
static const char long_gen442[]  = "Empty or blank key ";
static const char short_gen443[] = "**infokeylong";
static const char long_gen443[]  = "Key is too long";
static const char short_gen444[] = "**infokeynull";
static const char long_gen444[]  = "Null key";
static const char short_gen445[] = "**infonkey";
static const char long_gen445[]  = "Requested nth key does not exist";
static const char short_gen446[] = "**infonokey";
static const char long_gen446[]  = "MPI_Info key is not defined ";
static const char short_gen447[] = "**infonull";
static const char long_gen447[]  = "Null MPI_Info ";
static const char short_gen448[] = "**infoval";
static const char long_gen448[]  = "Invalid MPI_Info value ";
static const char short_gen449[] = "**infovallong";
static const char long_gen449[]  = "Value is too long ";
static const char short_gen450[] = "**infovalnull";
static const char long_gen450[]  = "Null value";
static const char short_gen451[] = "**init";
static const char long_gen451[]  = "Initialization failed";
static const char short_gen452[] = "**init_buscard";
static const char long_gen452[]  = "failed to get my business card";
static const char short_gen453[] = "**init_description";
static const char long_gen453[]  = "unable to get the host description";
static const char short_gen454[] = "**init_getptr";
static const char long_gen454[]  = "failed to get the vcr";
static const char short_gen455[] = "**init_progress";
static const char long_gen455[]  = "progress_init failed";
static const char short_gen456[] = "**init_vcrt";
static const char long_gen456[]  = "failed to create VCRT";
static const char short_gen457[] = "**initialized";
static const char long_gen457[]  = "MPI not initialized. Call MPI_Init or MPI_Init_thread first";
static const char short_gen458[] = "**inittwice";
static const char long_gen458[]  = "Cannot call MPI_INIT or MPI_INIT_THREAD more than once";
static const char short_gen459[] = "**inpending";
static const char long_gen459[]  = "Pending request (no error)";
static const char short_gen460[] = "**instatus";
static const char long_gen460[]  = "See the MPI_ERROR field in MPI_Status for the error code";
static const char short_gen461[] = "**intern";
static const char long_gen461[]  = "Internal MPI error!";
static const char short_gen462[] = "**internrc";
static const char long_gen462[]  = "Internal MPI error!  Unexpected return code from internal function.";
static const char short_gen463[] = "**inttoosmall";
static const char long_gen463[]  = "An address does not fit into a Fortran INTEGER.  Use MPI_Get_address instead";
static const char short_gen464[] = "**invalid_handle";
static const char long_gen464[]  = "invalid handle";
static const char short_gen465[] = "**invalid_knem_status";
static const char long_gen465[]  = "Invalid knem status value";
static const char short_gen466[] = "**invalid_netmod";
static const char long_gen466[]  = "Invalid netmod specified";
static const char short_gen467[] = "**invalid_refcount";
static const char long_gen467[]  = "invalid reference count";
static const char short_gen468[] = "**io";
static const char long_gen468[]  = "Other I/O error ";
static const char short_gen469[] = "**ioRMWrdwr";
static const char long_gen469[]  = "Must open file with MPI_MODE_RDWR for read-modify-write";
static const char short_gen470[] = "**ioagnomatch";
static const char long_gen470[]  = "No aggregators match";
static const char short_gen471[] = "**ioamodeseq";
static const char long_gen471[]  = "Cannot use this function when the file is opened with amode MPI_MODE_SEQUENTIAL ";
static const char short_gen472[] = "**iobadcount";
static const char long_gen472[]  = "Invalid count argument";
static const char short_gen473[] = "**iobaddisp";
static const char long_gen473[]  = "Invalid displacement argument";
static const char short_gen474[] = "**iobadfh";
static const char long_gen474[]  = "Invalid file handle";
static const char short_gen475[] = "**iobadoffset";
static const char long_gen475[]  = "Invalid offset argument";
static const char short_gen476[] = "**iobadsize";
static const char long_gen476[]  = "Invalid size argument";
static const char short_gen477[] = "**iobadwhence";
static const char long_gen477[]  = "Invalid whence argument";
static const char short_gen478[] = "**iocp";
static const char long_gen478[]  = "unable to create an I/O completion port";
static const char short_gen479[] = "**ioctl";
static const char long_gen479[]  = "ioctl failed";
static const char short_gen480[] = "**ioctlsocket";
static const char long_gen480[]  = " ioctl on socket failed";
static const char short_gen481[] = "**iodatarepnomem";
static const char long_gen481[]  = "User must allocate memory for datarep";
static const char short_gen482[] = "**iodispifseq";
static const char long_gen482[]  = "disp must be set to MPI_DISPLACEMENT_CURRENT since file was opened with MPI_MODE_SEQUENTIAL";
static const char short_gen483[] = "**ioetype";
static const char long_gen483[]  = "Only an integral number of etypes can be accessed";
static const char short_gen484[] = "**iofiletype";
static const char long_gen484[]  = "Filetype must be constructed out of one or more etypes";
static const char short_gen485[] = "**iofstypeunsupported";
static const char long_gen485[]  = "Specified filesystem is not available";
static const char short_gen486[] = "**ioneedrd";
static const char long_gen486[]  = "Read access is required to this file";
static const char short_gen487[] = "**ionegoffset";
static const char long_gen487[]  = "Negative offset argument";
static const char short_gen488[] = "**iopreallocrdwr";
static const char long_gen488[]  = "Must open file with MPI_MODE_RDWR to preallocate disk space";
static const char short_gen489[] = "**iordonly";
static const char long_gen489[]  = "Cannot write to a file opened with amode MPI_MODE_RDONLY";
static const char short_gen490[] = "**iosequnsupported";
static const char long_gen490[]  = "MPI_MODE_SEQUENTIAL not supported on this file system";
static const char short_gen491[] = "**iosharedfailed";
static const char long_gen491[]  = "Could not access shared file pointer";
static const char short_gen492[] = "**iosharedunsupported";
static const char long_gen492[]  = "Shared file pointers not supported";
static const char short_gen493[] = "**iosplitcoll";
static const char long_gen493[]  = "Only one active split collective I/O operation is allowed per file handle";
static const char short_gen494[] = "**iosplitcollnone";
static const char long_gen494[]  = "No split collective I/O operation is active";
static const char short_gen495[] = "**iov_offset";
static const char long_gen495[]  = "invalid iov offset";
static const char short_gen496[] = "**iowronly";
static const char long_gen496[]  = "Cannot read from a file opened with amode MPI_MODE_WRONLY";
static const char short_gen497[] = "**iowsrc";
static const char long_gen497[]  = "Unable to read from the file as part of a strided write operation";
static const char short_gen498[] = "**iowswc";
static const char long_gen498[]  = "Unable to write to the file as part of a strided write operation";
static const char short_gen499[] = "**join_portname";
static const char long_gen499[]  = "local and remote port names are the same";
static const char short_gen500[] = "**join_recv";
static const char long_gen500[]  = "recv from the socket failed";
static const char short_gen501[] = "**join_send";
static const char long_gen501[]  = "send on the socket failed";
static const char short_gen502[] = "**keyval";
static const char long_gen502[]  = "Invalid keyval";
static const char short_gen503[] = "**keyvalinvalid";
static const char long_gen503[]  = "Attribute key was MPI_KEYVAL_INVALID";
static const char short_gen504[] = "**keyvalobj";
static const char long_gen504[]  = "Keyval was not defined for the supplied object";
static const char short_gen505[] = "**listen";
static const char long_gen505[]  = "listen failed";
static const char short_gen506[] = "**locktype";
static const char long_gen506[]  = "Invalid lock type";
static const char short_gen507[] = "**lseek";
static const char long_gen507[]  = "lseek failed";
static const char short_gen508[] = "**mkfifo";
static const char long_gen508[]  = "mkfifo failed";
static const char short_gen509[] = "**mkstemp";
static const char long_gen509[]  = "mkstemp failed";
static const char short_gen510[] = "**mmap";
static const char long_gen510[]  = "unable to map memory, mmap failed";
static const char short_gen511[] = "**mpi_abort";
static const char long_gen511[]  = "MPI_Abort failed";
static const char short_gen512[] = "**mpi_accumulate";
static const char long_gen512[]  = "MPI_Accumulate failed";
static const char short_gen513[] = "**mpi_add_error_class";
static const char long_gen513[]  = "MPI_Add_error_class failed";
static const char short_gen514[] = "**mpi_add_error_code";
static const char long_gen514[]  = "MPI_Add_error_code failed";
static const char short_gen515[] = "**mpi_add_error_string";
static const char long_gen515[]  = "MPI_Add_error_string failed";
static const char short_gen516[] = "**mpi_address";
static const char long_gen516[]  = "MPI_Address failed";
static const char short_gen517[] = "**mpi_allgather";
static const char long_gen517[]  = "MPI_Allgather failed";
static const char short_gen518[] = "**mpi_allgatherv";
static const char long_gen518[]  = "MPI_Allgatherv failed";
static const char short_gen519[] = "**mpi_alloc_mem";
static const char long_gen519[]  = "MPI_Alloc_mem failed";
static const char short_gen520[] = "**mpi_allreduce";
static const char long_gen520[]  = "MPI_Allreduce failed";
static const char short_gen521[] = "**mpi_alltoall";
static const char long_gen521[]  = "MPI_Alltoall failed";
static const char short_gen522[] = "**mpi_alltoallv";
static const char long_gen522[]  = "MPI_Alltoallv failed";
static const char short_gen523[] = "**mpi_alltoallw";
static const char long_gen523[]  = "MPI_Alltoallw failed";
static const char short_gen524[] = "**mpi_attr_delete";
static const char long_gen524[]  = "MPI_Attr_delete failed";
static const char short_gen525[] = "**mpi_attr_get";
static const char long_gen525[]  = "MPI_Attr_get failed";
static const char short_gen526[] = "**mpi_attr_put";
static const char long_gen526[]  = "MPI_Attr_put failed";
static const char short_gen527[] = "**mpi_barrier";
static const char long_gen527[]  = "MPI_Barrier failed";
static const char short_gen528[] = "**mpi_bcast";
static const char long_gen528[]  = "MPI_Bcast failed";
static const char short_gen529[] = "**mpi_bsend";
static const char long_gen529[]  = "MPI_Bsend failed";
static const char short_gen530[] = "**mpi_bsend_init";
static const char long_gen530[]  = "MPI_Bsend_init failed";
static const char short_gen531[] = "**mpi_buffer_attach";
static const char long_gen531[]  = "MPI_Buffer_attach failed";
static const char short_gen532[] = "**mpi_buffer_detach";
static const char long_gen532[]  = "MPI_Buffer_detach failed";
static const char short_gen533[] = "**mpi_cancel";
static const char long_gen533[]  = "MPI_Cancel failed";
static const char short_gen534[] = "**mpi_cart_coords";
static const char long_gen534[]  = "MPI_Cart_coords failed";
static const char short_gen535[] = "**mpi_cart_create";
static const char long_gen535[]  = "MPI_Cart_create failed";
static const char short_gen536[] = "**mpi_cart_get";
static const char long_gen536[]  = "MPI_Cart_get failed";
static const char short_gen537[] = "**mpi_cart_map";
static const char long_gen537[]  = "MPI_Cart_map failed";
static const char short_gen538[] = "**mpi_cart_rank";
static const char long_gen538[]  = "MPI_Cart_rank failed";
static const char short_gen539[] = "**mpi_cart_shift";
static const char long_gen539[]  = "MPI_Cart_shift failed";
static const char short_gen540[] = "**mpi_cart_sub";
static const char long_gen540[]  = "MPI_Cart_sub failed";
static const char short_gen541[] = "**mpi_cartdim_get";
static const char long_gen541[]  = "MPI_Cartdim_get failed";
static const char short_gen542[] = "**mpi_close_port";
static const char long_gen542[]  = "MPI_Close_port failed";
static const char short_gen543[] = "**mpi_comm_accept";
static const char long_gen543[]  = "MPI_Comm_accept failed";
static const char short_gen544[] = "**mpi_comm_call_errhandler";
static const char long_gen544[]  = "MPI_Comm_call_errhandler failed";
static const char short_gen545[] = "**mpi_comm_compare";
static const char long_gen545[]  = "MPI_Comm_compare failed";
static const char short_gen546[] = "**mpi_comm_connect";
static const char long_gen546[]  = "MPI_Comm_connect failed";
static const char short_gen547[] = "**mpi_comm_create";
static const char long_gen547[]  = "MPI_Comm_create failed";
static const char short_gen548[] = "**mpi_comm_create_errhandler";
static const char long_gen548[]  = "MPI_Comm_create_errhandler failed";
static const char short_gen549[] = "**mpi_comm_create_keyval";
static const char long_gen549[]  = "MPI_Comm_create_keyval failed";
static const char short_gen550[] = "**mpi_comm_delete_attr";
static const char long_gen550[]  = "MPI_Comm_delete_attr failed";
static const char short_gen551[] = "**mpi_comm_disconnect";
static const char long_gen551[]  = "MPI_Comm_disconnect failed";
static const char short_gen552[] = "**mpi_comm_dup";
static const char long_gen552[]  = "MPI_Comm_dup failed";
static const char short_gen553[] = "**mpi_comm_free";
static const char long_gen553[]  = "MPI_Comm_free failed";
static const char short_gen554[] = "**mpi_comm_free_keyval";
static const char long_gen554[]  = "MPI_Comm_free_keyval failed";
static const char short_gen555[] = "**mpi_comm_get_attr";
static const char long_gen555[]  = "MPI_Comm_get_attr failed";
static const char short_gen556[] = "**mpi_comm_get_errhandler";
static const char long_gen556[]  = "MPI_Comm_get_errhandler failed";
static const char short_gen557[] = "**mpi_comm_get_name";
static const char long_gen557[]  = "MPI_Comm_get_name failed";
static const char short_gen558[] = "**mpi_comm_get_parent";
static const char long_gen558[]  = "MPI_Comm_get_parent failed";
static const char short_gen559[] = "**mpi_comm_group";
static const char long_gen559[]  = "MPI_Comm_group failed";
static const char short_gen560[] = "**mpi_comm_join";
static const char long_gen560[]  = "MPI_Comm_join failed";
static const char short_gen561[] = "**mpi_comm_rank";
static const char long_gen561[]  = "MPI_Comm_rank failed";
static const char short_gen562[] = "**mpi_comm_remote_group";
static const char long_gen562[]  = "MPI_Comm_remote_group failed";
static const char short_gen563[] = "**mpi_comm_remote_size";
static const char long_gen563[]  = "MPI_Comm_remote_size failed";
static const char short_gen564[] = "**mpi_comm_set_attr";
static const char long_gen564[]  = "MPI_Comm_set_attr failed";
static const char short_gen565[] = "**mpi_comm_set_errhandler";
static const char long_gen565[]  = "MPI_Comm_set_errhandler failed";
static const char short_gen566[] = "**mpi_comm_set_name";
static const char long_gen566[]  = "MPI_Comm_set_name failed";
static const char short_gen567[] = "**mpi_comm_size";
static const char long_gen567[]  = "MPI_Comm_size failed";
static const char short_gen568[] = "**mpi_comm_spawn";
static const char long_gen568[]  = "MPI_Comm_spawn failed";
static const char short_gen569[] = "**mpi_comm_spawn_multiple";
static const char long_gen569[]  = "MPI_Comm_spawn_multiple failed";
static const char short_gen570[] = "**mpi_comm_split";
static const char long_gen570[]  = "MPI_Comm_split failed";
static const char short_gen571[] = "**mpi_comm_test_inter";
static const char long_gen571[]  = "MPI_Comm_test_inter failed";
static const char short_gen572[] = "**mpi_dims_create";
static const char long_gen572[]  = "MPI_Dims_create failed";
static const char short_gen573[] = "**mpi_dist_graph_create";
static const char long_gen573[]  = " MPI_Dist_graph_create failed";
static const char short_gen574[] = "**mpi_dist_graph_create_adjacent";
static const char long_gen574[]  = " MPI_Dist_graph_create_adjacent failed";
static const char short_gen575[] = "**mpi_dist_graph_neighbors";
static const char long_gen575[]  = " MPI_Dist_graph_neighbors failed";
static const char short_gen576[] = "**mpi_dist_graph_neighbors_count";
static const char long_gen576[]  = " MPI_Dist_graph_neighbors_count failed";
static const char short_gen577[] = "**mpi_errhandler_create";
static const char long_gen577[]  = "MPI_Errhandler_create failed";
static const char short_gen578[] = "**mpi_errhandler_free";
static const char long_gen578[]  = "MPI_Errhandler_free failed";
static const char short_gen579[] = "**mpi_errhandler_get";
static const char long_gen579[]  = "MPI_Errhandler_get failed";
static const char short_gen580[] = "**mpi_errhandler_set";
static const char long_gen580[]  = "MPI_Errhandler_set failed";
static const char short_gen581[] = "**mpi_error_class";
static const char long_gen581[]  = "MPI_Error_class failed";
static const char short_gen582[] = "**mpi_error_string";
static const char long_gen582[]  = "MPI_Error_string failed";
static const char short_gen583[] = "**mpi_exscan";
static const char long_gen583[]  = "MPI_Exscan failed";
static const char short_gen584[] = "**mpi_file_call_errhandler";
static const char long_gen584[]  = "MPI_File_call_errhandler failed";
static const char short_gen585[] = "**mpi_file_create_errhandler";
static const char long_gen585[]  = "MPI_File_create_errhandler failed";
static const char short_gen586[] = "**mpi_file_get_errhandler";
static const char long_gen586[]  = "MPI_File_get_errhandler failed";
static const char short_gen587[] = "**mpi_file_set_errhandler";
static const char long_gen587[]  = "MPI_File_set_errhandler failed";
static const char short_gen588[] = "**mpi_finalize";
static const char long_gen588[]  = "MPI_Finalize failed";
static const char short_gen589[] = "**mpi_finalized";
static const char long_gen589[]  = "MPI_Finalized failed";
static const char short_gen590[] = "**mpi_free_mem";
static const char long_gen590[]  = "MPI_Free_mem failed";
static const char short_gen591[] = "**mpi_gather";
static const char long_gen591[]  = "MPI_Gather failed";
static const char short_gen592[] = "**mpi_gatherv";
static const char long_gen592[]  = "MPI_Gatherv failed";
static const char short_gen593[] = "**mpi_get";
static const char long_gen593[]  = "MPI_Get failed";
static const char short_gen594[] = "**mpi_get_address";
static const char long_gen594[]  = "MPI_Get_address failed";
static const char short_gen595[] = "**mpi_get_count";
static const char long_gen595[]  = "MPI_Get_count failed";
static const char short_gen596[] = "**mpi_get_elements";
static const char long_gen596[]  = "MPI_Get_elements failed";
static const char short_gen597[] = "**mpi_get_processor_name";
static const char long_gen597[]  = "MPI_Get_processor_name failed";
static const char short_gen598[] = "**mpi_get_version";
static const char long_gen598[]  = "MPI_Get_version failed";
static const char short_gen599[] = "**mpi_graph_create";
static const char long_gen599[]  = "MPI_Graph_create failed";
static const char short_gen600[] = "**mpi_graph_get";
static const char long_gen600[]  = "MPI_Graph_get failed";
static const char short_gen601[] = "**mpi_graph_map";
static const char long_gen601[]  = "MPI_Graph_map failed";
static const char short_gen602[] = "**mpi_graph_neighbors";
static const char long_gen602[]  = "MPI_Graph_neighbors failed";
static const char short_gen603[] = "**mpi_graph_neighbors_count";
static const char long_gen603[]  = "MPI_Graph_neighbors_count failed";
static const char short_gen604[] = "**mpi_graphdims_get";
static const char long_gen604[]  = "MPI_Graphdims_get failed";
static const char short_gen605[] = "**mpi_grequest_complete";
static const char long_gen605[]  = "MPI_Grequest_complete failed";
static const char short_gen606[] = "**mpi_grequest_start";
static const char long_gen606[]  = "MPI_Grequest_start failed";
static const char short_gen607[] = "**mpi_group_compare";
static const char long_gen607[]  = "MPI_Group_compare failed";
static const char short_gen608[] = "**mpi_group_difference";
static const char long_gen608[]  = "MPI_Group_difference failed";
static const char short_gen609[] = "**mpi_group_excl";
static const char long_gen609[]  = "MPI_Group_excl failed";
static const char short_gen610[] = "**mpi_group_free";
static const char long_gen610[]  = "MPI_Group_free failed";
static const char short_gen611[] = "**mpi_group_incl";
static const char long_gen611[]  = "MPI_Group_incl failed";
static const char short_gen612[] = "**mpi_group_intersection";
static const char long_gen612[]  = "MPI_Group_intersection failed";
static const char short_gen613[] = "**mpi_group_range_excl";
static const char long_gen613[]  = "MPI_Group_range_excl failed";
static const char short_gen614[] = "**mpi_group_range_incl";
static const char long_gen614[]  = "MPI_Group_range_incl failed";
static const char short_gen615[] = "**mpi_group_rank";
static const char long_gen615[]  = "MPI_Group_rank failed";
static const char short_gen616[] = "**mpi_group_size";
static const char long_gen616[]  = "MPI_Group_size failed";
static const char short_gen617[] = "**mpi_group_translate_ranks";
static const char long_gen617[]  = "MPI_Group_translate_ranks failed";
static const char short_gen618[] = "**mpi_group_union";
static const char long_gen618[]  = "MPI_Group_union failed";
static const char short_gen619[] = "**mpi_ibsend";
static const char long_gen619[]  = "MPI_Ibsend failed";
static const char short_gen620[] = "**mpi_info_create";
static const char long_gen620[]  = "MPI_Info_create failed";
static const char short_gen621[] = "**mpi_info_delete";
static const char long_gen621[]  = "MPI_Info_delete failed";
static const char short_gen622[] = "**mpi_info_dup";
static const char long_gen622[]  = "MPI_Info_dup failed";
static const char short_gen623[] = "**mpi_info_free";
static const char long_gen623[]  = "MPI_Info_free failed";
static const char short_gen624[] = "**mpi_info_get";
static const char long_gen624[]  = "MPI_Info_get failed";
static const char short_gen625[] = "**mpi_info_get_nkeys";
static const char long_gen625[]  = "MPI_Info_get_nkeys failed";
static const char short_gen626[] = "**mpi_info_get_nthkey";
static const char long_gen626[]  = "MPI_Info_get_nthkey failed";
static const char short_gen627[] = "**mpi_info_get_valuelen";
static const char long_gen627[]  = "MPI_Info_get_valuelen failed";
static const char short_gen628[] = "**mpi_info_set";
static const char long_gen628[]  = "MPI_Info_set failed";
static const char short_gen629[] = "**mpi_init";
static const char long_gen629[]  = "MPI_Init failed";
static const char short_gen630[] = "**mpi_init_thread";
static const char long_gen630[]  = "MPI_Init_thread failed";
static const char short_gen631[] = "**mpi_initialized";
static const char long_gen631[]  = "MPI_Initialized failed";
static const char short_gen632[] = "**mpi_intercomm_create";
static const char long_gen632[]  = "MPI_Intercomm_create failed";
static const char short_gen633[] = "**mpi_intercomm_merge";
static const char long_gen633[]  = "MPI_Intercomm_merge failed";
static const char short_gen634[] = "**mpi_iprobe";
static const char long_gen634[]  = "MPI_Iprobe failed";
static const char short_gen635[] = "**mpi_irecv";
static const char long_gen635[]  = "MPI_Irecv failed";
static const char short_gen636[] = "**mpi_irsend";
static const char long_gen636[]  = "MPI_Irsend failed";
static const char short_gen637[] = "**mpi_is_thread_main";
static const char long_gen637[]  = "MPI_Is_thread_main failed";
static const char short_gen638[] = "**mpi_isend";
static const char long_gen638[]  = "MPI_Isend failed";
static const char short_gen639[] = "**mpi_issend";
static const char long_gen639[]  = "MPI_Issend failed";
static const char short_gen640[] = "**mpi_keyval_create";
static const char long_gen640[]  = "MPI_Keyval_create failed";
static const char short_gen641[] = "**mpi_keyval_free";
static const char long_gen641[]  = "MPI_Keyval_free failed";
static const char short_gen642[] = "**mpi_lookup_name";
static const char long_gen642[]  = "MPI_Lookup_name failed";
static const char short_gen643[] = "**mpi_op_commutative";
static const char long_gen643[]  = "MPI_Op_commutative failed";
static const char short_gen644[] = "**mpi_op_create";
static const char long_gen644[]  = "MPI_Op_create failed";
static const char short_gen645[] = "**mpi_op_free";
static const char long_gen645[]  = "MPI_Op_free failed";
static const char short_gen646[] = "**mpi_open_port";
static const char long_gen646[]  = "MPI_Open_port failed";
static const char short_gen647[] = "**mpi_pack";
static const char long_gen647[]  = "MPI_Pack failed";
static const char short_gen648[] = "**mpi_pack_external";
static const char long_gen648[]  = "MPI_Pack_external failed";
static const char short_gen649[] = "**mpi_pack_external_size";
static const char long_gen649[]  = "MPI_Pack_external_size failed";
static const char short_gen650[] = "**mpi_pack_size";
static const char long_gen650[]  = "MPI_Pack_size failed";
static const char short_gen651[] = "**mpi_probe";
static const char long_gen651[]  = "MPI_Probe failed";
static const char short_gen652[] = "**mpi_publish_name";
static const char long_gen652[]  = "MPI_Publish_name failed";
static const char short_gen653[] = "**mpi_put";
static const char long_gen653[]  = "MPI_Put failed";
static const char short_gen654[] = "**mpi_query_thread";
static const char long_gen654[]  = "MPI_Query_thread failed";
static const char short_gen655[] = "**mpi_recv";
static const char long_gen655[]  = "MPI_Recv failed";
static const char short_gen656[] = "**mpi_recv_init";
static const char long_gen656[]  = "MPI_Recv_init failed";
static const char short_gen657[] = "**mpi_reduce";
static const char long_gen657[]  = "MPI_Reduce failed";
static const char short_gen658[] = "**mpi_reduce_local";
static const char long_gen658[]  = "MPI_Reduce_local failed";
static const char short_gen659[] = "**mpi_reduce_scatter";
static const char long_gen659[]  = "MPI_Reduce_scatter failed";
static const char short_gen660[] = "**mpi_reduce_scatter_block";
static const char long_gen660[]  = "MPI_Reduce_scatter_block failed";
static const char short_gen661[] = "**mpi_register_datarep";
static const char long_gen661[]  = "MPI_Register_datarep failed";
static const char short_gen662[] = "**mpi_request_free";
static const char long_gen662[]  = "MPI_Request_free failed";
static const char short_gen663[] = "**mpi_request_get_status";
static const char long_gen663[]  = "MPI_Request_get_status failed";
static const char short_gen664[] = "**mpi_rsend";
static const char long_gen664[]  = "MPI_Rsend failed";
static const char short_gen665[] = "**mpi_rsend_init";
static const char long_gen665[]  = "MPI_Rsend_init failed";
static const char short_gen666[] = "**mpi_scan";
static const char long_gen666[]  = "MPI_Scan failed";
static const char short_gen667[] = "**mpi_scatter";
static const char long_gen667[]  = "MPI_Scatter failed";
static const char short_gen668[] = "**mpi_scatterv";
static const char long_gen668[]  = "MPI_Scatterv failed";
static const char short_gen669[] = "**mpi_send";
static const char long_gen669[]  = "MPI_Send failed";
static const char short_gen670[] = "**mpi_send_init";
static const char long_gen670[]  = "MPI_Send_init failed";
static const char short_gen671[] = "**mpi_sendrecv";
static const char long_gen671[]  = "MPI_Sendrecv failed";
static const char short_gen672[] = "**mpi_sendrecv_replace";
static const char long_gen672[]  = "MPI_Sendrecv_replace failed";
static const char short_gen673[] = "**mpi_ssend";
static const char long_gen673[]  = "MPI_Ssend failed";
static const char short_gen674[] = "**mpi_ssend_init";
static const char long_gen674[]  = "MPI_Ssend_init failed";
static const char short_gen675[] = "**mpi_start";
static const char long_gen675[]  = "MPI_Start failed";
static const char short_gen676[] = "**mpi_startall";
static const char long_gen676[]  = "MPI_Start_all failed";
static const char short_gen677[] = "**mpi_status_set_cancelled";
static const char long_gen677[]  = "MPI_Status_set_cancelled failed";
static const char short_gen678[] = "**mpi_status_set_elements";
static const char long_gen678[]  = "MPI_Status_set_elements failed";
static const char short_gen679[] = "**mpi_test";
static const char long_gen679[]  = "MPI_Test failed";
static const char short_gen680[] = "**mpi_test_cancelled";
static const char long_gen680[]  = "MPI_Test_cancelled failed";
static const char short_gen681[] = "**mpi_testall";
static const char long_gen681[]  = "MPI_Testall failed";
static const char short_gen682[] = "**mpi_testany";
static const char long_gen682[]  = "MPI_Testany failed";
static const char short_gen683[] = "**mpi_testsome";
static const char long_gen683[]  = "MPI_Testsome failed";
static const char short_gen684[] = "**mpi_topo_test";
static const char long_gen684[]  = "MPI_Topo_test failed";
static const char short_gen685[] = "**mpi_type_commit";
static const char long_gen685[]  = "MPI_Type_commit failed";
static const char short_gen686[] = "**mpi_type_contiguous";
static const char long_gen686[]  = "MPI_Type_continuous failed";
static const char short_gen687[] = "**mpi_type_create_darray";
static const char long_gen687[]  = "MPI_Type_create_darray failed";
static const char short_gen688[] = "**mpi_type_create_hindexed";
static const char long_gen688[]  = "MPI_Type_create_hindexed failed";
static const char short_gen689[] = "**mpi_type_create_hvector";
static const char long_gen689[]  = "MPI_Type_create_hvector failed";
static const char short_gen690[] = "**mpi_type_create_indexed_block";
static const char long_gen690[]  = "MPI_Type_create_indexed_block failed";
static const char short_gen691[] = "**mpi_type_create_keyval";
static const char long_gen691[]  = "MPI_Type_create_keyval failed";
static const char short_gen692[] = "**mpi_type_create_resized";
static const char long_gen692[]  = "MPI_Type_create_resized failed";
static const char short_gen693[] = "**mpi_type_create_struct";
static const char long_gen693[]  = "MPI_Type_create_struct failed";
static const char short_gen694[] = "**mpi_type_create_subarray";
static const char long_gen694[]  = "MPI_Type_create_subarray failed";
static const char short_gen695[] = "**mpi_type_delete_attr";
static const char long_gen695[]  = "MPI_Type_delete_attr failed";
static const char short_gen696[] = "**mpi_type_dup";
static const char long_gen696[]  = "MPI_Type_dup failed";
static const char short_gen697[] = "**mpi_type_extent";
static const char long_gen697[]  = "MPI_Type_extent failed";
static const char short_gen698[] = "**mpi_type_free";
static const char long_gen698[]  = "MPI_Type_free failed";
static const char short_gen699[] = "**mpi_type_free_keyval";
static const char long_gen699[]  = "MPI_Type_free_keyval failed";
static const char short_gen700[] = "**mpi_type_get_attr";
static const char long_gen700[]  = "MPI_Type_get_attr failed";
static const char short_gen701[] = "**mpi_type_get_contents";
static const char long_gen701[]  = "MPI_Type_get_contents failed";
static const char short_gen702[] = "**mpi_type_get_envelope";
static const char long_gen702[]  = "MPI_Type_get_envelope failed";
static const char short_gen703[] = "**mpi_type_get_extent";
static const char long_gen703[]  = "MPI_Type_get_extent failed";
static const char short_gen704[] = "**mpi_type_get_name";
static const char long_gen704[]  = "MPI_Type_get_name failed";
static const char short_gen705[] = "**mpi_type_get_true_extent";
static const char long_gen705[]  = "MPI_Type_get_true_extent failed";
static const char short_gen706[] = "**mpi_type_hindexed";
static const char long_gen706[]  = "MPI_Type_hindexed failed";
static const char short_gen707[] = "**mpi_type_hvector";
static const char long_gen707[]  = "MPI_Type_hvector failed";
static const char short_gen708[] = "**mpi_type_indexed";
static const char long_gen708[]  = "MPI_Type_indexed failed";
static const char short_gen709[] = "**mpi_type_lb";
static const char long_gen709[]  = "MPI_Type_lb failed";
static const char short_gen710[] = "**mpi_type_match_size";
static const char long_gen710[]  = "MPI_Type_match_size failed";
static const char short_gen711[] = "**mpi_type_set_attr";
static const char long_gen711[]  = "MPI_Type_set_attr failed";
static const char short_gen712[] = "**mpi_type_set_name";
static const char long_gen712[]  = "MPI_Type_set_name failed";
static const char short_gen713[] = "**mpi_type_size";
static const char long_gen713[]  = "MPI_Type_size failed";
static const char short_gen714[] = "**mpi_type_struct";
static const char long_gen714[]  = "MPI_Type_struct failed";
static const char short_gen715[] = "**mpi_type_ub";
static const char long_gen715[]  = "MPI_Type_ub failed";
static const char short_gen716[] = "**mpi_type_vector";
static const char long_gen716[]  = "MPI_Type_vector failed";
static const char short_gen717[] = "**mpi_unpack";
static const char long_gen717[]  = "MPI_Unpack failed";
static const char short_gen718[] = "**mpi_unpack_external";
static const char long_gen718[]  = "MPI_Unpack_external failed";
static const char short_gen719[] = "**mpi_unpublish_name";
static const char long_gen719[]  = "MPI_Unpublish_name failed";
static const char short_gen720[] = "**mpi_wait";
static const char long_gen720[]  = "MPI_Wait failed";
static const char short_gen721[] = "**mpi_waitall";
static const char long_gen721[]  = "MPI_Waitall failed";
static const char short_gen722[] = "**mpi_waitany";
static const char long_gen722[]  = "MPI_Waitany failed";
static const char short_gen723[] = "**mpi_waitsome";
static const char long_gen723[]  = "MPI_Waitsome failed";
static const char short_gen724[] = "**mpi_win_call_errhandler";
static const char long_gen724[]  = "MPI_Win_call_errhandler failed";
static const char short_gen725[] = "**mpi_win_complete";
static const char long_gen725[]  = "MPI_Win_complete failed";
static const char short_gen726[] = "**mpi_win_create";
static const char long_gen726[]  = "MPI_Win_create failed";
static const char short_gen727[] = "**mpi_win_create_errhandler";
static const char long_gen727[]  = "MPI_Win_create_errhandler failed";
static const char short_gen728[] = "**mpi_win_create_keyval";
static const char long_gen728[]  = "MPI_Win_create_keyval failed";
static const char short_gen729[] = "**mpi_win_delete_attr";
static const char long_gen729[]  = "MPI_Win_delete_attr failed";
static const char short_gen730[] = "**mpi_win_fence";
static const char long_gen730[]  = "MPI_Win_fence failed";
static const char short_gen731[] = "**mpi_win_free";
static const char long_gen731[]  = "MPI_Win_free failed";
static const char short_gen732[] = "**mpi_win_free_keyval";
static const char long_gen732[]  = "MPI_Win_free_keyval failed";
static const char short_gen733[] = "**mpi_win_get_attr";
static const char long_gen733[]  = "MPI_Win_get_attr failed";
static const char short_gen734[] = "**mpi_win_get_errhandler";
static const char long_gen734[]  = "MPI_Win_get_errhandler failed";
static const char short_gen735[] = "**mpi_win_get_group";
static const char long_gen735[]  = "MPI_Win_get_group failed";
static const char short_gen736[] = "**mpi_win_get_name";
static const char long_gen736[]  = "MPI_Win_get_name failed";
static const char short_gen737[] = "**mpi_win_lock";
static const char long_gen737[]  = "MPI_Win_lock failed";
static const char short_gen738[] = "**mpi_win_post";
static const char long_gen738[]  = "MPI_Win_post failed";
static const char short_gen739[] = "**mpi_win_set_attr";
static const char long_gen739[]  = "MPI_Win_set_attr failed";
static const char short_gen740[] = "**mpi_win_set_errhandler";
static const char long_gen740[]  = "MPI_Win_set_errhandler failed";
static const char short_gen741[] = "**mpi_win_set_name";
static const char long_gen741[]  = "MPI_Win_set_name failed";
static const char short_gen742[] = "**mpi_win_start";
static const char long_gen742[]  = "MPI_Win_start failed";
static const char short_gen743[] = "**mpi_win_test";
static const char long_gen743[]  = "MPI_Win_test failed";
static const char short_gen744[] = "**mpi_win_unlock";
static const char long_gen744[]  = "MPI_Win_unlock failed";
static const char short_gen745[] = "**mpi_win_wait";
static const char long_gen745[]  = "MPI_Win_wait failed";
static const char short_gen746[] = "**mpir_comm_get_attr";
static const char long_gen746[]  = "MPIR_Comm_get_attr failed";
static const char short_gen747[] = "**mpir_type_get_attr";
static const char long_gen747[]  = "MPIR_Type_get_attr failed";
static const char short_gen748[] = "**mpir_wingetattr";
static const char long_gen748[]  = "MPIR_WinGetAttr failed";
static const char short_gen749[] = "**mpix_grequest_class_create";
static const char long_gen749[]  = " MPIX_Grequest_class_create failed";
static const char short_gen750[] = "**mq_close";
static const char long_gen750[]  = "failed to close a posix message queue";
static const char short_gen751[] = "**mq_open";
static const char long_gen751[]  = "failed to open a posix message queue";
static const char short_gen752[] = "**mq_receive";
static const char long_gen752[]  = "failed to receive a posix message queue message";
static const char short_gen753[] = "**mq_send";
static const char long_gen753[]  = "failed to send a posix message queue message";
static const char short_gen754[] = "**mqp_failure";
static const char long_gen754[]  = "failed to make progress on the shared memory bootstrap message queue";
static const char short_gen755[] = "**mqshm_create";
static const char long_gen755[]  = "failed to create a shared memory message queue";
static const char short_gen756[] = "**mqshm_receive";
static const char long_gen756[]  = "failed to receive a bootstrap message";
static const char short_gen757[] = "**mqshm_send";
static const char long_gen757[]  = "failed to send a bootstrap message";
static const char short_gen758[] = "**mqshm_unlink";
static const char long_gen758[]  = "unable to unlink the shared memory message queue";
static const char short_gen759[] = "**msgctl";
static const char long_gen759[]  = "msgctl failed";
static const char short_gen760[] = "**msgget";
static const char long_gen760[]  = "msgget failed";
static const char short_gen761[] = "**msgrcv";
static const char long_gen761[]  = "msgrcv failed";
static const char short_gen762[] = "**msgsnd";
static const char long_gen762[]  = "msgsnd failed";
static const char short_gen763[] = "**mx_cancel";
static const char long_gen763[]  = "mx_cancel failed";
static const char short_gen764[] = "**mx_close_endpoint";
static const char long_gen764[]  = " mx_close_endpoint failed";
static const char short_gen765[] = "**mx_connect";
static const char long_gen765[]  = "mx_connect failed";
static const char short_gen766[] = "**mx_decompose_endpoint_addr";
static const char long_gen766[]  = "mx_decompose_endpoint_addr failed";
static const char short_gen767[] = "**mx_finalize";
static const char long_gen767[]  = "mx_finalize failed";
static const char short_gen768[] = "**mx_get_endpoint_addr";
static const char long_gen768[]  = "mx_get_endpoint_addr failed";
static const char short_gen769[] = "**mx_init";
static const char long_gen769[]  = "mx_init failed";
static const char short_gen770[] = "**mx_irecv";
static const char long_gen770[]  = "mx_irecv failed";
static const char short_gen771[] = "**mx_isend";
static const char long_gen771[]  = "mx_isend failed";
static const char short_gen772[] = "**mx_open_endpoint";
static const char long_gen772[]  = "mx_open_endpoint failed";
static const char short_gen773[] = "**namepubfile";
static const char long_gen773[]  = "Unable to publish service name";
static const char short_gen774[] = "**namepubnotfound";
static const char long_gen774[]  = "Lookup failed for service name";
static const char short_gen775[] = "**namepubnotpub";
static const char long_gen775[]  = "Lookup failed for service name ";
static const char short_gen776[] = "**namepubnotunpub";
static const char long_gen776[]  = "Failed to unpublish service name";
static const char short_gen777[] = "**nameservice";
static const char long_gen777[]  = "Invalid service name (see MPI_Publish_name)";
static const char short_gen778[] = "**nem_ib|rndv";
static const char long_gen778[]  = " Nemesis infiniband rendevouz error";
static const char short_gen779[] = "**nem|loadsendiov";
static const char long_gen779[]  = " Error loadsendiov";
static const char short_gen780[] = "**nextbootmsg";
static const char long_gen780[]  = "failed to get the next bootstrap message";
static const char short_gen781[] = "**noConnInfoToString";
static const char long_gen781[]  = "No ConnInfoToString routine defined for this process group";
static const char short_gen782[] = "**node_root_rank";
static const char long_gen782[]  = "Unable to get the node root rank";
static const char short_gen783[] = "**nodllversion";
static const char long_gen783[]  = " Channel DLL Library does not contain a version string";
static const char short_gen784[] = "**noerrclasses";
static const char long_gen784[]  = "No more user-defined error classes";
static const char short_gen785[] = "**noerrcodes";
static const char long_gen785[]  = "No more user-defined error codes";
static const char short_gen786[] = "**nomem";
static const char long_gen786[]  = "Out of memory";
static const char short_gen787[] = "**nomem2";
static const char long_gen787[]  = "Unable to allocate memory (probably out of memory)";
static const char short_gen788[] = "**nomemreq";
static const char long_gen788[]  = "failure occurred while allocating memory for a request object";
static const char short_gen789[] = "**nonamepub";
static const char long_gen789[]  = "No name publishing service available";
static const char short_gen790[] = "**notcarttopo";
static const char long_gen790[]  = "No Cartesian topology associated with this communicator";
static const char short_gen791[] = "**notcstatignore";
static const char long_gen791[]  = "MPI_STATUS_IGNORE cannot be passed to MPI_Status_c2f()";
static const char short_gen792[] = "**notdistgraphtopo";
static const char long_gen792[]  = "No Distributed Graph topology associated with this communicator";
static const char short_gen793[] = "**notfstatignore";
static const char long_gen793[]  = "MPI_STATUS_IGNORE cannot be passed to MPI_Status_f2c()";
static const char short_gen794[] = "**notgenreq";
static const char long_gen794[]  = "Attempt to complete a request with MPI_GREQUEST_COMPLETE that was not started with MPI_GREQUEST_START";
static const char short_gen795[] = "**notgraphtopo";
static const char long_gen795[]  = "No Graph topology associated with this communicator";
static const char short_gen796[] = "**notimpl";
static const char long_gen796[]  = "Function not implemented";
static const char short_gen797[] = "**notopology";
static const char long_gen797[]  = "No topology associated with this communicator";
static const char short_gen798[] = "**notsame";
static const char long_gen798[]  = "Inconsistent arguments to collective routine ";
static const char short_gen799[] = "**nulledge";
static const char long_gen799[]  = "Edge detected from a node to the same node";
static const char short_gen800[] = "**nullptr";
static const char long_gen800[]  = "Null pointer";
static const char short_gen801[] = "**nullptrtype";
static const char long_gen801[]  = "Null pointer";
static const char short_gen802[] = "**onesidedcomps";
static const char long_gen802[]  = "Invalid one sided completion.";
static const char short_gen803[] = "**op";
static const char long_gen803[]  = "Invalid MPI_Op";
static const char short_gen804[] = "**open";
static const char long_gen804[]  = "open failed";
static const char short_gen805[] = "**openportfailed";
static const char long_gen805[]  = "Unable to establish a port";
static const char short_gen806[] = "**opnotpredefined";
static const char long_gen806[]  = "only predefined ops are valid";
static const char short_gen807[] = "**opnull";
static const char long_gen807[]  = "Null MPI_Op";
static const char short_gen808[] = "**opundefined";
static const char long_gen808[]  = "MPI_Op operation not defined for this datatype ";
static const char short_gen809[] = "**oremote_fail";
static const char long_gen809[]  = "open failed on a remote node";
static const char short_gen810[] = "**other";
static const char long_gen810[]  = "Other MPI error";
static const char short_gen811[] = "**pctwice";
static const char long_gen811[]  = "post close called twice";
static const char short_gen812[] = "**permattr";
static const char long_gen812[]  = "Cannot set permanent attribute";
static const char short_gen813[] = "**permop";
static const char long_gen813[]  = "Cannot free permanent MPI_Op ";
static const char short_gen814[] = "**pglookup";
static const char long_gen814[]  = "unable to find the process group structure";
static const char short_gen815[] = "**pkt_ptr";
static const char long_gen815[]  = "invalid shm queue packet pointer";
static const char short_gen816[] = "**pmi_barrier";
static const char long_gen816[]  = "PMI_Barrier failed";
static const char short_gen817[] = "**pmi_get_appnum";
static const char long_gen817[]  = "PMI_Get_appnum failed";
static const char short_gen818[] = "**pmi_get_clique_ranks";
static const char long_gen818[]  = "PMI_Get_clique_ranks failed";
static const char short_gen819[] = "**pmi_get_clique_size";
static const char long_gen819[]  = "PMI_Get_clique_size failed";
static const char short_gen820[] = "**pmi_get_id";
static const char long_gen820[]  = "PMI_Get_id failed";
static const char short_gen821[] = "**pmi_get_id_length_max";
static const char long_gen821[]  = "PMI_Get_id_length_max failed";
static const char short_gen822[] = "**pmi_get_rank";
static const char long_gen822[]  = "PMI_Get_rank failed";
static const char short_gen823[] = "**pmi_get_size";
static const char long_gen823[]  = "PMI_Get_size failed";
static const char short_gen824[] = "**pmi_get_universe_size";
static const char long_gen824[]  = "PMI_Get_universe_size failed";
static const char short_gen825[] = "**pmi_init";
static const char long_gen825[]  = "PMI_Init failed";
static const char short_gen826[] = "**pmi_invalid_clique_size";
static const char long_gen826[]  = "PMI_Get_clique_ranks returned an invalid size";
static const char short_gen827[] = "**pmi_jobgetid";
static const char long_gen827[]  = " PMI2 Job_GetID failed";
static const char short_gen828[] = "**pmi_kvs_commit";
static const char long_gen828[]  = "PMI_KVS_Commit failed";
static const char short_gen829[] = "**pmi_kvs_destroy";
static const char long_gen829[]  = "PMI_KVS_Destroy failed";
static const char short_gen830[] = "**pmi_kvs_get";
static const char long_gen830[]  = "PMI_KVS_Get failed";
static const char short_gen831[] = "**pmi_kvs_get_key_length_max";
static const char long_gen831[]  = "PMI_KVS_Get_key_length_max failed";
static const char short_gen832[] = "**pmi_kvs_get_my_name";
static const char long_gen832[]  = "PMI_KVS_Get_my_name failed";
static const char short_gen833[] = "**pmi_kvs_get_name_length_max";
static const char long_gen833[]  = "PMI_KVS_Get_name_length_max failed";
static const char short_gen834[] = "**pmi_kvs_get_value_length_max";
static const char long_gen834[]  = "PMI_KVS_Get_value_length_max failed";
static const char short_gen835[] = "**pmi_kvs_put";
static const char long_gen835[]  = "PMI_KVS_Put failed";
static const char short_gen836[] = "**pmi_spawn_multiple";
static const char long_gen836[]  = "PMI_Spawn_multiple failed";
static const char short_gen837[] = "**pmicommituuid";
static const char long_gen837[]  = " uuid kvs commit failed";
static const char short_gen838[] = "**pmigetuuid";
static const char long_gen838[]  = " uuid kvs get failed";
static const char short_gen839[] = "**pmiputuuid";
static const char long_gen839[]  = " uuid kvs put failed";
static const char short_gen840[] = "**poll";
static const char long_gen840[]  = "poll of socket fds failed";
static const char short_gen841[] = "**port";
static const char long_gen841[]  = "Invalid port";
static const char short_gen842[] = "**portexist";
static const char long_gen842[]  = "Named port does not exist";
static const char short_gen843[] = "**portquery";
static const char long_gen843[]  = "Query of port failed or port is not active.";
static const char short_gen844[] = "**post_accept";
static const char long_gen844[]  = "post accept failed";
static const char short_gen845[] = "**post_connect";
static const char long_gen845[]  = "failed to post a connection";
static const char short_gen846[] = "**progress";
static const char long_gen846[]  = "progress engine failure";
static const char short_gen847[] = "**progress_handle_sock_op";
static const char long_gen847[]  = "handle_sock_op failed";
static const char short_gen848[] = "**progress_init";
static const char long_gen848[]  = "unable to initialize the progress engine";
static const char short_gen849[] = "**progress_sock_wait";
static const char long_gen849[]  = "sock_wait failed";
static const char short_gen850[] = "**progress_test";
static const char long_gen850[]  = "progress_test engine failure";
static const char short_gen851[] = "**psm_close_endpoint";
static const char long_gen851[]  = "psm_close_endpiont failed";
static const char short_gen852[] = "**psm_connect";
static const char long_gen852[]  = "psm_connect failed";
static const char short_gen853[] = "**psm_ep_connect";
static const char long_gen853[]  = "psm_ep_connect failed";
static const char short_gen854[] = "**psm_ep_open";
static const char long_gen854[]  = "psm_ep_open failed";
static const char short_gen855[] = "**psm_finalize";
static const char long_gen855[]  = "psm_finalize failed";
static const char short_gen856[] = "**psm_init";
static const char long_gen856[]  = "psm_init failed";
static const char short_gen857[] = "**psm_irecv";
static const char long_gen857[]  = "psm_irecv failed";
static const char short_gen858[] = "**psm_isend";
static const char long_gen858[]  = "psm_isend failed";
static const char short_gen859[] = "**psm_mq_finalize";
static const char long_gen859[]  = "psm_mq_finalize failed";
static const char short_gen860[] = "**psm_mq_init";
static const char long_gen860[]  = "psm_mq_init failed";
static const char short_gen861[] = "**psm_mqinitfailed";
static const char long_gen861[]  = " mq initialization failed";
static const char short_gen862[] = "**psm_test";
static const char long_gen862[]  = "psm_test failed";
static const char short_gen863[] = "**psmconnectfailed";
static const char long_gen863[]  = " psm connect function failed";
static const char short_gen864[] = "**psmepopen";
static const char long_gen864[]  = "psm_ep_open failed";
static const char short_gen865[] = "**psminit";
static const char long_gen865[]  = " psm init function failed";
static const char short_gen866[] = "**psmnomem";
static const char long_gen866[]  = " psm out of memory error";
static const char short_gen867[] = "**psmsendcancel";
static const char long_gen867[]  = " psm does not support send cancel. Aborting program.";
static const char short_gen868[] = "**putenv";
static const char long_gen868[]  = "putenv failed";
static const char short_gen869[] = "**rangedup";
static const char long_gen869[]  = "The range array specifies duplicate entries";
static const char short_gen870[] = "**rangeendinvalid";
static const char long_gen870[]  = "Some element of a range array is either negative or too large";
static const char short_gen871[] = "**rangestartinvalid";
static const char long_gen871[]  = "Some element of a range array is either negative or too large";
static const char short_gen872[] = "**rank";
static const char long_gen872[]  = "Invalid rank";
static const char short_gen873[] = "**rankarray";
static const char long_gen873[]  = "Invalid rank in rank array";
static const char short_gen874[] = "**rankdup";
static const char long_gen874[]  = "Duplicate ranks in rank array ";
static const char short_gen875[] = "**ranklocal";
static const char long_gen875[]  = "Error specifying local_leader ";
static const char short_gen876[] = "**rankremote";
static const char long_gen876[]  = "Error specifying remote_leader ";
static const char short_gen877[] = "**ranksdistinct";
static const char long_gen877[]  = "Local and remote leaders must be different processes";
static const char short_gen878[] = "**rdmacminvalidport";
static const char long_gen878[]  = "Invalid port number.";
static const char short_gen879[] = "**rdmacmmaxport";
static const char long_gen879[]  = "MV2_RDMA_CM_MAX_PORT out of range.";
static const char short_gen880[] = "**rdmacmminport";
static const char long_gen880[]  = "MV2_RDMA_CM_MIN_PORT out of range.";
static const char short_gen881[] = "**rdmacmportrange";
static const char long_gen881[]  = "Invalid port range.";
static const char short_gen882[] = "**read";
static const char long_gen882[]  = "read from socket failed";
static const char short_gen883[] = "**recv_status";
static const char long_gen883[]  = "receive status failed";
static const char short_gen884[] = "**recvbuf_inplace";
static const char long_gen884[]  = "recvbuf cannot be MPI_IN_PLACE";
static const char short_gen885[] = "**remove_shar_mem";
static const char long_gen885[]  = "unable to remove shared memory";
static const char short_gen886[] = "**request";
static const char long_gen886[]  = "Invalid MPI_Request";
static const char short_gen887[] = "**request_invalid_kind";
static const char long_gen887[]  = "The supplied request was invalid";
static const char short_gen888[] = "**requestnotpersist";
static const char long_gen888[]  = "Request is not persistent in MPI_Start or MPI_Startall.";
static const char short_gen889[] = "**requestnull";
static const char long_gen889[]  = "Null MPI_Request ";
static const char short_gen890[] = "**requestpersistactive";
static const char long_gen890[]  = "Persistent request passed to MPI_Start or MPI_Startall is already active.";
static const char short_gen891[] = "**rmaconflict";
static const char long_gen891[]  = "Conflicting accesses to window ";
static const char short_gen892[] = "**rmadisp";
static const char long_gen892[]  = "Invalid displacement argument in RMA call ";
static const char short_gen893[] = "**rmasize";
static const char long_gen893[]  = "Invalid size argument in RMA call";
static const char short_gen894[] = "**rmasync";
static const char long_gen894[]  = "Wrong synchronization of RMA calls ";
static const char short_gen895[] = "**root";
static const char long_gen895[]  = "Invalid root";
static const char short_gen896[] = "**rsendnomatch";
static const char long_gen896[]  = "Ready send had no matching receive ";
static const char short_gen897[] = "**rtspkt";
static const char long_gen897[]  = "failure occurred while attempting to send RTS packet";
static const char short_gen898[] = "**select";
static const char long_gen898[]  = "select failed";
static const char short_gen899[] = "**sendbuf_inplace";
static const char long_gen899[]  = "sendbuf cannot be MPI_IN_PLACE";
static const char short_gen900[] = "**servicename";
static const char long_gen900[]  = "Attempt to lookup an unknown service name ";
static const char short_gen901[] = "**setenv";
static const char long_gen901[]  = "setenv failed";
static const char short_gen902[] = "**setsockopt";
static const char long_gen902[]  = "setsockopt failed";
static const char short_gen903[] = "**shm_op";
static const char long_gen903[]  = "invalid shm operation";
static const char short_gen904[] = "**shm_open";
static const char long_gen904[]  = "unable to open a shared memory object";
static const char short_gen905[] = "**shm_read_progress";
static const char long_gen905[]  = "shared memory read progress failed";
static const char short_gen906[] = "**shm_unlink";
static const char long_gen906[]  = "failed to unlink shared memory";
static const char short_gen907[] = "**shmat";
static const char long_gen907[]  = "shmat failed";
static const char short_gen908[] = "**shmconnect_getmem";
static const char long_gen908[]  = "failed to allocate shared memory for a write queue";
static const char short_gen909[] = "**shmctl";
static const char long_gen909[]  = "failed to mark the sysv segment for removal";
static const char short_gen910[] = "**shmget";
static const char long_gen910[]  = "shmget failed";
static const char short_gen911[] = "**shmgetmem";
static const char long_gen911[]  = "Unable to allocate shared memory";
static const char short_gen912[] = "**shmhost";
static const char long_gen912[]  = "process not on the same host";
static const char short_gen913[] = "**shmq_index";
static const char long_gen913[]  = "invalid shm queue index";
static const char short_gen914[] = "**shmsize";
static const char long_gen914[]  = "Shared memory subsystem unable to allocate a block of the requested size";
static const char short_gen915[] = "**shmw_badhnd";
static const char long_gen915[]  = " Invalid handle to shared memory";
static const char short_gen916[] = "**shmw_deserbufbig";
static const char long_gen916[]  = " Size of buffer to deserialize shared memory handle  is too big (> MPIU_SHMW_GHND_SZ) ";
static const char short_gen917[] = "**shmw_gethnd";
static const char long_gen917[]  = " Unable to get shared memory handle";
static const char short_gen918[] = "**shmw_sethnd";
static const char long_gen918[]  = " Unable to set shared memory handle";
static const char short_gen919[] = "**shmwrite";
static const char long_gen919[]  = "shared memory write failed";
static const char short_gen920[] = "**shutdown";
static const char long_gen920[]  = "shutdown failed";
static const char short_gen921[] = "**snprintf";
static const char long_gen921[]  = "snprintf returned an invalid number";
static const char short_gen922[] = "**sock_accept";
static const char long_gen922[]  = "accept of socket fd failed";
static const char short_gen923[] = "**sock_close";
static const char long_gen923[]  = " unable to close a socket";
static const char short_gen924[] = "**sock_closed";
static const char long_gen924[]  = "socket closed";
static const char short_gen925[] = "**sock_connect";
static const char long_gen925[]  = "connect failed";
static const char short_gen926[] = "**sock_create";
static const char long_gen926[]  = "unable to create a socket";
static const char short_gen927[] = "**sock_gethost";
static const char long_gen927[]  = "gethostname failed";
static const char short_gen928[] = "**sock_init";
static const char long_gen928[]  = "unable to initialize the sock library";
static const char short_gen929[] = "**sock_nop_accept";
static const char long_gen929[]  = "accept called without having received an op_accept";
static const char short_gen930[] = "**sock_post_close";
static const char long_gen930[]  = "posting a close of the socket failed";
static const char short_gen931[] = "**sock_read";
static const char long_gen931[]  = "read from socket failed";
static const char short_gen932[] = "**sock_write";
static const char long_gen932[]  = "Unable to write to a socket";
static const char short_gen933[] = "**sock_writev";
static const char long_gen933[]  = "Unable to write an iovec to a socket";
static const char short_gen934[] = "**socket";
static const char long_gen934[]  = "WSASocket failed";
static const char short_gen935[] = "**sock|badbuf";
static const char long_gen935[]  = "the supplied buffer contains invalid memory";
static const char short_gen936[] = "**sock|badhandle";
static const char long_gen936[]  = "sock contains an invalid handle";
static const char short_gen937[] = "**sock|badhdbuf";
static const char long_gen937[]  = "a memory fault occurred while accessing the host description string";
static const char short_gen938[] = "**sock|badhdlen";
static const char long_gen938[]  = "host description string to small to store description";
static const char short_gen939[] = "**sock|badhdmax";
static const char long_gen939[]  = "the length of the host description string must be non-negative";
static const char short_gen940[] = "**sock|badiovn";
static const char long_gen940[]  = "size of iov is invalid";
static const char short_gen941[] = "**sock|badlen";
static const char long_gen941[]  = "bad length parameter(s)";
static const char short_gen942[] = "**sock|badport";
static const char long_gen942[]  = "port number is out of range";
static const char short_gen943[] = "**sock|badsock";
static const char long_gen943[]  = "supplied sock is corrupt";
static const char short_gen944[] = "**sock|close_cancel";
static const char long_gen944[]  = "operation cancelled because sock was closed locally";
static const char short_gen945[] = "**sock|closing";
static const char long_gen945[]  = "sock is in the process of being closed locally";
static const char short_gen946[] = "**sock|closing_already";
static const char long_gen946[]  = "a close operation is already posted";
static const char short_gen947[] = "**sock|connclosed";
static const char long_gen947[]  = "connection closed by peer";
static const char short_gen948[] = "**sock|connfailed";
static const char long_gen948[]  = "connection failure";
static const char short_gen949[] = "**sock|connrefused";
static const char long_gen949[]  = "connection refused";
static const char short_gen950[] = "**sock|getport";
static const char long_gen950[]  = "failed to obtain port number of the listener";
static const char short_gen951[] = "**sock|listener_bad_sock";
static const char long_gen951[]  = "supplied sock is not a listener";
static const char short_gen952[] = "**sock|listener_bad_state";
static const char long_gen952[]  = "supplied listener sock is in a bad state";
static const char short_gen953[] = "**sock|listener_read";
static const char long_gen953[]  = "read operation not allowed on a listener";
static const char short_gen954[] = "**sock|listener_write";
static const char long_gen954[]  = "write operation not allowed on a listener";
static const char short_gen955[] = "**sock|nosock";
static const char long_gen955[]  = "no new sock was available to accept";
static const char short_gen956[] = "**sock|notconnected";
static const char long_gen956[]  = "sock is not connected";
static const char short_gen957[] = "**sock|oserror";
static const char long_gen957[]  = "unexpected operating system error";
static const char short_gen958[] = "**sock|osnomem";
static const char long_gen958[]  = "operating system routine failed due to lack of memory";
static const char short_gen959[] = "**sock|poll|accept";
static const char long_gen959[]  = "accept failed to acquire a new socket";
static const char short_gen960[] = "**sock|poll|bind";
static const char long_gen960[]  = "unable to bind socket to port";
static const char short_gen961[] = "**sock|poll|eqfail";
static const char long_gen961[]  = "fatal error: failed to enqueue an event; event was lost";
static const char short_gen962[] = "**sock|poll|eqmalloc";
static const char long_gen962[]  = "MPIU_Malloc failed to allocate memory for an event queue structure";
static const char short_gen963[] = "**sock|poll|listen";
static const char long_gen963[]  = "listen() failed";
static const char short_gen964[] = "**sock|poll|nodelay";
static const char long_gen964[]  = "unable to set TCP no delay attribute on socket";
static const char short_gen965[] = "**sock|poll|nonblock";
static const char long_gen965[]  = "unable to set socket to nonblocking";
static const char short_gen966[] = "**sock|poll|pipe";
static const char long_gen966[]  = "unable to allocate pipe to wakeup a blocking poll()";
static const char short_gen967[] = "**sock|poll|pipenonblock";
static const char long_gen967[]  = "unable to set wakeup pipe to nonblocking";
static const char short_gen968[] = "**sock|poll|reuseaddr";
static const char long_gen968[]  = "unable to set reuseaddr attribute on socket";
static const char short_gen969[] = "**sock|poll|setrcvbufsz";
static const char long_gen969[]  = " unable to set the receive socket buffer size";
static const char short_gen970[] = "**sock|poll|setsndbufsz";
static const char long_gen970[]  = " unable to set the send socket buffer size";
static const char short_gen971[] = "**sock|poll|socket";
static const char long_gen971[]  = "unable to obtain new socket";
static const char short_gen972[] = "**sock|poll|unhandledstate";
static const char long_gen972[]  = "encountered an unexpected state";
static const char short_gen973[] = "**sock|poll|unhandledtype";
static const char long_gen973[]  = "encountered an unexpected sock type";
static const char short_gen974[] = "**sock|reads";
static const char long_gen974[]  = "attempt to perform multiple simultaneous reads";
static const char short_gen975[] = "**sock|setalloc";
static const char long_gen975[]  = "unable to allocate a new sock set object";
static const char short_gen976[] = "**sock|sockalloc";
static const char long_gen976[]  = "unable to allocate a new sock object";
static const char short_gen977[] = "**sock|uninit";
static const char long_gen977[]  = "Sock library has not been initialized";
static const char short_gen978[] = "**sock|writes";
static const char long_gen978[]  = "attempt to perform multiple simultaneous writes";
static const char short_gen979[] = "**spawn";
static const char long_gen979[]  = "Error in spawn call";
static const char short_gen980[] = "**ssmwrite";
static const char long_gen980[]  = "sock/shared memory write failed";
static const char short_gen981[] = "**ssmwritev";
static const char long_gen981[]  = "sock/shared memory writev failed";
static const char short_gen982[] = "**stride";
static const char long_gen982[]  = "Range does not terminate";
static const char short_gen983[] = "**stridezero";
static const char long_gen983[]  = "Zero stride is invalid";
static const char short_gen984[] = "**strncpy";
static const char long_gen984[]  = "insufficient buffer length to complete strncpy";
static const char short_gen985[] = "**subarrayoflow";
static const char long_gen985[]  = "Cannot use an array of this size unless the MPI implementation defines a 64-bit MPI_Aint";
static const char short_gen986[] = "**success";
static const char long_gen986[]  = "No MPI error";
static const char short_gen987[] = "**tag";
static const char long_gen987[]  = "Invalid tag";
static const char short_gen988[] = "**tempnam";
static const char long_gen988[]  = "tempnam failed";
static const char short_gen989[] = "**test_sock_wait";
static const char long_gen989[]  = "sock_wait failed";
static const char short_gen990[] = "**tmpnam";
static const char long_gen990[]  = "tmpnam failed";
static const char short_gen991[] = "**toomanycomm";
static const char long_gen991[]  = "Too many communicators";
static const char short_gen992[] = "**topology";
static const char long_gen992[]  = "Invalid topology";
static const char short_gen993[] = "**topotoolarge";
static const char long_gen993[]  = "Topology size is greater than communicator size";
static const char short_gen994[] = "**truncate";
static const char long_gen994[]  = "Message truncated";
static const char short_gen995[] = "**typeinitbadmem";
static const char long_gen995[]  = "builtin datatype handle references invalid memory";
static const char short_gen996[] = "**typeinitfail";
static const char long_gen996[]  = "Did not initialize name for all of the predefined datatypes";
static const char short_gen997[] = "**typeinitminmaxloc";
static const char long_gen997[]  = " Could not determine pointer for predefined minloc or maxloc type.  Initialization of those names failed.";
static const char short_gen998[] = "**typematchnoclass";
static const char long_gen998[]  = "The value of typeclass is not one of MPI_TYPECLASS_REAL, MPI_TYPECLASS_INTEGER, or MPI_TYPECLASS_COMPLEX";
static const char short_gen999[] = "**typematchsize";
static const char long_gen999[]  = "No MPI datatype available for the given typeclass and size";
static const char short_gen1000[] = "**typenamelen";
static const char long_gen1000[]  = "Specified datatype name is too long";
static const char short_gen1001[] = "**umadgetca";
static const char long_gen1001[]  = "Unable to get InfiniBand device port attributes.";
static const char short_gen1002[] = "**umadgetrate";
static const char long_gen1002[]  = "Unable to get InfiniBand device Rate.";
static const char short_gen1003[] = "**umadinit";
static const char long_gen1003[]  = "UMAD initialization failed.";
static const char short_gen1004[] = "**unableToLoadDLL";
static const char long_gen1004[]  = " Unable to load a dynamically loadable library";
static const char short_gen1005[] = "**unableToLoadDLLsym";
static const char long_gen1005[]  = " Unable to find or load a symbol from a dynamically loadable library";
static const char short_gen1006[] = "**unknown";
static const char long_gen1006[]  = "Unknown error.  Please file a bug report.";
static const char short_gen1007[] = "**unknowngpid";
static const char long_gen1007[]  = "Internal MPI error: Unknown gpid";
static const char short_gen1008[] = "**unsupporteddatarep";
static const char long_gen1008[]  = "Only native data representation currently supported";
static const char short_gen1009[] = "**unweightedboth";
static const char long_gen1009[]  = "Must specify MPI_UNWEIGHTED for both or neither weight arguments";
static const char short_gen1010[] = "**user";
static const char long_gen1010[]  = "user defined function returned an error code";
static const char short_gen1011[] = "**vc_state";
static const char long_gen1011[]  = "invalid vc state";
static const char short_gen1012[] = "**vmsplice";
static const char long_gen1012[]  = "vmsplice failed";
static const char short_gen1013[] = "**win";
static const char long_gen1013[]  = "Invalid MPI_Win";
static const char short_gen1014[] = "**winInvalidOp";
static const char long_gen1014[]  = " Invalid RMA operation";
static const char short_gen1015[] = "**winRMAmessage";
static const char long_gen1015[]  = " RMA message operation failed";
static const char short_gen1016[] = "**winRMArequest";
static const char long_gen1016[]  = " RMA message operation failed; request returned error";
static const char short_gen1017[] = "**windeserialize";
static const char long_gen1017[]  = "deserializing win object";
static const char short_gen1018[] = "**winget_oob";
static const char long_gen1018[]  = "source pointer for win_get is out of bounds";
static const char short_gen1019[] = "**winnoprogress";
static const char long_gen1019[]  = " Detected an error while in progress wait for RMA messages";
static const char short_gen1020[] = "**winnull";
static const char long_gen1020[]  = "Null MPI_Win";
static const char short_gen1021[] = "**winput_oob";
static const char long_gen1021[]  = "target pointer for win_put is out of bounds";
static const char short_gen1022[] = "**winserialize";
static const char long_gen1022[]  = "serializing win object";
static const char short_gen1023[] = "**winunlockrank";
static const char long_gen1023[]  = "Invalid rank argument";
static const char short_gen1024[] = "**winwait";
static const char long_gen1024[]  = "WaitForSingleObject failed";
static const char short_gen1025[] = "**write";
static const char long_gen1025[]  = "write failed";
static const char short_gen1026[] = "**writev";
static const char long_gen1026[]  = "writev failed";
static const char short_gen1027[] = "**wsacleanup";
static const char long_gen1027[]  = " WSACleanup failed";
static const char short_gen1028[] = "**wsasock";
static const char long_gen1028[]  = "WSAStartup failed";
static const char short_gen1029[] = "**wsastartup";
static const char long_gen1029[]  = " WSAStartup failed";

static const int generic_msgs_len = 1030;
static const msgpair generic_err_msgs[] = {
{ 0xacebad03, short_gen0, long_gen0, 0xcb0bfa11 },
{ 0xacebad03, short_gen1, long_gen1, 0xcb0bfa11 },
{ 0xacebad03, short_gen2, long_gen2, 0xcb0bfa11 },
{ 0xacebad03, short_gen3, long_gen3, 0xcb0bfa11 },
{ 0xacebad03, short_gen4, long_gen4, 0xcb0bfa11 },
{ 0xacebad03, short_gen5, long_gen5, 0xcb0bfa11 },
{ 0xacebad03, short_gen6, long_gen6, 0xcb0bfa11 },
{ 0xacebad03, short_gen7, long_gen7, 0xcb0bfa11 },
{ 0xacebad03, short_gen8, long_gen8, 0xcb0bfa11 },
{ 0xacebad03, short_gen9, long_gen9, 0xcb0bfa11 },
{ 0xacebad03, short_gen10, long_gen10, 0xcb0bfa11 },
{ 0xacebad03, short_gen11, long_gen11, 0xcb0bfa11 },
{ 0xacebad03, short_gen12, long_gen12, 0xcb0bfa11 },
{ 0xacebad03, short_gen13, long_gen13, 0xcb0bfa11 },
{ 0xacebad03, short_gen14, long_gen14, 0xcb0bfa11 },
{ 0xacebad03, short_gen15, long_gen15, 0xcb0bfa11 },
{ 0xacebad03, short_gen16, long_gen16, 0xcb0bfa11 },
{ 0xacebad03, short_gen17, long_gen17, 0xcb0bfa11 },
{ 0xacebad03, short_gen18, long_gen18, 0xcb0bfa11 },
{ 0xacebad03, short_gen19, long_gen19, 0xcb0bfa11 },
{ 0xacebad03, short_gen20, long_gen20, 0xcb0bfa11 },
{ 0xacebad03, short_gen21, long_gen21, 0xcb0bfa11 },
{ 0xacebad03, short_gen22, long_gen22, 0xcb0bfa11 },
{ 0xacebad03, short_gen23, long_gen23, 0xcb0bfa11 },
{ 0xacebad03, short_gen24, long_gen24, 0xcb0bfa11 },
{ 0xacebad03, short_gen25, long_gen25, 0xcb0bfa11 },
{ 0xacebad03, short_gen26, long_gen26, 0xcb0bfa11 },
{ 0xacebad03, short_gen27, long_gen27, 0xcb0bfa11 },
{ 0xacebad03, short_gen28, long_gen28, 0xcb0bfa11 },
{ 0xacebad03, short_gen29, long_gen29, 0xcb0bfa11 },
{ 0xacebad03, short_gen30, long_gen30, 0xcb0bfa11 },
{ 0xacebad03, short_gen31, long_gen31, 0xcb0bfa11 },
{ 0xacebad03, short_gen32, long_gen32, 0xcb0bfa11 },
{ 0xacebad03, short_gen33, long_gen33, 0xcb0bfa11 },
{ 0xacebad03, short_gen34, long_gen34, 0xcb0bfa11 },
{ 0xacebad03, short_gen35, long_gen35, 0xcb0bfa11 },
{ 0xacebad03, short_gen36, long_gen36, 0xcb0bfa11 },
{ 0xacebad03, short_gen37, long_gen37, 0xcb0bfa11 },
{ 0xacebad03, short_gen38, long_gen38, 0xcb0bfa11 },
{ 0xacebad03, short_gen39, long_gen39, 0xcb0bfa11 },
{ 0xacebad03, short_gen40, long_gen40, 0xcb0bfa11 },
{ 0xacebad03, short_gen41, long_gen41, 0xcb0bfa11 },
{ 0xacebad03, short_gen42, long_gen42, 0xcb0bfa11 },
{ 0xacebad03, short_gen43, long_gen43, 0xcb0bfa11 },
{ 0xacebad03, short_gen44, long_gen44, 0xcb0bfa11 },
{ 0xacebad03, short_gen45, long_gen45, 0xcb0bfa11 },
{ 0xacebad03, short_gen46, long_gen46, 0xcb0bfa11 },
{ 0xacebad03, short_gen47, long_gen47, 0xcb0bfa11 },
{ 0xacebad03, short_gen48, long_gen48, 0xcb0bfa11 },
{ 0xacebad03, short_gen49, long_gen49, 0xcb0bfa11 },
{ 0xacebad03, short_gen50, long_gen50, 0xcb0bfa11 },
{ 0xacebad03, short_gen51, long_gen51, 0xcb0bfa11 },
{ 0xacebad03, short_gen52, long_gen52, 0xcb0bfa11 },
{ 0xacebad03, short_gen53, long_gen53, 0xcb0bfa11 },
{ 0xacebad03, short_gen54, long_gen54, 0xcb0bfa11 },
{ 0xacebad03, short_gen55, long_gen55, 0xcb0bfa11 },
{ 0xacebad03, short_gen56, long_gen56, 0xcb0bfa11 },
{ 0xacebad03, short_gen57, long_gen57, 0xcb0bfa11 },
{ 0xacebad03, short_gen58, long_gen58, 0xcb0bfa11 },
{ 0xacebad03, short_gen59, long_gen59, 0xcb0bfa11 },
{ 0xacebad03, short_gen60, long_gen60, 0xcb0bfa11 },
{ 0xacebad03, short_gen61, long_gen61, 0xcb0bfa11 },
{ 0xacebad03, short_gen62, long_gen62, 0xcb0bfa11 },
{ 0xacebad03, short_gen63, long_gen63, 0xcb0bfa11 },
{ 0xacebad03, short_gen64, long_gen64, 0xcb0bfa11 },
{ 0xacebad03, short_gen65, long_gen65, 0xcb0bfa11 },
{ 0xacebad03, short_gen66, long_gen66, 0xcb0bfa11 },
{ 0xacebad03, short_gen67, long_gen67, 0xcb0bfa11 },
{ 0xacebad03, short_gen68, long_gen68, 0xcb0bfa11 },
{ 0xacebad03, short_gen69, long_gen69, 0xcb0bfa11 },
{ 0xacebad03, short_gen70, long_gen70, 0xcb0bfa11 },
{ 0xacebad03, short_gen71, long_gen71, 0xcb0bfa11 },
{ 0xacebad03, short_gen72, long_gen72, 0xcb0bfa11 },
{ 0xacebad03, short_gen73, long_gen73, 0xcb0bfa11 },
{ 0xacebad03, short_gen74, long_gen74, 0xcb0bfa11 },
{ 0xacebad03, short_gen75, long_gen75, 0xcb0bfa11 },
{ 0xacebad03, short_gen76, long_gen76, 0xcb0bfa11 },
{ 0xacebad03, short_gen77, long_gen77, 0xcb0bfa11 },
{ 0xacebad03, short_gen78, long_gen78, 0xcb0bfa11 },
{ 0xacebad03, short_gen79, long_gen79, 0xcb0bfa11 },
{ 0xacebad03, short_gen80, long_gen80, 0xcb0bfa11 },
{ 0xacebad03, short_gen81, long_gen81, 0xcb0bfa11 },
{ 0xacebad03, short_gen82, long_gen82, 0xcb0bfa11 },
{ 0xacebad03, short_gen83, long_gen83, 0xcb0bfa11 },
{ 0xacebad03, short_gen84, long_gen84, 0xcb0bfa11 },
{ 0xacebad03, short_gen85, long_gen85, 0xcb0bfa11 },
{ 0xacebad03, short_gen86, long_gen86, 0xcb0bfa11 },
{ 0xacebad03, short_gen87, long_gen87, 0xcb0bfa11 },
{ 0xacebad03, short_gen88, long_gen88, 0xcb0bfa11 },
{ 0xacebad03, short_gen89, long_gen89, 0xcb0bfa11 },
{ 0xacebad03, short_gen90, long_gen90, 0xcb0bfa11 },
{ 0xacebad03, short_gen91, long_gen91, 0xcb0bfa11 },
{ 0xacebad03, short_gen92, long_gen92, 0xcb0bfa11 },
{ 0xacebad03, short_gen93, long_gen93, 0xcb0bfa11 },
{ 0xacebad03, short_gen94, long_gen94, 0xcb0bfa11 },
{ 0xacebad03, short_gen95, long_gen95, 0xcb0bfa11 },
{ 0xacebad03, short_gen96, long_gen96, 0xcb0bfa11 },
{ 0xacebad03, short_gen97, long_gen97, 0xcb0bfa11 },
{ 0xacebad03, short_gen98, long_gen98, 0xcb0bfa11 },
{ 0xacebad03, short_gen99, long_gen99, 0xcb0bfa11 },
{ 0xacebad03, short_gen100, long_gen100, 0xcb0bfa11 },
{ 0xacebad03, short_gen101, long_gen101, 0xcb0bfa11 },
{ 0xacebad03, short_gen102, long_gen102, 0xcb0bfa11 },
{ 0xacebad03, short_gen103, long_gen103, 0xcb0bfa11 },
{ 0xacebad03, short_gen104, long_gen104, 0xcb0bfa11 },
{ 0xacebad03, short_gen105, long_gen105, 0xcb0bfa11 },
{ 0xacebad03, short_gen106, long_gen106, 0xcb0bfa11 },
{ 0xacebad03, short_gen107, long_gen107, 0xcb0bfa11 },
{ 0xacebad03, short_gen108, long_gen108, 0xcb0bfa11 },
{ 0xacebad03, short_gen109, long_gen109, 0xcb0bfa11 },
{ 0xacebad03, short_gen110, long_gen110, 0xcb0bfa11 },
{ 0xacebad03, short_gen111, long_gen111, 0xcb0bfa11 },
{ 0xacebad03, short_gen112, long_gen112, 0xcb0bfa11 },
{ 0xacebad03, short_gen113, long_gen113, 0xcb0bfa11 },
{ 0xacebad03, short_gen114, long_gen114, 0xcb0bfa11 },
{ 0xacebad03, short_gen115, long_gen115, 0xcb0bfa11 },
{ 0xacebad03, short_gen116, long_gen116, 0xcb0bfa11 },
{ 0xacebad03, short_gen117, long_gen117, 0xcb0bfa11 },
{ 0xacebad03, short_gen118, long_gen118, 0xcb0bfa11 },
{ 0xacebad03, short_gen119, long_gen119, 0xcb0bfa11 },
{ 0xacebad03, short_gen120, long_gen120, 0xcb0bfa11 },
{ 0xacebad03, short_gen121, long_gen121, 0xcb0bfa11 },
{ 0xacebad03, short_gen122, long_gen122, 0xcb0bfa11 },
{ 0xacebad03, short_gen123, long_gen123, 0xcb0bfa11 },
{ 0xacebad03, short_gen124, long_gen124, 0xcb0bfa11 },
{ 0xacebad03, short_gen125, long_gen125, 0xcb0bfa11 },
{ 0xacebad03, short_gen126, long_gen126, 0xcb0bfa11 },
{ 0xacebad03, short_gen127, long_gen127, 0xcb0bfa11 },
{ 0xacebad03, short_gen128, long_gen128, 0xcb0bfa11 },
{ 0xacebad03, short_gen129, long_gen129, 0xcb0bfa11 },
{ 0xacebad03, short_gen130, long_gen130, 0xcb0bfa11 },
{ 0xacebad03, short_gen131, long_gen131, 0xcb0bfa11 },
{ 0xacebad03, short_gen132, long_gen132, 0xcb0bfa11 },
{ 0xacebad03, short_gen133, long_gen133, 0xcb0bfa11 },
{ 0xacebad03, short_gen134, long_gen134, 0xcb0bfa11 },
{ 0xacebad03, short_gen135, long_gen135, 0xcb0bfa11 },
{ 0xacebad03, short_gen136, long_gen136, 0xcb0bfa11 },
{ 0xacebad03, short_gen137, long_gen137, 0xcb0bfa11 },
{ 0xacebad03, short_gen138, long_gen138, 0xcb0bfa11 },
{ 0xacebad03, short_gen139, long_gen139, 0xcb0bfa11 },
{ 0xacebad03, short_gen140, long_gen140, 0xcb0bfa11 },
{ 0xacebad03, short_gen141, long_gen141, 0xcb0bfa11 },
{ 0xacebad03, short_gen142, long_gen142, 0xcb0bfa11 },
{ 0xacebad03, short_gen143, long_gen143, 0xcb0bfa11 },
{ 0xacebad03, short_gen144, long_gen144, 0xcb0bfa11 },
{ 0xacebad03, short_gen145, long_gen145, 0xcb0bfa11 },
{ 0xacebad03, short_gen146, long_gen146, 0xcb0bfa11 },
{ 0xacebad03, short_gen147, long_gen147, 0xcb0bfa11 },
{ 0xacebad03, short_gen148, long_gen148, 0xcb0bfa11 },
{ 0xacebad03, short_gen149, long_gen149, 0xcb0bfa11 },
{ 0xacebad03, short_gen150, long_gen150, 0xcb0bfa11 },
{ 0xacebad03, short_gen151, long_gen151, 0xcb0bfa11 },
{ 0xacebad03, short_gen152, long_gen152, 0xcb0bfa11 },
{ 0xacebad03, short_gen153, long_gen153, 0xcb0bfa11 },
{ 0xacebad03, short_gen154, long_gen154, 0xcb0bfa11 },
{ 0xacebad03, short_gen155, long_gen155, 0xcb0bfa11 },
{ 0xacebad03, short_gen156, long_gen156, 0xcb0bfa11 },
{ 0xacebad03, short_gen157, long_gen157, 0xcb0bfa11 },
{ 0xacebad03, short_gen158, long_gen158, 0xcb0bfa11 },
{ 0xacebad03, short_gen159, long_gen159, 0xcb0bfa11 },
{ 0xacebad03, short_gen160, long_gen160, 0xcb0bfa11 },
{ 0xacebad03, short_gen161, long_gen161, 0xcb0bfa11 },
{ 0xacebad03, short_gen162, long_gen162, 0xcb0bfa11 },
{ 0xacebad03, short_gen163, long_gen163, 0xcb0bfa11 },
{ 0xacebad03, short_gen164, long_gen164, 0xcb0bfa11 },
{ 0xacebad03, short_gen165, long_gen165, 0xcb0bfa11 },
{ 0xacebad03, short_gen166, long_gen166, 0xcb0bfa11 },
{ 0xacebad03, short_gen167, long_gen167, 0xcb0bfa11 },
{ 0xacebad03, short_gen168, long_gen168, 0xcb0bfa11 },
{ 0xacebad03, short_gen169, long_gen169, 0xcb0bfa11 },
{ 0xacebad03, short_gen170, long_gen170, 0xcb0bfa11 },
{ 0xacebad03, short_gen171, long_gen171, 0xcb0bfa11 },
{ 0xacebad03, short_gen172, long_gen172, 0xcb0bfa11 },
{ 0xacebad03, short_gen173, long_gen173, 0xcb0bfa11 },
{ 0xacebad03, short_gen174, long_gen174, 0xcb0bfa11 },
{ 0xacebad03, short_gen175, long_gen175, 0xcb0bfa11 },
{ 0xacebad03, short_gen176, long_gen176, 0xcb0bfa11 },
{ 0xacebad03, short_gen177, long_gen177, 0xcb0bfa11 },
{ 0xacebad03, short_gen178, long_gen178, 0xcb0bfa11 },
{ 0xacebad03, short_gen179, long_gen179, 0xcb0bfa11 },
{ 0xacebad03, short_gen180, long_gen180, 0xcb0bfa11 },
{ 0xacebad03, short_gen181, long_gen181, 0xcb0bfa11 },
{ 0xacebad03, short_gen182, long_gen182, 0xcb0bfa11 },
{ 0xacebad03, short_gen183, long_gen183, 0xcb0bfa11 },
{ 0xacebad03, short_gen184, long_gen184, 0xcb0bfa11 },
{ 0xacebad03, short_gen185, long_gen185, 0xcb0bfa11 },
{ 0xacebad03, short_gen186, long_gen186, 0xcb0bfa11 },
{ 0xacebad03, short_gen187, long_gen187, 0xcb0bfa11 },
{ 0xacebad03, short_gen188, long_gen188, 0xcb0bfa11 },
{ 0xacebad03, short_gen189, long_gen189, 0xcb0bfa11 },
{ 0xacebad03, short_gen190, long_gen190, 0xcb0bfa11 },
{ 0xacebad03, short_gen191, long_gen191, 0xcb0bfa11 },
{ 0xacebad03, short_gen192, long_gen192, 0xcb0bfa11 },
{ 0xacebad03, short_gen193, long_gen193, 0xcb0bfa11 },
{ 0xacebad03, short_gen194, long_gen194, 0xcb0bfa11 },
{ 0xacebad03, short_gen195, long_gen195, 0xcb0bfa11 },
{ 0xacebad03, short_gen196, long_gen196, 0xcb0bfa11 },
{ 0xacebad03, short_gen197, long_gen197, 0xcb0bfa11 },
{ 0xacebad03, short_gen198, long_gen198, 0xcb0bfa11 },
{ 0xacebad03, short_gen199, long_gen199, 0xcb0bfa11 },
{ 0xacebad03, short_gen200, long_gen200, 0xcb0bfa11 },
{ 0xacebad03, short_gen201, long_gen201, 0xcb0bfa11 },
{ 0xacebad03, short_gen202, long_gen202, 0xcb0bfa11 },
{ 0xacebad03, short_gen203, long_gen203, 0xcb0bfa11 },
{ 0xacebad03, short_gen204, long_gen204, 0xcb0bfa11 },
{ 0xacebad03, short_gen205, long_gen205, 0xcb0bfa11 },
{ 0xacebad03, short_gen206, long_gen206, 0xcb0bfa11 },
{ 0xacebad03, short_gen207, long_gen207, 0xcb0bfa11 },
{ 0xacebad03, short_gen208, long_gen208, 0xcb0bfa11 },
{ 0xacebad03, short_gen209, long_gen209, 0xcb0bfa11 },
{ 0xacebad03, short_gen210, long_gen210, 0xcb0bfa11 },
{ 0xacebad03, short_gen211, long_gen211, 0xcb0bfa11 },
{ 0xacebad03, short_gen212, long_gen212, 0xcb0bfa11 },
{ 0xacebad03, short_gen213, long_gen213, 0xcb0bfa11 },
{ 0xacebad03, short_gen214, long_gen214, 0xcb0bfa11 },
{ 0xacebad03, short_gen215, long_gen215, 0xcb0bfa11 },
{ 0xacebad03, short_gen216, long_gen216, 0xcb0bfa11 },
{ 0xacebad03, short_gen217, long_gen217, 0xcb0bfa11 },
{ 0xacebad03, short_gen218, long_gen218, 0xcb0bfa11 },
{ 0xacebad03, short_gen219, long_gen219, 0xcb0bfa11 },
{ 0xacebad03, short_gen220, long_gen220, 0xcb0bfa11 },
{ 0xacebad03, short_gen221, long_gen221, 0xcb0bfa11 },
{ 0xacebad03, short_gen222, long_gen222, 0xcb0bfa11 },
{ 0xacebad03, short_gen223, long_gen223, 0xcb0bfa11 },
{ 0xacebad03, short_gen224, long_gen224, 0xcb0bfa11 },
{ 0xacebad03, short_gen225, long_gen225, 0xcb0bfa11 },
{ 0xacebad03, short_gen226, long_gen226, 0xcb0bfa11 },
{ 0xacebad03, short_gen227, long_gen227, 0xcb0bfa11 },
{ 0xacebad03, short_gen228, long_gen228, 0xcb0bfa11 },
{ 0xacebad03, short_gen229, long_gen229, 0xcb0bfa11 },
{ 0xacebad03, short_gen230, long_gen230, 0xcb0bfa11 },
{ 0xacebad03, short_gen231, long_gen231, 0xcb0bfa11 },
{ 0xacebad03, short_gen232, long_gen232, 0xcb0bfa11 },
{ 0xacebad03, short_gen233, long_gen233, 0xcb0bfa11 },
{ 0xacebad03, short_gen234, long_gen234, 0xcb0bfa11 },
{ 0xacebad03, short_gen235, long_gen235, 0xcb0bfa11 },
{ 0xacebad03, short_gen236, long_gen236, 0xcb0bfa11 },
{ 0xacebad03, short_gen237, long_gen237, 0xcb0bfa11 },
{ 0xacebad03, short_gen238, long_gen238, 0xcb0bfa11 },
{ 0xacebad03, short_gen239, long_gen239, 0xcb0bfa11 },
{ 0xacebad03, short_gen240, long_gen240, 0xcb0bfa11 },
{ 0xacebad03, short_gen241, long_gen241, 0xcb0bfa11 },
{ 0xacebad03, short_gen242, long_gen242, 0xcb0bfa11 },
{ 0xacebad03, short_gen243, long_gen243, 0xcb0bfa11 },
{ 0xacebad03, short_gen244, long_gen244, 0xcb0bfa11 },
{ 0xacebad03, short_gen245, long_gen245, 0xcb0bfa11 },
{ 0xacebad03, short_gen246, long_gen246, 0xcb0bfa11 },
{ 0xacebad03, short_gen247, long_gen247, 0xcb0bfa11 },
{ 0xacebad03, short_gen248, long_gen248, 0xcb0bfa11 },
{ 0xacebad03, short_gen249, long_gen249, 0xcb0bfa11 },
{ 0xacebad03, short_gen250, long_gen250, 0xcb0bfa11 },
{ 0xacebad03, short_gen251, long_gen251, 0xcb0bfa11 },
{ 0xacebad03, short_gen252, long_gen252, 0xcb0bfa11 },
{ 0xacebad03, short_gen253, long_gen253, 0xcb0bfa11 },
{ 0xacebad03, short_gen254, long_gen254, 0xcb0bfa11 },
{ 0xacebad03, short_gen255, long_gen255, 0xcb0bfa11 },
{ 0xacebad03, short_gen256, long_gen256, 0xcb0bfa11 },
{ 0xacebad03, short_gen257, long_gen257, 0xcb0bfa11 },
{ 0xacebad03, short_gen258, long_gen258, 0xcb0bfa11 },
{ 0xacebad03, short_gen259, long_gen259, 0xcb0bfa11 },
{ 0xacebad03, short_gen260, long_gen260, 0xcb0bfa11 },
{ 0xacebad03, short_gen261, long_gen261, 0xcb0bfa11 },
{ 0xacebad03, short_gen262, long_gen262, 0xcb0bfa11 },
{ 0xacebad03, short_gen263, long_gen263, 0xcb0bfa11 },
{ 0xacebad03, short_gen264, long_gen264, 0xcb0bfa11 },
{ 0xacebad03, short_gen265, long_gen265, 0xcb0bfa11 },
{ 0xacebad03, short_gen266, long_gen266, 0xcb0bfa11 },
{ 0xacebad03, short_gen267, long_gen267, 0xcb0bfa11 },
{ 0xacebad03, short_gen268, long_gen268, 0xcb0bfa11 },
{ 0xacebad03, short_gen269, long_gen269, 0xcb0bfa11 },
{ 0xacebad03, short_gen270, long_gen270, 0xcb0bfa11 },
{ 0xacebad03, short_gen271, long_gen271, 0xcb0bfa11 },
{ 0xacebad03, short_gen272, long_gen272, 0xcb0bfa11 },
{ 0xacebad03, short_gen273, long_gen273, 0xcb0bfa11 },
{ 0xacebad03, short_gen274, long_gen274, 0xcb0bfa11 },
{ 0xacebad03, short_gen275, long_gen275, 0xcb0bfa11 },
{ 0xacebad03, short_gen276, long_gen276, 0xcb0bfa11 },
{ 0xacebad03, short_gen277, long_gen277, 0xcb0bfa11 },
{ 0xacebad03, short_gen278, long_gen278, 0xcb0bfa11 },
{ 0xacebad03, short_gen279, long_gen279, 0xcb0bfa11 },
{ 0xacebad03, short_gen280, long_gen280, 0xcb0bfa11 },
{ 0xacebad03, short_gen281, long_gen281, 0xcb0bfa11 },
{ 0xacebad03, short_gen282, long_gen282, 0xcb0bfa11 },
{ 0xacebad03, short_gen283, long_gen283, 0xcb0bfa11 },
{ 0xacebad03, short_gen284, long_gen284, 0xcb0bfa11 },
{ 0xacebad03, short_gen285, long_gen285, 0xcb0bfa11 },
{ 0xacebad03, short_gen286, long_gen286, 0xcb0bfa11 },
{ 0xacebad03, short_gen287, long_gen287, 0xcb0bfa11 },
{ 0xacebad03, short_gen288, long_gen288, 0xcb0bfa11 },
{ 0xacebad03, short_gen289, long_gen289, 0xcb0bfa11 },
{ 0xacebad03, short_gen290, long_gen290, 0xcb0bfa11 },
{ 0xacebad03, short_gen291, long_gen291, 0xcb0bfa11 },
{ 0xacebad03, short_gen292, long_gen292, 0xcb0bfa11 },
{ 0xacebad03, short_gen293, long_gen293, 0xcb0bfa11 },
{ 0xacebad03, short_gen294, long_gen294, 0xcb0bfa11 },
{ 0xacebad03, short_gen295, long_gen295, 0xcb0bfa11 },
{ 0xacebad03, short_gen296, long_gen296, 0xcb0bfa11 },
{ 0xacebad03, short_gen297, long_gen297, 0xcb0bfa11 },
{ 0xacebad03, short_gen298, long_gen298, 0xcb0bfa11 },
{ 0xacebad03, short_gen299, long_gen299, 0xcb0bfa11 },
{ 0xacebad03, short_gen300, long_gen300, 0xcb0bfa11 },
{ 0xacebad03, short_gen301, long_gen301, 0xcb0bfa11 },
{ 0xacebad03, short_gen302, long_gen302, 0xcb0bfa11 },
{ 0xacebad03, short_gen303, long_gen303, 0xcb0bfa11 },
{ 0xacebad03, short_gen304, long_gen304, 0xcb0bfa11 },
{ 0xacebad03, short_gen305, long_gen305, 0xcb0bfa11 },
{ 0xacebad03, short_gen306, long_gen306, 0xcb0bfa11 },
{ 0xacebad03, short_gen307, long_gen307, 0xcb0bfa11 },
{ 0xacebad03, short_gen308, long_gen308, 0xcb0bfa11 },
{ 0xacebad03, short_gen309, long_gen309, 0xcb0bfa11 },
{ 0xacebad03, short_gen310, long_gen310, 0xcb0bfa11 },
{ 0xacebad03, short_gen311, long_gen311, 0xcb0bfa11 },
{ 0xacebad03, short_gen312, long_gen312, 0xcb0bfa11 },
{ 0xacebad03, short_gen313, long_gen313, 0xcb0bfa11 },
{ 0xacebad03, short_gen314, long_gen314, 0xcb0bfa11 },
{ 0xacebad03, short_gen315, long_gen315, 0xcb0bfa11 },
{ 0xacebad03, short_gen316, long_gen316, 0xcb0bfa11 },
{ 0xacebad03, short_gen317, long_gen317, 0xcb0bfa11 },
{ 0xacebad03, short_gen318, long_gen318, 0xcb0bfa11 },
{ 0xacebad03, short_gen319, long_gen319, 0xcb0bfa11 },
{ 0xacebad03, short_gen320, long_gen320, 0xcb0bfa11 },
{ 0xacebad03, short_gen321, long_gen321, 0xcb0bfa11 },
{ 0xacebad03, short_gen322, long_gen322, 0xcb0bfa11 },
{ 0xacebad03, short_gen323, long_gen323, 0xcb0bfa11 },
{ 0xacebad03, short_gen324, long_gen324, 0xcb0bfa11 },
{ 0xacebad03, short_gen325, long_gen325, 0xcb0bfa11 },
{ 0xacebad03, short_gen326, long_gen326, 0xcb0bfa11 },
{ 0xacebad03, short_gen327, long_gen327, 0xcb0bfa11 },
{ 0xacebad03, short_gen328, long_gen328, 0xcb0bfa11 },
{ 0xacebad03, short_gen329, long_gen329, 0xcb0bfa11 },
{ 0xacebad03, short_gen330, long_gen330, 0xcb0bfa11 },
{ 0xacebad03, short_gen331, long_gen331, 0xcb0bfa11 },
{ 0xacebad03, short_gen332, long_gen332, 0xcb0bfa11 },
{ 0xacebad03, short_gen333, long_gen333, 0xcb0bfa11 },
{ 0xacebad03, short_gen334, long_gen334, 0xcb0bfa11 },
{ 0xacebad03, short_gen335, long_gen335, 0xcb0bfa11 },
{ 0xacebad03, short_gen336, long_gen336, 0xcb0bfa11 },
{ 0xacebad03, short_gen337, long_gen337, 0xcb0bfa11 },
{ 0xacebad03, short_gen338, long_gen338, 0xcb0bfa11 },
{ 0xacebad03, short_gen339, long_gen339, 0xcb0bfa11 },
{ 0xacebad03, short_gen340, long_gen340, 0xcb0bfa11 },
{ 0xacebad03, short_gen341, long_gen341, 0xcb0bfa11 },
{ 0xacebad03, short_gen342, long_gen342, 0xcb0bfa11 },
{ 0xacebad03, short_gen343, long_gen343, 0xcb0bfa11 },
{ 0xacebad03, short_gen344, long_gen344, 0xcb0bfa11 },
{ 0xacebad03, short_gen345, long_gen345, 0xcb0bfa11 },
{ 0xacebad03, short_gen346, long_gen346, 0xcb0bfa11 },
{ 0xacebad03, short_gen347, long_gen347, 0xcb0bfa11 },
{ 0xacebad03, short_gen348, long_gen348, 0xcb0bfa11 },
{ 0xacebad03, short_gen349, long_gen349, 0xcb0bfa11 },
{ 0xacebad03, short_gen350, long_gen350, 0xcb0bfa11 },
{ 0xacebad03, short_gen351, long_gen351, 0xcb0bfa11 },
{ 0xacebad03, short_gen352, long_gen352, 0xcb0bfa11 },
{ 0xacebad03, short_gen353, long_gen353, 0xcb0bfa11 },
{ 0xacebad03, short_gen354, long_gen354, 0xcb0bfa11 },
{ 0xacebad03, short_gen355, long_gen355, 0xcb0bfa11 },
{ 0xacebad03, short_gen356, long_gen356, 0xcb0bfa11 },
{ 0xacebad03, short_gen357, long_gen357, 0xcb0bfa11 },
{ 0xacebad03, short_gen358, long_gen358, 0xcb0bfa11 },
{ 0xacebad03, short_gen359, long_gen359, 0xcb0bfa11 },
{ 0xacebad03, short_gen360, long_gen360, 0xcb0bfa11 },
{ 0xacebad03, short_gen361, long_gen361, 0xcb0bfa11 },
{ 0xacebad03, short_gen362, long_gen362, 0xcb0bfa11 },
{ 0xacebad03, short_gen363, long_gen363, 0xcb0bfa11 },
{ 0xacebad03, short_gen364, long_gen364, 0xcb0bfa11 },
{ 0xacebad03, short_gen365, long_gen365, 0xcb0bfa11 },
{ 0xacebad03, short_gen366, long_gen366, 0xcb0bfa11 },
{ 0xacebad03, short_gen367, long_gen367, 0xcb0bfa11 },
{ 0xacebad03, short_gen368, long_gen368, 0xcb0bfa11 },
{ 0xacebad03, short_gen369, long_gen369, 0xcb0bfa11 },
{ 0xacebad03, short_gen370, long_gen370, 0xcb0bfa11 },
{ 0xacebad03, short_gen371, long_gen371, 0xcb0bfa11 },
{ 0xacebad03, short_gen372, long_gen372, 0xcb0bfa11 },
{ 0xacebad03, short_gen373, long_gen373, 0xcb0bfa11 },
{ 0xacebad03, short_gen374, long_gen374, 0xcb0bfa11 },
{ 0xacebad03, short_gen375, long_gen375, 0xcb0bfa11 },
{ 0xacebad03, short_gen376, long_gen376, 0xcb0bfa11 },
{ 0xacebad03, short_gen377, long_gen377, 0xcb0bfa11 },
{ 0xacebad03, short_gen378, long_gen378, 0xcb0bfa11 },
{ 0xacebad03, short_gen379, long_gen379, 0xcb0bfa11 },
{ 0xacebad03, short_gen380, long_gen380, 0xcb0bfa11 },
{ 0xacebad03, short_gen381, long_gen381, 0xcb0bfa11 },
{ 0xacebad03, short_gen382, long_gen382, 0xcb0bfa11 },
{ 0xacebad03, short_gen383, long_gen383, 0xcb0bfa11 },
{ 0xacebad03, short_gen384, long_gen384, 0xcb0bfa11 },
{ 0xacebad03, short_gen385, long_gen385, 0xcb0bfa11 },
{ 0xacebad03, short_gen386, long_gen386, 0xcb0bfa11 },
{ 0xacebad03, short_gen387, long_gen387, 0xcb0bfa11 },
{ 0xacebad03, short_gen388, long_gen388, 0xcb0bfa11 },
{ 0xacebad03, short_gen389, long_gen389, 0xcb0bfa11 },
{ 0xacebad03, short_gen390, long_gen390, 0xcb0bfa11 },
{ 0xacebad03, short_gen391, long_gen391, 0xcb0bfa11 },
{ 0xacebad03, short_gen392, long_gen392, 0xcb0bfa11 },
{ 0xacebad03, short_gen393, long_gen393, 0xcb0bfa11 },
{ 0xacebad03, short_gen394, long_gen394, 0xcb0bfa11 },
{ 0xacebad03, short_gen395, long_gen395, 0xcb0bfa11 },
{ 0xacebad03, short_gen396, long_gen396, 0xcb0bfa11 },
{ 0xacebad03, short_gen397, long_gen397, 0xcb0bfa11 },
{ 0xacebad03, short_gen398, long_gen398, 0xcb0bfa11 },
{ 0xacebad03, short_gen399, long_gen399, 0xcb0bfa11 },
{ 0xacebad03, short_gen400, long_gen400, 0xcb0bfa11 },
{ 0xacebad03, short_gen401, long_gen401, 0xcb0bfa11 },
{ 0xacebad03, short_gen402, long_gen402, 0xcb0bfa11 },
{ 0xacebad03, short_gen403, long_gen403, 0xcb0bfa11 },
{ 0xacebad03, short_gen404, long_gen404, 0xcb0bfa11 },
{ 0xacebad03, short_gen405, long_gen405, 0xcb0bfa11 },
{ 0xacebad03, short_gen406, long_gen406, 0xcb0bfa11 },
{ 0xacebad03, short_gen407, long_gen407, 0xcb0bfa11 },
{ 0xacebad03, short_gen408, long_gen408, 0xcb0bfa11 },
{ 0xacebad03, short_gen409, long_gen409, 0xcb0bfa11 },
{ 0xacebad03, short_gen410, long_gen410, 0xcb0bfa11 },
{ 0xacebad03, short_gen411, long_gen411, 0xcb0bfa11 },
{ 0xacebad03, short_gen412, long_gen412, 0xcb0bfa11 },
{ 0xacebad03, short_gen413, long_gen413, 0xcb0bfa11 },
{ 0xacebad03, short_gen414, long_gen414, 0xcb0bfa11 },
{ 0xacebad03, short_gen415, long_gen415, 0xcb0bfa11 },
{ 0xacebad03, short_gen416, long_gen416, 0xcb0bfa11 },
{ 0xacebad03, short_gen417, long_gen417, 0xcb0bfa11 },
{ 0xacebad03, short_gen418, long_gen418, 0xcb0bfa11 },
{ 0xacebad03, short_gen419, long_gen419, 0xcb0bfa11 },
{ 0xacebad03, short_gen420, long_gen420, 0xcb0bfa11 },
{ 0xacebad03, short_gen421, long_gen421, 0xcb0bfa11 },
{ 0xacebad03, short_gen422, long_gen422, 0xcb0bfa11 },
{ 0xacebad03, short_gen423, long_gen423, 0xcb0bfa11 },
{ 0xacebad03, short_gen424, long_gen424, 0xcb0bfa11 },
{ 0xacebad03, short_gen425, long_gen425, 0xcb0bfa11 },
{ 0xacebad03, short_gen426, long_gen426, 0xcb0bfa11 },
{ 0xacebad03, short_gen427, long_gen427, 0xcb0bfa11 },
{ 0xacebad03, short_gen428, long_gen428, 0xcb0bfa11 },
{ 0xacebad03, short_gen429, long_gen429, 0xcb0bfa11 },
{ 0xacebad03, short_gen430, long_gen430, 0xcb0bfa11 },
{ 0xacebad03, short_gen431, long_gen431, 0xcb0bfa11 },
{ 0xacebad03, short_gen432, long_gen432, 0xcb0bfa11 },
{ 0xacebad03, short_gen433, long_gen433, 0xcb0bfa11 },
{ 0xacebad03, short_gen434, long_gen434, 0xcb0bfa11 },
{ 0xacebad03, short_gen435, long_gen435, 0xcb0bfa11 },
{ 0xacebad03, short_gen436, long_gen436, 0xcb0bfa11 },
{ 0xacebad03, short_gen437, long_gen437, 0xcb0bfa11 },
{ 0xacebad03, short_gen438, long_gen438, 0xcb0bfa11 },
{ 0xacebad03, short_gen439, long_gen439, 0xcb0bfa11 },
{ 0xacebad03, short_gen440, long_gen440, 0xcb0bfa11 },
{ 0xacebad03, short_gen441, long_gen441, 0xcb0bfa11 },
{ 0xacebad03, short_gen442, long_gen442, 0xcb0bfa11 },
{ 0xacebad03, short_gen443, long_gen443, 0xcb0bfa11 },
{ 0xacebad03, short_gen444, long_gen444, 0xcb0bfa11 },
{ 0xacebad03, short_gen445, long_gen445, 0xcb0bfa11 },
{ 0xacebad03, short_gen446, long_gen446, 0xcb0bfa11 },
{ 0xacebad03, short_gen447, long_gen447, 0xcb0bfa11 },
{ 0xacebad03, short_gen448, long_gen448, 0xcb0bfa11 },
{ 0xacebad03, short_gen449, long_gen449, 0xcb0bfa11 },
{ 0xacebad03, short_gen450, long_gen450, 0xcb0bfa11 },
{ 0xacebad03, short_gen451, long_gen451, 0xcb0bfa11 },
{ 0xacebad03, short_gen452, long_gen452, 0xcb0bfa11 },
{ 0xacebad03, short_gen453, long_gen453, 0xcb0bfa11 },
{ 0xacebad03, short_gen454, long_gen454, 0xcb0bfa11 },
{ 0xacebad03, short_gen455, long_gen455, 0xcb0bfa11 },
{ 0xacebad03, short_gen456, long_gen456, 0xcb0bfa11 },
{ 0xacebad03, short_gen457, long_gen457, 0xcb0bfa11 },
{ 0xacebad03, short_gen458, long_gen458, 0xcb0bfa11 },
{ 0xacebad03, short_gen459, long_gen459, 0xcb0bfa11 },
{ 0xacebad03, short_gen460, long_gen460, 0xcb0bfa11 },
{ 0xacebad03, short_gen461, long_gen461, 0xcb0bfa11 },
{ 0xacebad03, short_gen462, long_gen462, 0xcb0bfa11 },
{ 0xacebad03, short_gen463, long_gen463, 0xcb0bfa11 },
{ 0xacebad03, short_gen464, long_gen464, 0xcb0bfa11 },
{ 0xacebad03, short_gen465, long_gen465, 0xcb0bfa11 },
{ 0xacebad03, short_gen466, long_gen466, 0xcb0bfa11 },
{ 0xacebad03, short_gen467, long_gen467, 0xcb0bfa11 },
{ 0xacebad03, short_gen468, long_gen468, 0xcb0bfa11 },
{ 0xacebad03, short_gen469, long_gen469, 0xcb0bfa11 },
{ 0xacebad03, short_gen470, long_gen470, 0xcb0bfa11 },
{ 0xacebad03, short_gen471, long_gen471, 0xcb0bfa11 },
{ 0xacebad03, short_gen472, long_gen472, 0xcb0bfa11 },
{ 0xacebad03, short_gen473, long_gen473, 0xcb0bfa11 },
{ 0xacebad03, short_gen474, long_gen474, 0xcb0bfa11 },
{ 0xacebad03, short_gen475, long_gen475, 0xcb0bfa11 },
{ 0xacebad03, short_gen476, long_gen476, 0xcb0bfa11 },
{ 0xacebad03, short_gen477, long_gen477, 0xcb0bfa11 },
{ 0xacebad03, short_gen478, long_gen478, 0xcb0bfa11 },
{ 0xacebad03, short_gen479, long_gen479, 0xcb0bfa11 },
{ 0xacebad03, short_gen480, long_gen480, 0xcb0bfa11 },
{ 0xacebad03, short_gen481, long_gen481, 0xcb0bfa11 },
{ 0xacebad03, short_gen482, long_gen482, 0xcb0bfa11 },
{ 0xacebad03, short_gen483, long_gen483, 0xcb0bfa11 },
{ 0xacebad03, short_gen484, long_gen484, 0xcb0bfa11 },
{ 0xacebad03, short_gen485, long_gen485, 0xcb0bfa11 },
{ 0xacebad03, short_gen486, long_gen486, 0xcb0bfa11 },
{ 0xacebad03, short_gen487, long_gen487, 0xcb0bfa11 },
{ 0xacebad03, short_gen488, long_gen488, 0xcb0bfa11 },
{ 0xacebad03, short_gen489, long_gen489, 0xcb0bfa11 },
{ 0xacebad03, short_gen490, long_gen490, 0xcb0bfa11 },
{ 0xacebad03, short_gen491, long_gen491, 0xcb0bfa11 },
{ 0xacebad03, short_gen492, long_gen492, 0xcb0bfa11 },
{ 0xacebad03, short_gen493, long_gen493, 0xcb0bfa11 },
{ 0xacebad03, short_gen494, long_gen494, 0xcb0bfa11 },
{ 0xacebad03, short_gen495, long_gen495, 0xcb0bfa11 },
{ 0xacebad03, short_gen496, long_gen496, 0xcb0bfa11 },
{ 0xacebad03, short_gen497, long_gen497, 0xcb0bfa11 },
{ 0xacebad03, short_gen498, long_gen498, 0xcb0bfa11 },
{ 0xacebad03, short_gen499, long_gen499, 0xcb0bfa11 },
{ 0xacebad03, short_gen500, long_gen500, 0xcb0bfa11 },
{ 0xacebad03, short_gen501, long_gen501, 0xcb0bfa11 },
{ 0xacebad03, short_gen502, long_gen502, 0xcb0bfa11 },
{ 0xacebad03, short_gen503, long_gen503, 0xcb0bfa11 },
{ 0xacebad03, short_gen504, long_gen504, 0xcb0bfa11 },
{ 0xacebad03, short_gen505, long_gen505, 0xcb0bfa11 },
{ 0xacebad03, short_gen506, long_gen506, 0xcb0bfa11 },
{ 0xacebad03, short_gen507, long_gen507, 0xcb0bfa11 },
{ 0xacebad03, short_gen508, long_gen508, 0xcb0bfa11 },
{ 0xacebad03, short_gen509, long_gen509, 0xcb0bfa11 },
{ 0xacebad03, short_gen510, long_gen510, 0xcb0bfa11 },
{ 0xacebad03, short_gen511, long_gen511, 0xcb0bfa11 },
{ 0xacebad03, short_gen512, long_gen512, 0xcb0bfa11 },
{ 0xacebad03, short_gen513, long_gen513, 0xcb0bfa11 },
{ 0xacebad03, short_gen514, long_gen514, 0xcb0bfa11 },
{ 0xacebad03, short_gen515, long_gen515, 0xcb0bfa11 },
{ 0xacebad03, short_gen516, long_gen516, 0xcb0bfa11 },
{ 0xacebad03, short_gen517, long_gen517, 0xcb0bfa11 },
{ 0xacebad03, short_gen518, long_gen518, 0xcb0bfa11 },
{ 0xacebad03, short_gen519, long_gen519, 0xcb0bfa11 },
{ 0xacebad03, short_gen520, long_gen520, 0xcb0bfa11 },
{ 0xacebad03, short_gen521, long_gen521, 0xcb0bfa11 },
{ 0xacebad03, short_gen522, long_gen522, 0xcb0bfa11 },
{ 0xacebad03, short_gen523, long_gen523, 0xcb0bfa11 },
{ 0xacebad03, short_gen524, long_gen524, 0xcb0bfa11 },
{ 0xacebad03, short_gen525, long_gen525, 0xcb0bfa11 },
{ 0xacebad03, short_gen526, long_gen526, 0xcb0bfa11 },
{ 0xacebad03, short_gen527, long_gen527, 0xcb0bfa11 },
{ 0xacebad03, short_gen528, long_gen528, 0xcb0bfa11 },
{ 0xacebad03, short_gen529, long_gen529, 0xcb0bfa11 },
{ 0xacebad03, short_gen530, long_gen530, 0xcb0bfa11 },
{ 0xacebad03, short_gen531, long_gen531, 0xcb0bfa11 },
{ 0xacebad03, short_gen532, long_gen532, 0xcb0bfa11 },
{ 0xacebad03, short_gen533, long_gen533, 0xcb0bfa11 },
{ 0xacebad03, short_gen534, long_gen534, 0xcb0bfa11 },
{ 0xacebad03, short_gen535, long_gen535, 0xcb0bfa11 },
{ 0xacebad03, short_gen536, long_gen536, 0xcb0bfa11 },
{ 0xacebad03, short_gen537, long_gen537, 0xcb0bfa11 },
{ 0xacebad03, short_gen538, long_gen538, 0xcb0bfa11 },
{ 0xacebad03, short_gen539, long_gen539, 0xcb0bfa11 },
{ 0xacebad03, short_gen540, long_gen540, 0xcb0bfa11 },
{ 0xacebad03, short_gen541, long_gen541, 0xcb0bfa11 },
{ 0xacebad03, short_gen542, long_gen542, 0xcb0bfa11 },
{ 0xacebad03, short_gen543, long_gen543, 0xcb0bfa11 },
{ 0xacebad03, short_gen544, long_gen544, 0xcb0bfa11 },
{ 0xacebad03, short_gen545, long_gen545, 0xcb0bfa11 },
{ 0xacebad03, short_gen546, long_gen546, 0xcb0bfa11 },
{ 0xacebad03, short_gen547, long_gen547, 0xcb0bfa11 },
{ 0xacebad03, short_gen548, long_gen548, 0xcb0bfa11 },
{ 0xacebad03, short_gen549, long_gen549, 0xcb0bfa11 },
{ 0xacebad03, short_gen550, long_gen550, 0xcb0bfa11 },
{ 0xacebad03, short_gen551, long_gen551, 0xcb0bfa11 },
{ 0xacebad03, short_gen552, long_gen552, 0xcb0bfa11 },
{ 0xacebad03, short_gen553, long_gen553, 0xcb0bfa11 },
{ 0xacebad03, short_gen554, long_gen554, 0xcb0bfa11 },
{ 0xacebad03, short_gen555, long_gen555, 0xcb0bfa11 },
{ 0xacebad03, short_gen556, long_gen556, 0xcb0bfa11 },
{ 0xacebad03, short_gen557, long_gen557, 0xcb0bfa11 },
{ 0xacebad03, short_gen558, long_gen558, 0xcb0bfa11 },
{ 0xacebad03, short_gen559, long_gen559, 0xcb0bfa11 },
{ 0xacebad03, short_gen560, long_gen560, 0xcb0bfa11 },
{ 0xacebad03, short_gen561, long_gen561, 0xcb0bfa11 },
{ 0xacebad03, short_gen562, long_gen562, 0xcb0bfa11 },
{ 0xacebad03, short_gen563, long_gen563, 0xcb0bfa11 },
{ 0xacebad03, short_gen564, long_gen564, 0xcb0bfa11 },
{ 0xacebad03, short_gen565, long_gen565, 0xcb0bfa11 },
{ 0xacebad03, short_gen566, long_gen566, 0xcb0bfa11 },
{ 0xacebad03, short_gen567, long_gen567, 0xcb0bfa11 },
{ 0xacebad03, short_gen568, long_gen568, 0xcb0bfa11 },
{ 0xacebad03, short_gen569, long_gen569, 0xcb0bfa11 },
{ 0xacebad03, short_gen570, long_gen570, 0xcb0bfa11 },
{ 0xacebad03, short_gen571, long_gen571, 0xcb0bfa11 },
{ 0xacebad03, short_gen572, long_gen572, 0xcb0bfa11 },
{ 0xacebad03, short_gen573, long_gen573, 0xcb0bfa11 },
{ 0xacebad03, short_gen574, long_gen574, 0xcb0bfa11 },
{ 0xacebad03, short_gen575, long_gen575, 0xcb0bfa11 },
{ 0xacebad03, short_gen576, long_gen576, 0xcb0bfa11 },
{ 0xacebad03, short_gen577, long_gen577, 0xcb0bfa11 },
{ 0xacebad03, short_gen578, long_gen578, 0xcb0bfa11 },
{ 0xacebad03, short_gen579, long_gen579, 0xcb0bfa11 },
{ 0xacebad03, short_gen580, long_gen580, 0xcb0bfa11 },
{ 0xacebad03, short_gen581, long_gen581, 0xcb0bfa11 },
{ 0xacebad03, short_gen582, long_gen582, 0xcb0bfa11 },
{ 0xacebad03, short_gen583, long_gen583, 0xcb0bfa11 },
{ 0xacebad03, short_gen584, long_gen584, 0xcb0bfa11 },
{ 0xacebad03, short_gen585, long_gen585, 0xcb0bfa11 },
{ 0xacebad03, short_gen586, long_gen586, 0xcb0bfa11 },
{ 0xacebad03, short_gen587, long_gen587, 0xcb0bfa11 },
{ 0xacebad03, short_gen588, long_gen588, 0xcb0bfa11 },
{ 0xacebad03, short_gen589, long_gen589, 0xcb0bfa11 },
{ 0xacebad03, short_gen590, long_gen590, 0xcb0bfa11 },
{ 0xacebad03, short_gen591, long_gen591, 0xcb0bfa11 },
{ 0xacebad03, short_gen592, long_gen592, 0xcb0bfa11 },
{ 0xacebad03, short_gen593, long_gen593, 0xcb0bfa11 },
{ 0xacebad03, short_gen594, long_gen594, 0xcb0bfa11 },
{ 0xacebad03, short_gen595, long_gen595, 0xcb0bfa11 },
{ 0xacebad03, short_gen596, long_gen596, 0xcb0bfa11 },
{ 0xacebad03, short_gen597, long_gen597, 0xcb0bfa11 },
{ 0xacebad03, short_gen598, long_gen598, 0xcb0bfa11 },
{ 0xacebad03, short_gen599, long_gen599, 0xcb0bfa11 },
{ 0xacebad03, short_gen600, long_gen600, 0xcb0bfa11 },
{ 0xacebad03, short_gen601, long_gen601, 0xcb0bfa11 },
{ 0xacebad03, short_gen602, long_gen602, 0xcb0bfa11 },
{ 0xacebad03, short_gen603, long_gen603, 0xcb0bfa11 },
{ 0xacebad03, short_gen604, long_gen604, 0xcb0bfa11 },
{ 0xacebad03, short_gen605, long_gen605, 0xcb0bfa11 },
{ 0xacebad03, short_gen606, long_gen606, 0xcb0bfa11 },
{ 0xacebad03, short_gen607, long_gen607, 0xcb0bfa11 },
{ 0xacebad03, short_gen608, long_gen608, 0xcb0bfa11 },
{ 0xacebad03, short_gen609, long_gen609, 0xcb0bfa11 },
{ 0xacebad03, short_gen610, long_gen610, 0xcb0bfa11 },
{ 0xacebad03, short_gen611, long_gen611, 0xcb0bfa11 },
{ 0xacebad03, short_gen612, long_gen612, 0xcb0bfa11 },
{ 0xacebad03, short_gen613, long_gen613, 0xcb0bfa11 },
{ 0xacebad03, short_gen614, long_gen614, 0xcb0bfa11 },
{ 0xacebad03, short_gen615, long_gen615, 0xcb0bfa11 },
{ 0xacebad03, short_gen616, long_gen616, 0xcb0bfa11 },
{ 0xacebad03, short_gen617, long_gen617, 0xcb0bfa11 },
{ 0xacebad03, short_gen618, long_gen618, 0xcb0bfa11 },
{ 0xacebad03, short_gen619, long_gen619, 0xcb0bfa11 },
{ 0xacebad03, short_gen620, long_gen620, 0xcb0bfa11 },
{ 0xacebad03, short_gen621, long_gen621, 0xcb0bfa11 },
{ 0xacebad03, short_gen622, long_gen622, 0xcb0bfa11 },
{ 0xacebad03, short_gen623, long_gen623, 0xcb0bfa11 },
{ 0xacebad03, short_gen624, long_gen624, 0xcb0bfa11 },
{ 0xacebad03, short_gen625, long_gen625, 0xcb0bfa11 },
{ 0xacebad03, short_gen626, long_gen626, 0xcb0bfa11 },
{ 0xacebad03, short_gen627, long_gen627, 0xcb0bfa11 },
{ 0xacebad03, short_gen628, long_gen628, 0xcb0bfa11 },
{ 0xacebad03, short_gen629, long_gen629, 0xcb0bfa11 },
{ 0xacebad03, short_gen630, long_gen630, 0xcb0bfa11 },
{ 0xacebad03, short_gen631, long_gen631, 0xcb0bfa11 },
{ 0xacebad03, short_gen632, long_gen632, 0xcb0bfa11 },
{ 0xacebad03, short_gen633, long_gen633, 0xcb0bfa11 },
{ 0xacebad03, short_gen634, long_gen634, 0xcb0bfa11 },
{ 0xacebad03, short_gen635, long_gen635, 0xcb0bfa11 },
{ 0xacebad03, short_gen636, long_gen636, 0xcb0bfa11 },
{ 0xacebad03, short_gen637, long_gen637, 0xcb0bfa11 },
{ 0xacebad03, short_gen638, long_gen638, 0xcb0bfa11 },
{ 0xacebad03, short_gen639, long_gen639, 0xcb0bfa11 },
{ 0xacebad03, short_gen640, long_gen640, 0xcb0bfa11 },
{ 0xacebad03, short_gen641, long_gen641, 0xcb0bfa11 },
{ 0xacebad03, short_gen642, long_gen642, 0xcb0bfa11 },
{ 0xacebad03, short_gen643, long_gen643, 0xcb0bfa11 },
{ 0xacebad03, short_gen644, long_gen644, 0xcb0bfa11 },
{ 0xacebad03, short_gen645, long_gen645, 0xcb0bfa11 },
{ 0xacebad03, short_gen646, long_gen646, 0xcb0bfa11 },
{ 0xacebad03, short_gen647, long_gen647, 0xcb0bfa11 },
{ 0xacebad03, short_gen648, long_gen648, 0xcb0bfa11 },
{ 0xacebad03, short_gen649, long_gen649, 0xcb0bfa11 },
{ 0xacebad03, short_gen650, long_gen650, 0xcb0bfa11 },
{ 0xacebad03, short_gen651, long_gen651, 0xcb0bfa11 },
{ 0xacebad03, short_gen652, long_gen652, 0xcb0bfa11 },
{ 0xacebad03, short_gen653, long_gen653, 0xcb0bfa11 },
{ 0xacebad03, short_gen654, long_gen654, 0xcb0bfa11 },
{ 0xacebad03, short_gen655, long_gen655, 0xcb0bfa11 },
{ 0xacebad03, short_gen656, long_gen656, 0xcb0bfa11 },
{ 0xacebad03, short_gen657, long_gen657, 0xcb0bfa11 },
{ 0xacebad03, short_gen658, long_gen658, 0xcb0bfa11 },
{ 0xacebad03, short_gen659, long_gen659, 0xcb0bfa11 },
{ 0xacebad03, short_gen660, long_gen660, 0xcb0bfa11 },
{ 0xacebad03, short_gen661, long_gen661, 0xcb0bfa11 },
{ 0xacebad03, short_gen662, long_gen662, 0xcb0bfa11 },
{ 0xacebad03, short_gen663, long_gen663, 0xcb0bfa11 },
{ 0xacebad03, short_gen664, long_gen664, 0xcb0bfa11 },
{ 0xacebad03, short_gen665, long_gen665, 0xcb0bfa11 },
{ 0xacebad03, short_gen666, long_gen666, 0xcb0bfa11 },
{ 0xacebad03, short_gen667, long_gen667, 0xcb0bfa11 },
{ 0xacebad03, short_gen668, long_gen668, 0xcb0bfa11 },
{ 0xacebad03, short_gen669, long_gen669, 0xcb0bfa11 },
{ 0xacebad03, short_gen670, long_gen670, 0xcb0bfa11 },
{ 0xacebad03, short_gen671, long_gen671, 0xcb0bfa11 },
{ 0xacebad03, short_gen672, long_gen672, 0xcb0bfa11 },
{ 0xacebad03, short_gen673, long_gen673, 0xcb0bfa11 },
{ 0xacebad03, short_gen674, long_gen674, 0xcb0bfa11 },
{ 0xacebad03, short_gen675, long_gen675, 0xcb0bfa11 },
{ 0xacebad03, short_gen676, long_gen676, 0xcb0bfa11 },
{ 0xacebad03, short_gen677, long_gen677, 0xcb0bfa11 },
{ 0xacebad03, short_gen678, long_gen678, 0xcb0bfa11 },
{ 0xacebad03, short_gen679, long_gen679, 0xcb0bfa11 },
{ 0xacebad03, short_gen680, long_gen680, 0xcb0bfa11 },
{ 0xacebad03, short_gen681, long_gen681, 0xcb0bfa11 },
{ 0xacebad03, short_gen682, long_gen682, 0xcb0bfa11 },
{ 0xacebad03, short_gen683, long_gen683, 0xcb0bfa11 },
{ 0xacebad03, short_gen684, long_gen684, 0xcb0bfa11 },
{ 0xacebad03, short_gen685, long_gen685, 0xcb0bfa11 },
{ 0xacebad03, short_gen686, long_gen686, 0xcb0bfa11 },
{ 0xacebad03, short_gen687, long_gen687, 0xcb0bfa11 },
{ 0xacebad03, short_gen688, long_gen688, 0xcb0bfa11 },
{ 0xacebad03, short_gen689, long_gen689, 0xcb0bfa11 },
{ 0xacebad03, short_gen690, long_gen690, 0xcb0bfa11 },
{ 0xacebad03, short_gen691, long_gen691, 0xcb0bfa11 },
{ 0xacebad03, short_gen692, long_gen692, 0xcb0bfa11 },
{ 0xacebad03, short_gen693, long_gen693, 0xcb0bfa11 },
{ 0xacebad03, short_gen694, long_gen694, 0xcb0bfa11 },
{ 0xacebad03, short_gen695, long_gen695, 0xcb0bfa11 },
{ 0xacebad03, short_gen696, long_gen696, 0xcb0bfa11 },
{ 0xacebad03, short_gen697, long_gen697, 0xcb0bfa11 },
{ 0xacebad03, short_gen698, long_gen698, 0xcb0bfa11 },
{ 0xacebad03, short_gen699, long_gen699, 0xcb0bfa11 },
{ 0xacebad03, short_gen700, long_gen700, 0xcb0bfa11 },
{ 0xacebad03, short_gen701, long_gen701, 0xcb0bfa11 },
{ 0xacebad03, short_gen702, long_gen702, 0xcb0bfa11 },
{ 0xacebad03, short_gen703, long_gen703, 0xcb0bfa11 },
{ 0xacebad03, short_gen704, long_gen704, 0xcb0bfa11 },
{ 0xacebad03, short_gen705, long_gen705, 0xcb0bfa11 },
{ 0xacebad03, short_gen706, long_gen706, 0xcb0bfa11 },
{ 0xacebad03, short_gen707, long_gen707, 0xcb0bfa11 },
{ 0xacebad03, short_gen708, long_gen708, 0xcb0bfa11 },
{ 0xacebad03, short_gen709, long_gen709, 0xcb0bfa11 },
{ 0xacebad03, short_gen710, long_gen710, 0xcb0bfa11 },
{ 0xacebad03, short_gen711, long_gen711, 0xcb0bfa11 },
{ 0xacebad03, short_gen712, long_gen712, 0xcb0bfa11 },
{ 0xacebad03, short_gen713, long_gen713, 0xcb0bfa11 },
{ 0xacebad03, short_gen714, long_gen714, 0xcb0bfa11 },
{ 0xacebad03, short_gen715, long_gen715, 0xcb0bfa11 },
{ 0xacebad03, short_gen716, long_gen716, 0xcb0bfa11 },
{ 0xacebad03, short_gen717, long_gen717, 0xcb0bfa11 },
{ 0xacebad03, short_gen718, long_gen718, 0xcb0bfa11 },
{ 0xacebad03, short_gen719, long_gen719, 0xcb0bfa11 },
{ 0xacebad03, short_gen720, long_gen720, 0xcb0bfa11 },
{ 0xacebad03, short_gen721, long_gen721, 0xcb0bfa11 },
{ 0xacebad03, short_gen722, long_gen722, 0xcb0bfa11 },
{ 0xacebad03, short_gen723, long_gen723, 0xcb0bfa11 },
{ 0xacebad03, short_gen724, long_gen724, 0xcb0bfa11 },
{ 0xacebad03, short_gen725, long_gen725, 0xcb0bfa11 },
{ 0xacebad03, short_gen726, long_gen726, 0xcb0bfa11 },
{ 0xacebad03, short_gen727, long_gen727, 0xcb0bfa11 },
{ 0xacebad03, short_gen728, long_gen728, 0xcb0bfa11 },
{ 0xacebad03, short_gen729, long_gen729, 0xcb0bfa11 },
{ 0xacebad03, short_gen730, long_gen730, 0xcb0bfa11 },
{ 0xacebad03, short_gen731, long_gen731, 0xcb0bfa11 },
{ 0xacebad03, short_gen732, long_gen732, 0xcb0bfa11 },
{ 0xacebad03, short_gen733, long_gen733, 0xcb0bfa11 },
{ 0xacebad03, short_gen734, long_gen734, 0xcb0bfa11 },
{ 0xacebad03, short_gen735, long_gen735, 0xcb0bfa11 },
{ 0xacebad03, short_gen736, long_gen736, 0xcb0bfa11 },
{ 0xacebad03, short_gen737, long_gen737, 0xcb0bfa11 },
{ 0xacebad03, short_gen738, long_gen738, 0xcb0bfa11 },
{ 0xacebad03, short_gen739, long_gen739, 0xcb0bfa11 },
{ 0xacebad03, short_gen740, long_gen740, 0xcb0bfa11 },
{ 0xacebad03, short_gen741, long_gen741, 0xcb0bfa11 },
{ 0xacebad03, short_gen742, long_gen742, 0xcb0bfa11 },
{ 0xacebad03, short_gen743, long_gen743, 0xcb0bfa11 },
{ 0xacebad03, short_gen744, long_gen744, 0xcb0bfa11 },
{ 0xacebad03, short_gen745, long_gen745, 0xcb0bfa11 },
{ 0xacebad03, short_gen746, long_gen746, 0xcb0bfa11 },
{ 0xacebad03, short_gen747, long_gen747, 0xcb0bfa11 },
{ 0xacebad03, short_gen748, long_gen748, 0xcb0bfa11 },
{ 0xacebad03, short_gen749, long_gen749, 0xcb0bfa11 },
{ 0xacebad03, short_gen750, long_gen750, 0xcb0bfa11 },
{ 0xacebad03, short_gen751, long_gen751, 0xcb0bfa11 },
{ 0xacebad03, short_gen752, long_gen752, 0xcb0bfa11 },
{ 0xacebad03, short_gen753, long_gen753, 0xcb0bfa11 },
{ 0xacebad03, short_gen754, long_gen754, 0xcb0bfa11 },
{ 0xacebad03, short_gen755, long_gen755, 0xcb0bfa11 },
{ 0xacebad03, short_gen756, long_gen756, 0xcb0bfa11 },
{ 0xacebad03, short_gen757, long_gen757, 0xcb0bfa11 },
{ 0xacebad03, short_gen758, long_gen758, 0xcb0bfa11 },
{ 0xacebad03, short_gen759, long_gen759, 0xcb0bfa11 },
{ 0xacebad03, short_gen760, long_gen760, 0xcb0bfa11 },
{ 0xacebad03, short_gen761, long_gen761, 0xcb0bfa11 },
{ 0xacebad03, short_gen762, long_gen762, 0xcb0bfa11 },
{ 0xacebad03, short_gen763, long_gen763, 0xcb0bfa11 },
{ 0xacebad03, short_gen764, long_gen764, 0xcb0bfa11 },
{ 0xacebad03, short_gen765, long_gen765, 0xcb0bfa11 },
{ 0xacebad03, short_gen766, long_gen766, 0xcb0bfa11 },
{ 0xacebad03, short_gen767, long_gen767, 0xcb0bfa11 },
{ 0xacebad03, short_gen768, long_gen768, 0xcb0bfa11 },
{ 0xacebad03, short_gen769, long_gen769, 0xcb0bfa11 },
{ 0xacebad03, short_gen770, long_gen770, 0xcb0bfa11 },
{ 0xacebad03, short_gen771, long_gen771, 0xcb0bfa11 },
{ 0xacebad03, short_gen772, long_gen772, 0xcb0bfa11 },
{ 0xacebad03, short_gen773, long_gen773, 0xcb0bfa11 },
{ 0xacebad03, short_gen774, long_gen774, 0xcb0bfa11 },
{ 0xacebad03, short_gen775, long_gen775, 0xcb0bfa11 },
{ 0xacebad03, short_gen776, long_gen776, 0xcb0bfa11 },
{ 0xacebad03, short_gen777, long_gen777, 0xcb0bfa11 },
{ 0xacebad03, short_gen778, long_gen778, 0xcb0bfa11 },
{ 0xacebad03, short_gen779, long_gen779, 0xcb0bfa11 },
{ 0xacebad03, short_gen780, long_gen780, 0xcb0bfa11 },
{ 0xacebad03, short_gen781, long_gen781, 0xcb0bfa11 },
{ 0xacebad03, short_gen782, long_gen782, 0xcb0bfa11 },
{ 0xacebad03, short_gen783, long_gen783, 0xcb0bfa11 },
{ 0xacebad03, short_gen784, long_gen784, 0xcb0bfa11 },
{ 0xacebad03, short_gen785, long_gen785, 0xcb0bfa11 },
{ 0xacebad03, short_gen786, long_gen786, 0xcb0bfa11 },
{ 0xacebad03, short_gen787, long_gen787, 0xcb0bfa11 },
{ 0xacebad03, short_gen788, long_gen788, 0xcb0bfa11 },
{ 0xacebad03, short_gen789, long_gen789, 0xcb0bfa11 },
{ 0xacebad03, short_gen790, long_gen790, 0xcb0bfa11 },
{ 0xacebad03, short_gen791, long_gen791, 0xcb0bfa11 },
{ 0xacebad03, short_gen792, long_gen792, 0xcb0bfa11 },
{ 0xacebad03, short_gen793, long_gen793, 0xcb0bfa11 },
{ 0xacebad03, short_gen794, long_gen794, 0xcb0bfa11 },
{ 0xacebad03, short_gen795, long_gen795, 0xcb0bfa11 },
{ 0xacebad03, short_gen796, long_gen796, 0xcb0bfa11 },
{ 0xacebad03, short_gen797, long_gen797, 0xcb0bfa11 },
{ 0xacebad03, short_gen798, long_gen798, 0xcb0bfa11 },
{ 0xacebad03, short_gen799, long_gen799, 0xcb0bfa11 },
{ 0xacebad03, short_gen800, long_gen800, 0xcb0bfa11 },
{ 0xacebad03, short_gen801, long_gen801, 0xcb0bfa11 },
{ 0xacebad03, short_gen802, long_gen802, 0xcb0bfa11 },
{ 0xacebad03, short_gen803, long_gen803, 0xcb0bfa11 },
{ 0xacebad03, short_gen804, long_gen804, 0xcb0bfa11 },
{ 0xacebad03, short_gen805, long_gen805, 0xcb0bfa11 },
{ 0xacebad03, short_gen806, long_gen806, 0xcb0bfa11 },
{ 0xacebad03, short_gen807, long_gen807, 0xcb0bfa11 },
{ 0xacebad03, short_gen808, long_gen808, 0xcb0bfa11 },
{ 0xacebad03, short_gen809, long_gen809, 0xcb0bfa11 },
{ 0xacebad03, short_gen810, long_gen810, 0xcb0bfa11 },
{ 0xacebad03, short_gen811, long_gen811, 0xcb0bfa11 },
{ 0xacebad03, short_gen812, long_gen812, 0xcb0bfa11 },
{ 0xacebad03, short_gen813, long_gen813, 0xcb0bfa11 },
{ 0xacebad03, short_gen814, long_gen814, 0xcb0bfa11 },
{ 0xacebad03, short_gen815, long_gen815, 0xcb0bfa11 },
{ 0xacebad03, short_gen816, long_gen816, 0xcb0bfa11 },
{ 0xacebad03, short_gen817, long_gen817, 0xcb0bfa11 },
{ 0xacebad03, short_gen818, long_gen818, 0xcb0bfa11 },
{ 0xacebad03, short_gen819, long_gen819, 0xcb0bfa11 },
{ 0xacebad03, short_gen820, long_gen820, 0xcb0bfa11 },
{ 0xacebad03, short_gen821, long_gen821, 0xcb0bfa11 },
{ 0xacebad03, short_gen822, long_gen822, 0xcb0bfa11 },
{ 0xacebad03, short_gen823, long_gen823, 0xcb0bfa11 },
{ 0xacebad03, short_gen824, long_gen824, 0xcb0bfa11 },
{ 0xacebad03, short_gen825, long_gen825, 0xcb0bfa11 },
{ 0xacebad03, short_gen826, long_gen826, 0xcb0bfa11 },
{ 0xacebad03, short_gen827, long_gen827, 0xcb0bfa11 },
{ 0xacebad03, short_gen828, long_gen828, 0xcb0bfa11 },
{ 0xacebad03, short_gen829, long_gen829, 0xcb0bfa11 },
{ 0xacebad03, short_gen830, long_gen830, 0xcb0bfa11 },
{ 0xacebad03, short_gen831, long_gen831, 0xcb0bfa11 },
{ 0xacebad03, short_gen832, long_gen832, 0xcb0bfa11 },
{ 0xacebad03, short_gen833, long_gen833, 0xcb0bfa11 },
{ 0xacebad03, short_gen834, long_gen834, 0xcb0bfa11 },
{ 0xacebad03, short_gen835, long_gen835, 0xcb0bfa11 },
{ 0xacebad03, short_gen836, long_gen836, 0xcb0bfa11 },
{ 0xacebad03, short_gen837, long_gen837, 0xcb0bfa11 },
{ 0xacebad03, short_gen838, long_gen838, 0xcb0bfa11 },
{ 0xacebad03, short_gen839, long_gen839, 0xcb0bfa11 },
{ 0xacebad03, short_gen840, long_gen840, 0xcb0bfa11 },
{ 0xacebad03, short_gen841, long_gen841, 0xcb0bfa11 },
{ 0xacebad03, short_gen842, long_gen842, 0xcb0bfa11 },
{ 0xacebad03, short_gen843, long_gen843, 0xcb0bfa11 },
{ 0xacebad03, short_gen844, long_gen844, 0xcb0bfa11 },
{ 0xacebad03, short_gen845, long_gen845, 0xcb0bfa11 },
{ 0xacebad03, short_gen846, long_gen846, 0xcb0bfa11 },
{ 0xacebad03, short_gen847, long_gen847, 0xcb0bfa11 },
{ 0xacebad03, short_gen848, long_gen848, 0xcb0bfa11 },
{ 0xacebad03, short_gen849, long_gen849, 0xcb0bfa11 },
{ 0xacebad03, short_gen850, long_gen850, 0xcb0bfa11 },
{ 0xacebad03, short_gen851, long_gen851, 0xcb0bfa11 },
{ 0xacebad03, short_gen852, long_gen852, 0xcb0bfa11 },
{ 0xacebad03, short_gen853, long_gen853, 0xcb0bfa11 },
{ 0xacebad03, short_gen854, long_gen854, 0xcb0bfa11 },
{ 0xacebad03, short_gen855, long_gen855, 0xcb0bfa11 },
{ 0xacebad03, short_gen856, long_gen856, 0xcb0bfa11 },
{ 0xacebad03, short_gen857, long_gen857, 0xcb0bfa11 },
{ 0xacebad03, short_gen858, long_gen858, 0xcb0bfa11 },
{ 0xacebad03, short_gen859, long_gen859, 0xcb0bfa11 },
{ 0xacebad03, short_gen860, long_gen860, 0xcb0bfa11 },
{ 0xacebad03, short_gen861, long_gen861, 0xcb0bfa11 },
{ 0xacebad03, short_gen862, long_gen862, 0xcb0bfa11 },
{ 0xacebad03, short_gen863, long_gen863, 0xcb0bfa11 },
{ 0xacebad03, short_gen864, long_gen864, 0xcb0bfa11 },
{ 0xacebad03, short_gen865, long_gen865, 0xcb0bfa11 },
{ 0xacebad03, short_gen866, long_gen866, 0xcb0bfa11 },
{ 0xacebad03, short_gen867, long_gen867, 0xcb0bfa11 },
{ 0xacebad03, short_gen868, long_gen868, 0xcb0bfa11 },
{ 0xacebad03, short_gen869, long_gen869, 0xcb0bfa11 },
{ 0xacebad03, short_gen870, long_gen870, 0xcb0bfa11 },
{ 0xacebad03, short_gen871, long_gen871, 0xcb0bfa11 },
{ 0xacebad03, short_gen872, long_gen872, 0xcb0bfa11 },
{ 0xacebad03, short_gen873, long_gen873, 0xcb0bfa11 },
{ 0xacebad03, short_gen874, long_gen874, 0xcb0bfa11 },
{ 0xacebad03, short_gen875, long_gen875, 0xcb0bfa11 },
{ 0xacebad03, short_gen876, long_gen876, 0xcb0bfa11 },
{ 0xacebad03, short_gen877, long_gen877, 0xcb0bfa11 },
{ 0xacebad03, short_gen878, long_gen878, 0xcb0bfa11 },
{ 0xacebad03, short_gen879, long_gen879, 0xcb0bfa11 },
{ 0xacebad03, short_gen880, long_gen880, 0xcb0bfa11 },
{ 0xacebad03, short_gen881, long_gen881, 0xcb0bfa11 },
{ 0xacebad03, short_gen882, long_gen882, 0xcb0bfa11 },
{ 0xacebad03, short_gen883, long_gen883, 0xcb0bfa11 },
{ 0xacebad03, short_gen884, long_gen884, 0xcb0bfa11 },
{ 0xacebad03, short_gen885, long_gen885, 0xcb0bfa11 },
{ 0xacebad03, short_gen886, long_gen886, 0xcb0bfa11 },
{ 0xacebad03, short_gen887, long_gen887, 0xcb0bfa11 },
{ 0xacebad03, short_gen888, long_gen888, 0xcb0bfa11 },
{ 0xacebad03, short_gen889, long_gen889, 0xcb0bfa11 },
{ 0xacebad03, short_gen890, long_gen890, 0xcb0bfa11 },
{ 0xacebad03, short_gen891, long_gen891, 0xcb0bfa11 },
{ 0xacebad03, short_gen892, long_gen892, 0xcb0bfa11 },
{ 0xacebad03, short_gen893, long_gen893, 0xcb0bfa11 },
{ 0xacebad03, short_gen894, long_gen894, 0xcb0bfa11 },
{ 0xacebad03, short_gen895, long_gen895, 0xcb0bfa11 },
{ 0xacebad03, short_gen896, long_gen896, 0xcb0bfa11 },
{ 0xacebad03, short_gen897, long_gen897, 0xcb0bfa11 },
{ 0xacebad03, short_gen898, long_gen898, 0xcb0bfa11 },
{ 0xacebad03, short_gen899, long_gen899, 0xcb0bfa11 },
{ 0xacebad03, short_gen900, long_gen900, 0xcb0bfa11 },
{ 0xacebad03, short_gen901, long_gen901, 0xcb0bfa11 },
{ 0xacebad03, short_gen902, long_gen902, 0xcb0bfa11 },
{ 0xacebad03, short_gen903, long_gen903, 0xcb0bfa11 },
{ 0xacebad03, short_gen904, long_gen904, 0xcb0bfa11 },
{ 0xacebad03, short_gen905, long_gen905, 0xcb0bfa11 },
{ 0xacebad03, short_gen906, long_gen906, 0xcb0bfa11 },
{ 0xacebad03, short_gen907, long_gen907, 0xcb0bfa11 },
{ 0xacebad03, short_gen908, long_gen908, 0xcb0bfa11 },
{ 0xacebad03, short_gen909, long_gen909, 0xcb0bfa11 },
{ 0xacebad03, short_gen910, long_gen910, 0xcb0bfa11 },
{ 0xacebad03, short_gen911, long_gen911, 0xcb0bfa11 },
{ 0xacebad03, short_gen912, long_gen912, 0xcb0bfa11 },
{ 0xacebad03, short_gen913, long_gen913, 0xcb0bfa11 },
{ 0xacebad03, short_gen914, long_gen914, 0xcb0bfa11 },
{ 0xacebad03, short_gen915, long_gen915, 0xcb0bfa11 },
{ 0xacebad03, short_gen916, long_gen916, 0xcb0bfa11 },
{ 0xacebad03, short_gen917, long_gen917, 0xcb0bfa11 },
{ 0xacebad03, short_gen918, long_gen918, 0xcb0bfa11 },
{ 0xacebad03, short_gen919, long_gen919, 0xcb0bfa11 },
{ 0xacebad03, short_gen920, long_gen920, 0xcb0bfa11 },
{ 0xacebad03, short_gen921, long_gen921, 0xcb0bfa11 },
{ 0xacebad03, short_gen922, long_gen922, 0xcb0bfa11 },
{ 0xacebad03, short_gen923, long_gen923, 0xcb0bfa11 },
{ 0xacebad03, short_gen924, long_gen924, 0xcb0bfa11 },
{ 0xacebad03, short_gen925, long_gen925, 0xcb0bfa11 },
{ 0xacebad03, short_gen926, long_gen926, 0xcb0bfa11 },
{ 0xacebad03, short_gen927, long_gen927, 0xcb0bfa11 },
{ 0xacebad03, short_gen928, long_gen928, 0xcb0bfa11 },
{ 0xacebad03, short_gen929, long_gen929, 0xcb0bfa11 },
{ 0xacebad03, short_gen930, long_gen930, 0xcb0bfa11 },
{ 0xacebad03, short_gen931, long_gen931, 0xcb0bfa11 },
{ 0xacebad03, short_gen932, long_gen932, 0xcb0bfa11 },
{ 0xacebad03, short_gen933, long_gen933, 0xcb0bfa11 },
{ 0xacebad03, short_gen934, long_gen934, 0xcb0bfa11 },
{ 0xacebad03, short_gen935, long_gen935, 0xcb0bfa11 },
{ 0xacebad03, short_gen936, long_gen936, 0xcb0bfa11 },
{ 0xacebad03, short_gen937, long_gen937, 0xcb0bfa11 },
{ 0xacebad03, short_gen938, long_gen938, 0xcb0bfa11 },
{ 0xacebad03, short_gen939, long_gen939, 0xcb0bfa11 },
{ 0xacebad03, short_gen940, long_gen940, 0xcb0bfa11 },
{ 0xacebad03, short_gen941, long_gen941, 0xcb0bfa11 },
{ 0xacebad03, short_gen942, long_gen942, 0xcb0bfa11 },
{ 0xacebad03, short_gen943, long_gen943, 0xcb0bfa11 },
{ 0xacebad03, short_gen944, long_gen944, 0xcb0bfa11 },
{ 0xacebad03, short_gen945, long_gen945, 0xcb0bfa11 },
{ 0xacebad03, short_gen946, long_gen946, 0xcb0bfa11 },
{ 0xacebad03, short_gen947, long_gen947, 0xcb0bfa11 },
{ 0xacebad03, short_gen948, long_gen948, 0xcb0bfa11 },
{ 0xacebad03, short_gen949, long_gen949, 0xcb0bfa11 },
{ 0xacebad03, short_gen950, long_gen950, 0xcb0bfa11 },
{ 0xacebad03, short_gen951, long_gen951, 0xcb0bfa11 },
{ 0xacebad03, short_gen952, long_gen952, 0xcb0bfa11 },
{ 0xacebad03, short_gen953, long_gen953, 0xcb0bfa11 },
{ 0xacebad03, short_gen954, long_gen954, 0xcb0bfa11 },
{ 0xacebad03, short_gen955, long_gen955, 0xcb0bfa11 },
{ 0xacebad03, short_gen956, long_gen956, 0xcb0bfa11 },
{ 0xacebad03, short_gen957, long_gen957, 0xcb0bfa11 },
{ 0xacebad03, short_gen958, long_gen958, 0xcb0bfa11 },
{ 0xacebad03, short_gen959, long_gen959, 0xcb0bfa11 },
{ 0xacebad03, short_gen960, long_gen960, 0xcb0bfa11 },
{ 0xacebad03, short_gen961, long_gen961, 0xcb0bfa11 },
{ 0xacebad03, short_gen962, long_gen962, 0xcb0bfa11 },
{ 0xacebad03, short_gen963, long_gen963, 0xcb0bfa11 },
{ 0xacebad03, short_gen964, long_gen964, 0xcb0bfa11 },
{ 0xacebad03, short_gen965, long_gen965, 0xcb0bfa11 },
{ 0xacebad03, short_gen966, long_gen966, 0xcb0bfa11 },
{ 0xacebad03, short_gen967, long_gen967, 0xcb0bfa11 },
{ 0xacebad03, short_gen968, long_gen968, 0xcb0bfa11 },
{ 0xacebad03, short_gen969, long_gen969, 0xcb0bfa11 },
{ 0xacebad03, short_gen970, long_gen970, 0xcb0bfa11 },
{ 0xacebad03, short_gen971, long_gen971, 0xcb0bfa11 },
{ 0xacebad03, short_gen972, long_gen972, 0xcb0bfa11 },
{ 0xacebad03, short_gen973, long_gen973, 0xcb0bfa11 },
{ 0xacebad03, short_gen974, long_gen974, 0xcb0bfa11 },
{ 0xacebad03, short_gen975, long_gen975, 0xcb0bfa11 },
{ 0xacebad03, short_gen976, long_gen976, 0xcb0bfa11 },
{ 0xacebad03, short_gen977, long_gen977, 0xcb0bfa11 },
{ 0xacebad03, short_gen978, long_gen978, 0xcb0bfa11 },
{ 0xacebad03, short_gen979, long_gen979, 0xcb0bfa11 },
{ 0xacebad03, short_gen980, long_gen980, 0xcb0bfa11 },
{ 0xacebad03, short_gen981, long_gen981, 0xcb0bfa11 },
{ 0xacebad03, short_gen982, long_gen982, 0xcb0bfa11 },
{ 0xacebad03, short_gen983, long_gen983, 0xcb0bfa11 },
{ 0xacebad03, short_gen984, long_gen984, 0xcb0bfa11 },
{ 0xacebad03, short_gen985, long_gen985, 0xcb0bfa11 },
{ 0xacebad03, short_gen986, long_gen986, 0xcb0bfa11 },
{ 0xacebad03, short_gen987, long_gen987, 0xcb0bfa11 },
{ 0xacebad03, short_gen988, long_gen988, 0xcb0bfa11 },
{ 0xacebad03, short_gen989, long_gen989, 0xcb0bfa11 },
{ 0xacebad03, short_gen990, long_gen990, 0xcb0bfa11 },
{ 0xacebad03, short_gen991, long_gen991, 0xcb0bfa11 },
{ 0xacebad03, short_gen992, long_gen992, 0xcb0bfa11 },
{ 0xacebad03, short_gen993, long_gen993, 0xcb0bfa11 },
{ 0xacebad03, short_gen994, long_gen994, 0xcb0bfa11 },
{ 0xacebad03, short_gen995, long_gen995, 0xcb0bfa11 },
{ 0xacebad03, short_gen996, long_gen996, 0xcb0bfa11 },
{ 0xacebad03, short_gen997, long_gen997, 0xcb0bfa11 },
{ 0xacebad03, short_gen998, long_gen998, 0xcb0bfa11 },
{ 0xacebad03, short_gen999, long_gen999, 0xcb0bfa11 },
{ 0xacebad03, short_gen1000, long_gen1000, 0xcb0bfa11 },
{ 0xacebad03, short_gen1001, long_gen1001, 0xcb0bfa11 },
{ 0xacebad03, short_gen1002, long_gen1002, 0xcb0bfa11 },
{ 0xacebad03, short_gen1003, long_gen1003, 0xcb0bfa11 },
{ 0xacebad03, short_gen1004, long_gen1004, 0xcb0bfa11 },
{ 0xacebad03, short_gen1005, long_gen1005, 0xcb0bfa11 },
{ 0xacebad03, short_gen1006, long_gen1006, 0xcb0bfa11 },
{ 0xacebad03, short_gen1007, long_gen1007, 0xcb0bfa11 },
{ 0xacebad03, short_gen1008, long_gen1008, 0xcb0bfa11 },
{ 0xacebad03, short_gen1009, long_gen1009, 0xcb0bfa11 },
{ 0xacebad03, short_gen1010, long_gen1010, 0xcb0bfa11 },
{ 0xacebad03, short_gen1011, long_gen1011, 0xcb0bfa11 },
{ 0xacebad03, short_gen1012, long_gen1012, 0xcb0bfa11 },
{ 0xacebad03, short_gen1013, long_gen1013, 0xcb0bfa11 },
{ 0xacebad03, short_gen1014, long_gen1014, 0xcb0bfa11 },
{ 0xacebad03, short_gen1015, long_gen1015, 0xcb0bfa11 },
{ 0xacebad03, short_gen1016, long_gen1016, 0xcb0bfa11 },
{ 0xacebad03, short_gen1017, long_gen1017, 0xcb0bfa11 },
{ 0xacebad03, short_gen1018, long_gen1018, 0xcb0bfa11 },
{ 0xacebad03, short_gen1019, long_gen1019, 0xcb0bfa11 },
{ 0xacebad03, short_gen1020, long_gen1020, 0xcb0bfa11 },
{ 0xacebad03, short_gen1021, long_gen1021, 0xcb0bfa11 },
{ 0xacebad03, short_gen1022, long_gen1022, 0xcb0bfa11 },
{ 0xacebad03, short_gen1023, long_gen1023, 0xcb0bfa11 },
{ 0xacebad03, short_gen1024, long_gen1024, 0xcb0bfa11 },
{ 0xacebad03, short_gen1025, long_gen1025, 0xcb0bfa11 },
{ 0xacebad03, short_gen1026, long_gen1026, 0xcb0bfa11 },
{ 0xacebad03, short_gen1027, long_gen1027, 0xcb0bfa11 },
{ 0xacebad03, short_gen1028, long_gen1028, 0xcb0bfa11 },
{ 0xacebad03, short_gen1029, long_gen1029, 0xcb0bfa11 }
};
#endif

#if MPICH_ERROR_MSG_LEVEL > MPICH_ERROR_MSG_GENERIC
static const char short_spc0[] = "**CreateFileMapping %d";
static const char long_spc0[]  = "CreateFileMapping failed, error %d";
static const char short_spc1[] = "**CreateThread %d";
static const char long_spc1[]  = "CreateThread failed, error %d";
static const char short_spc2[] = "**FindWindowEx %d";
static const char long_spc2[]  = "FindWindowEx failed, error %d";
static const char short_spc3[] = "**MPIDI_CH3I_SHM_Attach_to_mem %d";
static const char long_spc3[]  = "MPIDI_CH3I_SHM_Attach_to_mem failed, error %d";
static const char short_spc4[] = "**MapViewOfFileEx %d";
static const char long_spc4[]  = "MapViewOfFileEx failed, error %d";
static const char short_spc5[] = "**OpenProcess %d %d";
static const char long_spc5[]  = "OpenProcess failed for process %d, error %d";
static const char short_spc6[] = "**abi_version_mismatch %D %D";
static const char long_spc6[]  = "ABI version mismatch, expected %D - got %D";
static const char short_spc7[] = "**activeports %d";
static const char long_spc7[]  = "Insufficient ports in active state, need %d.";
static const char short_spc8[] = "**alloc_shar_mem %s %s";
static const char long_spc8[]  = "unable to allocate shared memory - %s %s";
static const char short_spc9[] = "**arg %s";
static const char long_spc9[]  = "Invalid argument %s";
static const char short_spc10[] = "**argarrayneg %s %d %d";
static const char long_spc10[]  = "Negative value in array %s[%d] (value is %d)";
static const char short_spc11[] = "**argerrcode %d";
static const char long_spc11[]  = "Invalid error code %d";
static const char short_spc12[] = "**argneg %s %d";
static const char long_spc12[]  = "Invalid value for %s, must be non-negative but is %d";
static const char short_spc13[] = "**argnonpos %s %d";
static const char long_spc13[]  = "Invalid value for %s; must be positive but is %d";
static const char short_spc14[] = "**argpackbuf %d %d";
static const char long_spc14[]  = "Size of data to pack (%d bytes) is larger than remaining space in pack buffer (%d bytes)";
static const char short_spc15[] = "**argposneg %d";
static const char long_spc15[]  = "Value of position is %d but must be nonnegative";
static const char short_spc16[] = "**argrange %s %d %d";
static const char long_spc16[]  = "Argument %s has value %d but must be within [0,%d]";
static const char short_spc17[] = "**attach_shar_mem %s %s";
static const char long_spc17[]  = "unable to attach to shared memory - %s %s";
static const char short_spc18[] = "**attach_to_mem %d";
static const char long_spc18[]  = "attach to shared memory returned error %d";
static const char short_spc19[] = "**badcase %d";
static const char long_spc19[]  = "INTERNAL ERROR: unexpected value in case statement (value=%d)";
static const char short_spc20[] = "**bind %s %d";
static const char long_spc20[]  = " Unable to bind socket to address, %s (errno %d)";
static const char short_spc21[] = "**bindportrange %d %d";
static const char long_spc21[]  = " Unable to bind socket to port range [%d, %d]";
static const char short_spc22[] = "**bootqmsg %d";
static const char long_spc22[]  = "invalid bootstrap queue message size (%d bytes)";
static const char short_spc23[] = "**bsendbufsmall %d %d";
static const char long_spc23[]  = "Buffer size of %d is smaller than MPI_BSEND_OVERHEAD (%d)";
static const char short_spc24[] = "**bufbsend %d %d";
static const char long_spc24[]  = "Insufficient space in Bsend buffer; requested %d; total buffer size is %d";
static const char short_spc25[] = "**business_card %s";
static const char long_spc25[]  = "Invalid business card (%s)";
static const char short_spc26[] = "**cartcoordinvalid %d %d %d";
static const char long_spc26[]  = "Cartesian coordinate for the %d coordinate is %d but must be between 0 and %d";
static const char short_spc27[] = "**cartdim %d %d";
static const char long_spc27[]  = "Size of the communicator (%d) is smaller than the size of the Cartesian topology (%d)";
static const char short_spc28[] = "**ch3|badmsgtype %d";
static const char long_spc28[]  = "request contained an invalid message type (%d)";
static const char short_spc29[] = "**ch3|badreqtype %d";
static const char long_spc29[]  = "request contained an invalid request type (%d)";
static const char short_spc30[] = "**ch3|conn_parent %s";
static const char long_spc30[]  = "spawned process group was unable to connect back to the parent on port <%s>";
static const char short_spc31[] = "**ch3|pmi_finalize %d";
static const char long_spc31[]  = "PMI_Finalize failed, error %d";
static const char short_spc32[] = "**ch3|postrecv %s";
static const char long_spc32[]  = "failure occurred while posting a receive for message data (%s)";
static const char short_spc33[] = "**ch3|sock|badhost %s %d %s";
static const char long_spc33[]  = "[ch3:sock] invalid host description, %s:%d (%s)";
static const char short_spc34[] = "**ch3|sock|badpacket %d";
static const char long_spc34[]  = "[ch3:sock] received packet of unknown type (%d)";
static const char short_spc35[] = "**ch3|sock|connrefused %s %d %s";
static const char long_spc35[]  = "[ch3:sock] failed to connect to process %s:%d (%s)";
static const char short_spc36[] = "**ch3|sock|failure %d";
static const char long_spc36[]  = "[ch3:sock] unknown failure, sock_errno=%d";
static const char short_spc37[] = "**ch3|sock|postconnect %d %d %s";
static const char long_spc37[]  = "[ch3:sock] rank %d unable to connect to rank %d using business card <%s>";
static const char short_spc38[] = "**ch3|sock|writefailed %d";
static const char long_spc38[]  = "Write to socket failed with code %d";
static const char short_spc39[] = "**ch3|unhandled_connection_state %p %d";
static const char long_spc39[]  = "encountered an unexpected connection state (vc=%p, state=%d)";
static const char short_spc40[] = "**close %s";
static const char long_spc40[]  = "close of socket failed - %s";
static const char short_spc41[] = "**closesocket %s %d";
static const char long_spc41[]  = "closesocket failed, %s (errno %d)";
static const char short_spc42[] = "**commperm %s";
static const char long_spc42[]  = "Cannot free permanent communicator %s";
static const char short_spc43[] = "**countneg %d";
static const char long_spc43[]  = "Negative count, value is %d";
static const char short_spc44[] = "**darrayblock %d";
static const char long_spc44[]  = "Value of m in block(m) distribution is %d must must be positive";
static const char short_spc45[] = "**darrayblock2 %d %d";
static const char long_spc45[]  = "m * nprocs is %d but must equal the array size %d and is not valid for block(m) distribution";
static const char short_spc46[] = "**darraycyclic %d";
static const char long_spc46[]  = "Value of m is %d but must be positive for a cyclic(m) distribution";
static const char short_spc47[] = "**darraydist %d %d";
static const char long_spc47[]  = "For MPI_DISTRIBUTE_NONE, the value of array_of_psizes[%d] is %d but must have value 1";
static const char short_spc48[] = "**darrayoverflow %L";
static const char long_spc48[]  = "Total size of array_of_gsizes[] is %L which requires the MPI implementation to use a 64-bit MPI_Aint";
static const char short_spc49[] = "**datarepused %s";
static const char long_spc49[]  = "The requested datarep name %s has already been specified to MPI_REGISTER_DATAREP";
static const char short_spc50[] = "**decode_buffer %d";
static const char long_spc50[]  = "decode_buffer failed (%d)";
static const char short_spc51[] = "**detach_shar_mem %s %s";
static const char long_spc51[]  = "unable to detach shared memory - %s %s";
static const char short_spc52[] = "**dev|pg_not_found %p";
static const char long_spc52[]  = "the specified process group object could not be located (pg=%p)";
static const char short_spc53[] = "**dev|vcrt_create %s";
static const char long_spc53[]  = "failed to create VCRT for %s";
static const char short_spc54[] = "**dev|vcrt_get_ptr %s";
static const char long_spc54[]  = "failed to get a pointer to VCR table for %s";
static const char short_spc55[] = "**dims %d";
static const char long_spc55[]  = "Invalid dimension argument (value is %d)";
static const char short_spc56[] = "**dimsmany %d %d";
static const char long_spc56[]  = "Number of dimensions %d is too large (maximum is %d)";
static const char short_spc57[] = "**dllversionmismatch %s %s";
static const char long_spc57[]  = " The verison of the channel DLL Library is %s but the executable requires version %s";
static const char short_spc58[] = "**dtypenull %s";
static const char long_spc58[]  = "Datatype for argument %s is a null datatype";
static const char short_spc59[] = "**duphandle %s %d";
static const char long_spc59[]  = "unable to duplicate a handle, %s (errno %d)";
static const char short_spc60[] = "**dupprocesses %d";
static const char long_spc60[]  = "Local and remote groups in MPI_Intercomm_create must not contain the same processes; both contain process %d";
static const char short_spc61[] = "**edgeoutrange %d %d %d";
static const char long_spc61[]  = "Edge index edges[%d] is %d but must be nonnegative and less than %d";
static const char short_spc62[] = "**encode_buffer %d";
static const char long_spc62[]  = "decode_buffer failed (%d)";
static const char short_spc63[] = "**f90typecomplexnone %d %d";
static const char long_spc63[]  = " No complex type with both %d digits of precision and an exponent range of %d is available";
static const char short_spc64[] = "**f90typeintnone %d";
static const char long_spc64[]  = " No integer type with %d digits of range is avaiable";
static const char short_spc65[] = "**f90typerealnone %d %d";
static const char long_spc65[]  = " No real type with both %d digits of precision and an exponent range of %d is available";
static const char short_spc66[] = "**fail %d";
static const char long_spc66[]  = "generic failure with errno = %d";
static const char short_spc67[] = "**fail %s";
static const char long_spc67[]  = "%s";
static const char short_spc68[] = "**fail %s %d";
static const char long_spc68[]  = "%s (errno %d)";
static const char short_spc69[] = "**fdopen %s";
static const char long_spc69[]  = "fdopen failed %s";
static const char short_spc70[] = "**fileaccess %s";
static const char long_spc70[]  = "Access denied to file %s";
static const char short_spc71[] = "**filename %s";
static const char long_spc71[]  = "Invalid file name %s";
static const char short_spc72[] = "**filenamedir %s";
static const char long_spc72[]  = "Invalid or missing directory %s";
static const char short_spc73[] = "**filenamelong %s %d";
static const char long_spc73[]  = "Pathname %s too long (%d characters)";
static const char short_spc74[] = "**filenoexist %s";
static const char long_spc74[]  = "File %s does not exist";
static const char short_spc75[] = "**flag %d";
static const char long_spc75[]  = "invalid flag parameter (flag = %d)";
static const char short_spc76[] = "**fopen %s";
static const char long_spc76[]  = "fopen failed %s";
static const char short_spc77[] = "**ftok %s %d %d";
static const char long_spc77[]  = "failed to create a sysv key from the file '%s' and id %d, error %d";
static const char short_spc78[] = "**ftruncate %s %d %d";
static const char long_spc78[]  = "unable to resize the shared memory object %s to size %d (errno %d)";
static const char short_spc79[] = "**gethostbyname %s %d";
static const char long_spc79[]  = "gethostbyname failed, %s (errno %d)";
static const char short_spc80[] = "**getinfo %s %d";
static const char long_spc80[]  = "getinfo failed, %s (errno %d)";
static const char short_spc81[] = "**getsockname %s";
static const char long_spc81[]  = "getsockname failed - %s";
static const char short_spc82[] = "**getsockopt %s %d";
static const char long_spc82[]  = "getsockopt failed, %s (errno %d)";
static const char short_spc83[] = "**globus|badreqtype %d";
static const char long_spc83[]  = "globus|badreqtype -- %d";
static const char short_spc84[] = "**globus|bc_add_contact %s";
static const char long_spc84[]  = "globus|bc_add_contact -- %s";
static const char short_spc85[] = "**globus|bc_contact_not_found %s";
static const char long_spc85[]  = "the requested information, %s, was not found in the business card";
static const char short_spc86[] = "**globus|bc_get_contact %s";
static const char long_spc86[]  = "globus|bc_get_contact -- %s";
static const char short_spc87[] = "**globus|cancel_completed_sreq %R %p";
static const char long_spc87[]  = "globus|cancel_completed_sreq -- %R %p";
static const char short_spc88[] = "**globus|cm_pe_test %s";
static const char long_spc88[]  = "globus|cm_pe_test -- %s";
static const char short_spc89[] = "**globus|cm_pe_wait %s";
static const char long_spc89[]  = "globus|cm_pe_wait -- %s";
static const char short_spc90[] = "**globus|cm_vmpi|cancel_ras %R";
static const char long_spc90[]  = "globus|cm_vmpi|cancel_ras -- %R";
static const char short_spc91[] = "**globus|cm_vmpi|dt_resize_bounds %D";
static const char long_spc91[]  = "globus|cm_vmpi|dt_resize_bounds -- %D";
static const char short_spc92[] = "**globus|cm_vmpi|localcomm %C %p";
static const char long_spc92[]  = "globus|cm_vmpi|localcomm -- %C %p";
static const char short_spc93[] = "**globus|cm_vmpi|pe_table_add_req %R %p";
static const char long_spc93[]  = "globus|cm_vmpi|pe_table_add_req -- %R %p";
static const char short_spc94[] = "**globus|cm_xio_port_find_and_lock %s";
static const char long_spc94[]  = "globus|cm_xio_port_find_and_lock -- %s";
static const char short_spc95[] = "**globus|cm_xio|client_connect_port %s";
static const char long_spc95[]  = "globus|cm_xio|client_connect_port -- %s";
static const char short_spc96[] = "**globus|cm_xio|client_connect_proc %p";
static const char long_spc96[]  = "globus|cm_xio|client_connect_proc -- %p";
static const char short_spc97[] = "**globus|cm_xio|client_handle_create %p %s";
static const char long_spc97[]  = "globus|cm_xio|client_handle_create -- %p %s";
static const char short_spc98[] = "**globus|cm_xio|client_handle_create %s";
static const char long_spc98[]  = "attempt to create an XIO handle failed: %s";
static const char short_spc99[] = "**globus|cm_xio|client_handle_open %p %s %d %s";
static const char long_spc99[]  = "globus|cm_xio|client_handle_open -- %p %s %d %s";
static const char short_spc100[] = "**globus|cm_xio|client_handle_port_closing %p %s %s";
static const char long_spc100[]  = "globus|cm_xio|client_handle_port_closing -- %p %s %s";
static const char short_spc101[] = "**globus|cm_xio|client_handle_port_enq_failed %p %s %s";
static const char long_spc101[]  = "globus|cm_xio|client_handle_port_enq_failed -- %p %s %s";
static const char short_spc102[] = "**globus|cm_xio|client_handle_port_not_found %p %s %s";
static const char long_spc102[]  = "globus|cm_xio|client_handle_port_not_found -- %p %s %s";
static const char short_spc103[] = "**globus|cm_xio|client_handle_port_unexp_resp %p %s %s %d %s";
static const char long_spc103[]  = "globus|cm_xio|client_handle_port_unexp_resp -- %p %s %s %d %s";
static const char short_spc104[] = "**globus|cm_xio|client_handle_recv_magic %p %s %d %s";
static const char long_spc104[]  = "globus|cm_xio|client_handle_recv_magic -- %p %s %d %s";
static const char short_spc105[] = "**globus|cm_xio|client_handle_recv_open_port_resp %p %s %s %s";
static const char long_spc105[]  = "globus|cm_xio|client_handle_recv_open_port_resp -- %p %s %s %s";
static const char short_spc106[] = "**globus|cm_xio|client_handle_recv_open_proc_resp %p %s %d %s";
static const char long_spc106[]  = "globus|cm_xio|client_handle_recv_open_proc_resp -- %p %s %d %s";
static const char short_spc107[] = "**globus|cm_xio|client_handle_send_magic %p %s %d %s";
static const char long_spc107[]  = "globus|cm_xio|client_handle_send_magic -- %p %s %d %s";
static const char short_spc108[] = "**globus|cm_xio|client_handle_send_open_port_req %p %s %s %s";
static const char long_spc108[]  = "globus|cm_xio|client_handle_send_open_port_req -- %p %s %s %s";
static const char short_spc109[] = "**globus|cm_xio|client_handle_send_open_port_resp_ack %p %s %s";
static const char long_spc109[]  = "globus|cm_xio|client_handle_send_open_port_resp_ack -- %p %s %s";
static const char short_spc110[] = "**globus|cm_xio|client_handle_send_open_proc_req %p %s %d %s";
static const char long_spc110[]  = "globus|cm_xio|client_handle_send_open_proc_req -- %p %s %d %s";
static const char short_spc111[] = "**globus|cm_xio|client_magic_mismatch %p %s %d";
static const char long_spc111[]  = "globus|cm_xio|client_magic_mismatch -- %p %s %d";
static const char short_spc112[] = "**globus|cm_xio|client_port_vc_failed %s";
static const char long_spc112[]  = "globus|cm_xio|client_port_vc_failed -- %s";
static const char short_spc113[] = "**globus|cm_xio|client_reg_recv_magic %p";
static const char long_spc113[]  = "globus|cm_xio|client_reg_recv_magic -- %p";
static const char short_spc114[] = "**globus|cm_xio|client_reg_recv_open_port_resp %p %s %s";
static const char long_spc114[]  = "globus|cm_xio|client_reg_recv_open_port_resp -- %p %s %s";
static const char short_spc115[] = "**globus|cm_xio|client_reg_recv_open_proc_resp %p %s %d";
static const char long_spc115[]  = "globus|cm_xio|client_reg_recv_open_proc_resp -- %p %s %d";
static const char short_spc116[] = "**globus|cm_xio|client_reg_recv_open_resp %p";
static const char long_spc116[]  = "globus|cm_xio|client_reg_recv_open_resp -- %p";
static const char short_spc117[] = "**globus|cm_xio|client_reg_send_magic %p";
static const char long_spc117[]  = "globus|cm_xio|client_reg_send_magic -- %p";
static const char short_spc118[] = "**globus|cm_xio|client_reg_send_open_port_req %p %s %s";
static const char long_spc118[]  = "globus|cm_xio|client_reg_send_open_port_req -- %p %s %s";
static const char short_spc119[] = "**globus|cm_xio|client_reg_send_open_port_resp_ack %p %s";
static const char long_spc119[]  = "globus|cm_xio|client_reg_send_open_port_resp_ack -- %p %s";
static const char short_spc120[] = "**globus|cm_xio|client_reg_send_open_proc_req %p %s %d";
static const char long_spc120[]  = "globus|cm_xio|client_reg_send_open_proc_req -- %p %s %d";
static const char short_spc121[] = "**globus|cm_xio|disconnect_close_temp %p";
static const char long_spc121[]  = "globus|cm_xio|disconnect_close_temp -- %p";
static const char short_spc122[] = "**globus|cm_xio|disconnect_handle_send_close_msg %p %s";
static const char long_spc122[]  = "globus|cm_xio|disconnect_handle_send_close_msg -- %p %s";
static const char short_spc123[] = "**globus|cm_xio|disconnect_send_enq_close_msg %p";
static const char long_spc123[]  = "globus|cm_xio|disconnect_send_enq_close_msg -- %p";
static const char short_spc124[] = "**globus|cm_xio|disconnnect_handle_close_proc %p %s";
static const char long_spc124[]  = "globus|cm_xio|disconnnect_handle_close_proc -- %p %s";
static const char short_spc125[] = "**globus|cm_xio|nets_init %p %s";
static const char long_spc125[]  = "globus|cm_xio|nets_init -- %p %s";
static const char short_spc126[] = "**globus|cm_xio|port_dequeue_vc %s";
static const char long_spc126[]  = "globus|cm_xio|port_dequeue_vc -- %s";
static const char short_spc127[] = "**globus|cm_xio|port_name_too_long %d %d";
static const char long_spc127[]  = "globus|cm_xio|port_name_too_long -- %d %d";
static const char short_spc128[] = "**globus|cm_xio|recv_handle_incoming_msg %s";
static const char long_spc128[]  = "globus|cm_xio|recv_handle_incoming_msg -- %s";
static const char short_spc129[] = "**globus|cm_xio|recv_handle_read_msg_data %s";
static const char long_spc129[]  = "globus|cm_xio|recv_handle_read_msg_data -- %s";
static const char short_spc130[] = "**globus|cm_xio|recv_next_msg %p";
static const char long_spc130[]  = "globus|cm_xio|recv_next_msg -- %p";
static const char short_spc131[] = "**globus|cm_xio|req_recv_state %s";
static const char long_spc131[]  = "globus|cm_xio|req_recv_state -- %s";
static const char short_spc132[] = "**globus|cm_xio|send_enq_sreq %p";
static const char long_spc132[]  = "globus|cm_xio|send_enq_sreq -- %p";
static const char short_spc133[] = "**globus|cm_xio|send_handle_write_contro_msg %s";
static const char long_spc133[]  = "globus|cm_xio|send_handle_write_contro_msg -- %s";
static const char short_spc134[] = "**globus|cm_xio|send_handle_write_msg_data %s";
static const char long_spc134[]  = "globus|cm_xio|send_handle_write_msg_data -- %s";
static const char short_spc135[] = "**globus|cm_xio|send_next_sreq %p";
static const char long_spc135[]  = "globus|cm_xio|send_next_sreq -- %p";
static const char short_spc136[] = "**globus|cm_xio|send_open_port_req %p";
static const char long_spc136[]  = "globus|cm_xio|send_open_port_req -- %p";
static const char short_spc137[] = "**globus|cm_xio|send_open_proc_req %p";
static const char long_spc137[]  = "globus|cm_xio|send_open_proc_req -- %p";
static const char short_spc138[] = "**globus|cm_xio|server_create %s";
static const char long_spc138[]  = "globus|cm_xio|server_create -- %s";
static const char short_spc139[] = "**globus|cm_xio|server_get_cs %s";
static const char long_spc139[]  = "globus|cm_xio|server_get_cs -- %s";
static const char short_spc140[] = "**globus|cm_xio|server_handle_connection %s";
static const char long_spc140[]  = "globus|cm_xio|server_handle_connection -- %s";
static const char short_spc141[] = "**globus|cm_xio|server_handle_connection %s %s";
static const char long_spc141[]  = "globus|cm_xio|server_handle_connection -- %s %s";
static const char short_spc142[] = "**globus|cm_xio|server_handle_recv_open_port_req %p";
static const char long_spc142[]  = "globus|cm_xio|server_handle_recv_open_port_req -- %p";
static const char short_spc143[] = "**globus|cm_xio|server_handle_recv_open_proc_req %p";
static const char long_spc143[]  = "globus|cm_xio|server_handle_recv_open_proc_req -- %p";
static const char short_spc144[] = "**globus|cm_xio|server_listen %p";
static const char long_spc144[]  = "globus|cm_xio|server_listen -- %p";
static const char short_spc145[] = "**globus|cm_xio|server_listen %s %p";
static const char long_spc145[]  = "globus|cm_xio|server_listen -- %s %p";
static const char short_spc146[] = "**globus|cm_xio|server_port_vc_failed %s";
static const char long_spc146[]  = "globus|cm_xio|server_port_vc_failed -- %s";
static const char short_spc147[] = "**globus|cm_xio|server_reg_recv_magic %p";
static const char long_spc147[]  = "globus|cm_xio|server_reg_recv_magic -- %p";
static const char short_spc148[] = "**globus|cm_xio|server_reg_recv_open_req %p";
static const char long_spc148[]  = "globus|cm_xio|server_reg_recv_open_req -- %p";
static const char short_spc149[] = "**globus|cm_xio|server_reg_send_magic %p";
static const char long_spc149[]  = "globus|cm_xio|server_reg_send_magic -- %p";
static const char short_spc150[] = "**globus|cm_xio|server_reg_send_open_proc_resp %p %s";
static const char long_spc150[]  = "globus|cm_xio|server_reg_send_open_proc_resp -- %p %s";
static const char short_spc151[] = "**globus|cm_xio|server_reg_send_open_resp %p %s";
static const char long_spc151[]  = "globus|cm_xio|server_reg_send_open_resp -- %p %s";
static const char short_spc152[] = "**globus|cm_xio|server_send_open_error_resp %p";
static const char long_spc152[]  = "globus|cm_xio|server_send_open_error_resp -- %p";
static const char short_spc153[] = "**globus|cm_xio|server_send_open_port_resp %s %p";
static const char long_spc153[]  = "globus|cm_xio|server_send_open_port_resp -- %s %p";
static const char short_spc154[] = "**globus|cm_xio|server_send_open_proc_resp_ack %p";
static const char long_spc154[]  = "globus|cm_xio|server_send_open_proc_resp_ack -- %p";
static const char short_spc155[] = "**globus|cm_xio|server_send_open_proc_resp_nak %p";
static const char long_spc155[]  = "globus|cm_xio|server_send_open_proc_resp_nak -- %p";
static const char short_spc156[] = "**globus|cm_xio|vc_connection %s %d %s";
static const char long_spc156[]  = "globus|cm_xio|vc_connection -- %s %d %s";
static const char short_spc157[] = "**globus|cm_xio|vc_corrupt %p";
static const char long_spc157[]  = "globus|cm_xio|vc_corrupt -- %p";
static const char short_spc158[] = "**globus|cm_xio|vc_uninit %p";
static const char long_spc158[]  = "globus|cm_xio|vc_uninit -- %p";
static const char short_spc159[] = "**globus|cm_xio|xio_attr_cntl %s %s";
static const char long_spc159[]  = "globus|cm_xio|xio_attr_cntl -- %s %s";
static const char short_spc160[] = "**globus|cm_xio|xio_attr_destroy %s";
static const char long_spc160[]  = "globus|cm_xio|xio_attr_destroy -- %s";
static const char short_spc161[] = "**globus|cm_xio|xio_attr_init %s";
static const char long_spc161[]  = "globus|cm_xio|xio_attr_init -- %s";
static const char short_spc162[] = "**globus|cm_xio|xio_close_server %s";
static const char long_spc162[]  = "globus|cm_xio|xio_close_server -- %s";
static const char short_spc163[] = "**globus|cm_xio|xio_driver_destroy_unload_transport %s %s";
static const char long_spc163[]  = "globus|cm_xio|xio_driver_destroy_unload_transport -- %s %s";
static const char short_spc164[] = "**globus|cm_xio|xio_driver_load_transform %s %s";
static const char long_spc164[]  = "globus|cm_xio|xio_driver_load_transform -- %s %s";
static const char short_spc165[] = "**globus|cm_xio|xio_driver_load_transport %s %s";
static const char long_spc165[]  = "globus|cm_xio|xio_driver_load_transport -- %s %s";
static const char short_spc166[] = "**globus|cm_xio|xio_read %p %s";
static const char long_spc166[]  = "globus|cm_xio|xio_read %p %s";
static const char short_spc167[] = "**globus|cm_xio|xio_reg_close %p %s";
static const char long_spc167[]  = "globus|cm_xio|xio_reg_close -- %p %s";
static const char short_spc168[] = "**globus|cm_xio|xio_reg_open %p %s";
static const char long_spc168[]  = "globus|cm_xio|xio_reg_open -- %p %s";
static const char short_spc169[] = "**globus|cm_xio|xio_reg_open %s";
static const char long_spc169[]  = "globus|cm_xio|xio_reg_open -- %s";
static const char short_spc170[] = "**globus|cm_xio|xio_reg_read %s";
static const char long_spc170[]  = "globus|cm_xio|xio_reg_read -- %s";
static const char short_spc171[] = "**globus|cm_xio|xio_reg_readv %s";
static const char long_spc171[]  = "globus|cm_xio|xio_reg_readv -- %s";
static const char short_spc172[] = "**globus|cm_xio|xio_reg_write %s";
static const char long_spc172[]  = "globus|cm_xio|xio_reg_write -- %s";
static const char short_spc173[] = "**globus|cm_xio|xio_reg_writev %s";
static const char long_spc173[]  = "globus|cm_xio|xio_reg_writev -- %s";
static const char short_spc174[] = "**globus|cm_xio|xio_server_reg_accept %s %s";
static const char long_spc174[]  = "globus|cm_xio|xio_server_reg_accept -- %s %s";
static const char short_spc175[] = "**globus|cm_xio|xio_stack_destroy %s";
static const char long_spc175[]  = "globus|cm_xio|xio_stack_destroy -- %s";
static const char short_spc176[] = "**globus|cm_xio|xio_stack_init %s";
static const char long_spc176[]  = "globus|cm_xio|xio_stack_init -- %s";
static const char short_spc177[] = "**globus|cm_xio|xio_stack_push_driver %s %s";
static const char long_spc177[]  = "globus|cm_xio|xio_stack_push_driver -- %s %s";
static const char short_spc178[] = "**globus|cm_xio|xio_write %p %s";
static const char long_spc178[]  = "globus|cm_xio|xio_write %p %s";
static const char short_spc179[] = "**globus|cm|add_contact_info %s";
static const char long_spc179[]  = "an error occurred while the '%s' communication method was adding its contact information to the business card";
static const char short_spc180[] = "**globus|cm|construct_vc_contact_info %s %s %d";
static const char long_spc180[]  = "an error ocurred while the '%s' communication method was attempting to extract contact information for process %s:%d";
static const char short_spc181[] = "**globus|cm|finalize %s";
static const char long_spc181[]  = "an error occurred while shutting down the '%s' communication method";
static const char short_spc182[] = "**globus|cm|init %s";
static const char long_spc182[]  = "an error occured while initializing the '%s' communication method";
static const char short_spc183[] = "**globus|cm|select_comm_method %s %s %d";
static const char long_spc183[]  = "an error ocurred when the '%s' communication was deciding if it could handle communication for process %s:%d";
static const char short_spc184[] = "**globus|cm|select_comm_method_none %s %d";
static const char long_spc184[]  = "no suitable communication method was found for process %s:%d";
static const char short_spc185[] = "**globus|comm_create_key %s";
static const char long_spc185[]  = "globus|comm_create_key -- %s";
static const char short_spc186[] = "**globus|comm_destroy_key %s";
static const char long_spc186[]  = "globus|comm_destroy_key -- %s";
static const char short_spc187[] = "**globus|comm_set_attr %s";
static const char long_spc187[]  = "globus|comm_set_attr -- %s";
static const char short_spc188[] = "**globus|connacc|bcast_vct_error_status %p";
static const char long_spc188[]  = "globus|connacc|bcast_vct_error_status -- %p";
static const char short_spc189[] = "**globus|connacc|bcast_vct_error_status_recvd %p";
static const char long_spc189[]  = "globus|connacc|bcast_vct_error_status_recvd -- %p";
static const char short_spc190[] = "**globus|connacc|bcast_vct_len %p";
static const char long_spc190[]  = "globus|connacc|bcast_vct_len -- %p";
static const char short_spc191[] = "**globus|connacc|bcast_vct_str %p %p %d";
static const char long_spc191[]  = "globus|connacc|bcast_vct_str -- %p %p %d";
static const char short_spc192[] = "**globus|connacc|close_port %s";
static const char long_spc192[]  = "globus|connacc|close_port -- %s";
static const char short_spc193[] = "**globus|connacc|ctxalloc %p";
static const char long_spc193[]  = "globus|connacc|ctxalloc -- %p";
static const char short_spc194[] = "**globus|connacc|open_port %p %p";
static const char long_spc194[]  = "globus|connacc|open_port -- %p %p";
static const char short_spc195[] = "**globus|connacc|port_accept %s %i %C";
static const char long_spc195[]  = "globus|connacc|port_accept -- %s %i %C";
static const char short_spc196[] = "**globus|connacc|port_connect %s %i %C";
static const char long_spc196[]  = "globus|connacc|port_connect -- %s %i %C";
static const char short_spc197[] = "**globus|connacc|port_vc_recv %p %p %d";
static const char long_spc197[]  = "globus|connacc|port_vc_recv -- %p %p %d";
static const char short_spc198[] = "**globus|connacc|port_vc_recv %p %p %s";
static const char long_spc198[]  = "globus|connacc|port_vc_recv -- %p %p %s";
static const char short_spc199[] = "**globus|connacc|port_vc_send %p";
static const char long_spc199[]  = "globus|connacc|port_vc_send -- %p";
static const char short_spc200[] = "**globus|connacc|port_vc_send %p %p %d";
static const char long_spc200[]  = "globus|connacc|port_vc_send -- %p %p %d";
static const char short_spc201[] = "**globus|connacc|port_vc_send %p %p %s";
static const char long_spc201[]  = "globus|connacc|port_vc_send -- %p %p %s";
static const char short_spc202[] = "**globus|connacc|vcrt_serialize %s %C %p";
static const char long_spc202[]  = "globus|connacc|vcrt_serialize -- %s %C %p";
static const char short_spc203[] = "**globus|datatype_cmap %s %d";
static const char long_spc203[]  = "globus|datatype_cmap -- %s %d";
static const char short_spc204[] = "**globus|get_vc_compatability %s";
static const char long_spc204[]  = "globus|get_vc_compatability -- %s";
static const char short_spc205[] = "**globus|module_activate %s";
static const char long_spc205[]  = "attempt to activate the Globus %s module failed";
static const char short_spc206[] = "**globus|module_activate %s %s";
static const char long_spc206[]  = "globus|module_activate -- %s %s";
static const char short_spc207[] = "**globus|module_deactivate %s";
static const char long_spc207[]  = "attempt to deactivate the Globus %s module failed";
static const char short_spc208[] = "**globus|module_deactivate %s %s";
static const char long_spc208[]  = "globus|module_deactivate -- %s %s";
static const char short_spc209[] = "**globus|pg_acquire_ref %s %d";
static const char long_spc209[]  = "globus|pg_acquire_ref -- %s %d";
static const char short_spc210[] = "**globus|pg_create %s %d";
static const char long_spc210[]  = "globus|pg_create -- %s %d";
static const char short_spc211[] = "**globus|pm_gk_insufficient_bc %d %d";
static const char long_spc211[]  = "globus|pm_gk_insufficient_bc -- %d %d";
static const char short_spc212[] = "**globus|pm_gk_intra_subjob_bcast %d %s";
static const char long_spc212[]  = "globus|pm_gk_intra_subjob_bcast -- %d %s";
static const char short_spc213[] = "**globus|pm_gk_intra_subjob_gather %d %s";
static const char long_spc213[]  = "globus|pm_gk_intra_subjob_gather -- %d %s";
static const char short_spc214[] = "**globus|pm_gk_intra_subjob_receive %s";
static const char long_spc214[]  = "globus|pm_gk_intra_subjob_receive -- %s";
static const char short_spc215[] = "**globus|pm_gk_intra_subjob_send %s";
static const char long_spc215[]  = "globus|pm_gk_intra_subjob_send -- %s";
static const char short_spc216[] = "**globus|pm_gk_malformed_app_num %s";
static const char long_spc216[]  = "globus|pm_gk_malformed_app_num -- %s";
static const char short_spc217[] = "**globus|pm_gk_sj_index_atoi %s";
static const char long_spc217[]  = "globus|pm_gk_sj_index_atoi -- %s";
static const char short_spc218[] = "**globus|recvq_deq_posted_or_enq_unexp %d %d %d";
static const char long_spc218[]  = "globus|recvq_deq_posted_or_enq_unexp -- %d %d %d";
static const char short_spc219[] = "**globus|recvq_deq_unexp_or_enq_posted %d %d %d";
static const char long_spc219[]  = "globus|recvq_deq_unexp_or_enq_posted -- %d %d %d";
static const char short_spc220[] = "**globus|request_get_ptr %R";
static const char long_spc220[]  = "globus|request_get_ptr -- %R";
static const char short_spc221[] = "**globus|server_handle_open_proc_resp_ack %p %s";
static const char long_spc221[]  = "globus|server_handle_open_proc_resp_ack -- %p %s";
static const char short_spc222[] = "**globus|strspace_extract_element %s %p";
static const char long_spc222[]  = "globus|strspace_extract_element -- %s %p";
static const char short_spc223[] = "**globus|strtointconv %s %s";
static const char long_spc223[]  = "globus|strtointconv -- %s %s";
static const char short_spc224[] = "**globus|tcp_buf_size_invalid %s";
static const char long_spc224[]  = "globus|tcp_buf_size_invalid -- %s";
static const char short_spc225[] = "**globus|tcp_buf_size_neg %s";
static const char long_spc225[]  = "globus|tcp_buf_size_neg -- %s";
static const char short_spc226[] = "**globus|tcp_buf_size_overflow %s";
static const char long_spc226[]  = "globus|tcp_buf_size_overflow -- %s";
static const char short_spc227[] = "**globus|vc_construct_contact_info %s %d";
static const char long_spc227[]  = "an error occurred while initializing the contact information contained within the VC associated with process %s:%d";
static const char short_spc228[] = "**globus|vc_ptr_bad %p";
static const char long_spc228[]  = "globus|vc_ptr_bad -- %p";
static const char short_spc229[] = "**globus|vc_select_comm_method %s %d";
static const char long_spc229[]  = "a error occurred while attempting to select a suitable method for communicating with process %s:%d";
static const char short_spc230[] = "**globus|vmpi_fn_failed %s %s";
static const char long_spc230[]  = "globus|vmpi_fn_failed -- %s %s";
static const char short_spc231[] = "**globus|vmpi_req_failed %s";
static const char long_spc231[]  = "globus|vmpi_req_failed -- %s";
static const char short_spc232[] = "**gm_get_unique_board_id %d";
static const char long_spc232[]  = "gm_get_unique_board_id failed status=%d";
static const char short_spc233[] = "**gm_init %d";
static const char long_spc233[]  = "gm_init failed gm_status=%d";
static const char short_spc234[] = "**gm_regmem %d";
static const char long_spc234[]  = "gm_register_memory failed gm_status=%d";
static const char short_spc235[] = "**groupnotincomm %d";
static const char long_spc235[]  = "Rank %d of the specified group is not a member of this communicator";
static const char short_spc236[] = "**ibv_create_ah %p";
static const char long_spc236[]  = "ibv_create_ah failed returned handle (%p)";
static const char short_spc237[] = "**ibv_query_device %s";
static const char long_spc237[]  = "ibv_query_device failed for device (%s)";
static const char short_spc238[] = "**indexneg %d %d";
static const char long_spc238[]  = "Index value for index[%d] is %d but must be nonnegative";
static const char short_spc239[] = "**indexnonmonotone %d %d %d";
static const char long_spc239[]  = "Index values in graph topology must be monotone nondecreasing but index[%d] is %d but the next index value is %d";
static const char short_spc240[] = "**inet_addr %s %d";
static const char long_spc240[]  = " inet_addr failed, %s (errno %d)";
static const char short_spc241[] = "**infonkey %d %d";
static const char long_spc241[]  = "Requested key %d but this MPI_Info only has %d keys";
static const char short_spc242[] = "**infonokey %s";
static const char long_spc242[]  = "MPI_Info key %s is not defined ";
static const char short_spc243[] = "**intern %s";
static const char long_spc243[]  = "Internal MPI error!  %s";
static const char short_spc244[] = "**invalid_handle %d";
static const char long_spc244[]  = "invalid handle (%d)";
static const char short_spc245[] = "**invalid_knem_status %d";
static const char long_spc245[]  = "Invalid knem status value - %d";
static const char short_spc246[] = "**invalid_netmod %s";
static const char long_spc246[]  = "Invalid netmod specified (%s)";
static const char short_spc247[] = "**invalid_refcount %d";
static const char long_spc247[]  = "invalid reference count (%d)";
static const char short_spc248[] = "**io %s";
static const char long_spc248[]  = "Other I/O error %s";
static const char short_spc249[] = "**iocp %s %d";
static const char long_spc249[]  = "unable to create an I/O copmletion port, %s (erron %d)";
static const char short_spc250[] = "**ioctl %d %s";
static const char long_spc250[]  = "ioctl failed errno=%d - %s";
static const char short_spc251[] = "**ioctlsocket %s %d";
static const char long_spc251[]  = " ioctl on socket failed, %s (errno %d)";
static const char short_spc252[] = "**iov_offset %d %d";
static const char long_spc252[]  = "invalid iov offset (%d > %d)";
static const char short_spc253[] = "**join_portname %s %s";
static const char long_spc253[]  = "local %s, remote %s";
static const char short_spc254[] = "**join_recv %d";
static const char long_spc254[]  = "recv from the socket failed (errno %d)";
static const char short_spc255[] = "**join_send %d";
static const char long_spc255[]  = "send on the socket failed (errno %d)";
static const char short_spc256[] = "**keyvalobj %s";
static const char long_spc256[]  = "Keyval was not defined for %s objects";
static const char short_spc257[] = "**listen %s %d";
static const char long_spc257[]  = "listen failed, %s (errno %d)";
static const char short_spc258[] = "**lseek %s";
static const char long_spc258[]  = "lseek failed - %s";
static const char short_spc259[] = "**mkfifo %d %s";
static const char long_spc259[]  = "mkfifo failed - errno %d (%s)";
static const char short_spc260[] = "**mkstemp %s";
static const char long_spc260[]  = "mkstemp failed %s";
static const char short_spc261[] = "**mmap %d";
static const char long_spc261[]  = "unable to map memory, mmap failed (errno %d)";
static const char short_spc262[] = "**mpi_abort %C %d";
static const char long_spc262[]  = "MPI_Abort(%C, errorcode=%d) failed";
static const char short_spc263[] = "**mpi_accumulate %p %d %D %d %d %d %D %O %W";
static const char long_spc263[]  = "MPI_Accumulate(origin_addr=%p, origin_count=%d, %D, target_rank=%d, target_disp=%d, target_count=%d, %D, %O, %W) failed";
static const char short_spc264[] = "**mpi_add_error_class %p";
static const char long_spc264[]  = "MPI_Add_error_class(errorclass=%p) failed";
static const char short_spc265[] = "**mpi_add_error_code %d %p";
static const char long_spc265[]  = "MPI_Add_error_code(errorclass=%d, errorcode=%p) failed";
static const char short_spc266[] = "**mpi_add_error_string %d %s";
static const char long_spc266[]  = "MPI_Add_error_string(code=%d, str=\"%s\") failed";
static const char short_spc267[] = "**mpi_address %p %p";
static const char long_spc267[]  = "MPI_Address(location=%p, address=%p) failed";
static const char short_spc268[] = "**mpi_allgather %p %d %D %p %d %D %C";
static const char long_spc268[]  = "MPI_Allgather(sbuf=%p, scount=%d, %D, rbuf=%p, rcount=%d, %D, %C) failed";
static const char short_spc269[] = "**mpi_allgatherv %p %d %D %p %p %p %D %C";
static const char long_spc269[]  = "MPI_Allgatherv(sbuf=%p, scount=%d, %D, rbuf=%p, rcounts=%p, displs=%p, %D, %C) failed";
static const char short_spc270[] = "**mpi_alloc_mem %d %I %p";
static const char long_spc270[]  = "MPI_Alloc_mem(size=%d, %I, baseptr=%p) failed";
static const char short_spc271[] = "**mpi_allreduce %p %p %d %D %O %C";
static const char long_spc271[]  = "MPI_Allreduce(sbuf=%p, rbuf=%p, count=%d, %D, %O, %C) failed";
static const char short_spc272[] = "**mpi_alltoall %p %d %D %p %d %D %C";
static const char long_spc272[]  = "MPI_Alltoall(sbuf=%p, scount=%d, %D, rbuf=%p, rcount=%d, %D, %C) failed";
static const char short_spc273[] = "**mpi_alltoallv %p %p %p %D %p %p %p %D %C";
static const char long_spc273[]  = "MPI_Alltoallv(sbuf=%p, scnts=%p, sdispls=%p, %D, rbuf=%p, rcnts=%p, rdispls=%p, %D, %C) failed";
static const char short_spc274[] = "**mpi_alltoallw %p %p %p %p %p %p %p %p %C";
static const char long_spc274[]  = "MPI_Alltoallw(sbuf=%p, scnts=%p, sdispls=%p, stypes=%p, rbuf=%p, rcnts=%p, rdispls=%p, rtypes=%p, %C) failed";
static const char short_spc275[] = "**mpi_attr_delete %C %d";
static const char long_spc275[]  = "MPI_Attr_delete(%C, keyval=%d) failed";
static const char short_spc276[] = "**mpi_attr_get %C %d %p %p";
static const char long_spc276[]  = "MPI_Attr_get(%C, keyval=%d, attr_value=%p, flag=%p) failed";
static const char short_spc277[] = "**mpi_attr_put %C %d %p";
static const char long_spc277[]  = "MPI_Attr_put(%C, keyval=%d, attr_value=%p) failed";
static const char short_spc278[] = "**mpi_barrier %C";
static const char long_spc278[]  = "MPI_Barrier(%C) failed";
static const char short_spc279[] = "**mpi_bcast %p %d %D %d %C";
static const char long_spc279[]  = "MPI_Bcast(buf=%p, count=%d, %D, root=%d, %C) failed";
static const char short_spc280[] = "**mpi_bsend %p %d %D %i %t %C";
static const char long_spc280[]  = "MPI_Bsend(buf=%p, count=%d, %D, dest=%i, tag=%t, %C) failed";
static const char short_spc281[] = "**mpi_bsend_init %p %d %D %i %t %C %p";
static const char long_spc281[]  = "MPI_Bsend_init(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc282[] = "**mpi_buffer_attach %p %d";
static const char long_spc282[]  = "MPI_Buffer_attach(buf=%p, size=%d) failed";
static const char short_spc283[] = "**mpi_buffer_detach %p %p";
static const char long_spc283[]  = "MPI_Buffer_detach(buf=%p, size=%p) failed";
static const char short_spc284[] = "**mpi_cancel %p";
static const char long_spc284[]  = "MPI_Cancel(request=%p) failed";
static const char short_spc285[] = "**mpi_cart_coords %C %d %d %p";
static const char long_spc285[]  = "MPI_Cart_coords(%C, rank=%d, maxdims=%d, coords=%p) failed";
static const char short_spc286[] = "**mpi_cart_create %C %d %p %p %d %p";
static const char long_spc286[]  = "MPI_Cart_create(%C, ndims=%d, dims=%p, periods=%p, reorder=%d, comm_cart=%p) failed";
static const char short_spc287[] = "**mpi_cart_get %C %d %p %p %p";
static const char long_spc287[]  = "MPI_Cart_get(%C, maxdims=%d, dims=%p, periods=%p, coords=%p) failed";
static const char short_spc288[] = "**mpi_cart_map %C %d %p %p %p";
static const char long_spc288[]  = "MPI_Cart_map(%C, ndims=%d, dims=%p, periods=%p, newrank=%p) failed";
static const char short_spc289[] = "**mpi_cart_rank %C %p %p";
static const char long_spc289[]  = "MPI_Cart_rank(%C, coords=%p, rank=%p) failed";
static const char short_spc290[] = "**mpi_cart_shift %C %d %d %p %p";
static const char long_spc290[]  = "MPI_Cart_shift(%C, direction=%d, displ=%d, source=%p, dest=%p) failed";
static const char short_spc291[] = "**mpi_cart_sub %C %p %p";
static const char long_spc291[]  = "MPI_Cart_sub(%C, remain_dims=%p, comm_new=%p) failed";
static const char short_spc292[] = "**mpi_cartdim_get %C %p";
static const char long_spc292[]  = "MPI_Cartdim_get(%C, ndims=%p) failed";
static const char short_spc293[] = "**mpi_close_port %s";
static const char long_spc293[]  = "MPI_Close_port(port=\"%s\") failed";
static const char short_spc294[] = "**mpi_comm_accept %s %I %d %C %p";
static const char long_spc294[]  = "MPI_Comm_accept(port=\"%s\", %I, root=%d, %C, newcomm=%p) failed";
static const char short_spc295[] = "**mpi_comm_call_errhandler %C %d";
static const char long_spc295[]  = "MPI_Comm_call_errhandler(%C, errorcode=%d) failed";
static const char short_spc296[] = "**mpi_comm_compare %C %C %p";
static const char long_spc296[]  = "MPI_Comm_compare(%C, %C, result=%p) failed";
static const char short_spc297[] = "**mpi_comm_connect %s %I %d %C %p";
static const char long_spc297[]  = "MPI_Comm_connect(port=\"%s\", %I, root=%d, %C, newcomm=%p) failed";
static const char short_spc298[] = "**mpi_comm_create %C %G %p";
static const char long_spc298[]  = "MPI_Comm_create(%C, %G, new_comm=%p) failed";
static const char short_spc299[] = "**mpi_comm_create_errhandler %p %p";
static const char long_spc299[]  = "MPI_Comm_create_errhandler(function=%p, errhandler=%p) failed";
static const char short_spc300[] = "**mpi_comm_create_keyval %p %p %p %p";
static const char long_spc300[]  = "MPI_Comm_create_keyval(comm_copy_attr_fn=%p, comm_delete_attr_fn=%p, comm_keyval=%p, extra_state=%p) failed";
static const char short_spc301[] = "**mpi_comm_delete_attr %C %d";
static const char long_spc301[]  = "MPI_Comm_delete_attr(%C, comm_keyval=%d) failed";
static const char short_spc302[] = "**mpi_comm_disconnect %C";
static const char long_spc302[]  = "MPI_Comm_disconnect(comm=%C) failed";
static const char short_spc303[] = "**mpi_comm_dup %C %p";
static const char long_spc303[]  = "MPI_Comm_dup(%C, new_comm=%p) failed";
static const char short_spc304[] = "**mpi_comm_free %p";
static const char long_spc304[]  = "MPI_Comm_free(comm=%p) failed";
static const char short_spc305[] = "**mpi_comm_free_keyval %p";
static const char long_spc305[]  = "MPI_Comm_free_keyval(comm_keyval=%p) failed";
static const char short_spc306[] = "**mpi_comm_get_attr %C %d %p %p";
static const char long_spc306[]  = "MPI_Comm_get_attr(%C, comm_keyval=%d, attribute_val=%p, flag=%p) failed";
static const char short_spc307[] = "**mpi_comm_get_errhandler %C %p";
static const char long_spc307[]  = "MPI_Comm_get_errhandler(%C, errhandler=%p) failed";
static const char short_spc308[] = "**mpi_comm_get_name %C %p %p";
static const char long_spc308[]  = "MPI_Comm_get_name(%C, comm_name=%p, resultlen=%p) failed";
static const char short_spc309[] = "**mpi_comm_get_parent %p";
static const char long_spc309[]  = "MPI_Comm_get_parent(comm=%p) failed";
static const char short_spc310[] = "**mpi_comm_group %C %p";
static const char long_spc310[]  = "MPI_Comm_group(%C, group=%p) failed";
static const char short_spc311[] = "**mpi_comm_join %d %p";
static const char long_spc311[]  = "MPI_Comm_join(fd=%d, intercomm=%p) failed";
static const char short_spc312[] = "**mpi_comm_rank %C %p";
static const char long_spc312[]  = "MPI_Comm_rank(%C, rank=%p) failed";
static const char short_spc313[] = "**mpi_comm_remote_group %C %p";
static const char long_spc313[]  = "MPI_Comm_remote_group(%C, group=%p) failed";
static const char short_spc314[] = "**mpi_comm_remote_size %C %p";
static const char long_spc314[]  = "MPI_Comm_remote_size(%C, size=%p) failed";
static const char short_spc315[] = "**mpi_comm_set_attr %C %d %p";
static const char long_spc315[]  = "MPI_Comm_set_attr(%C, comm_keyval=%d, attribute_val=%p) failed";
static const char short_spc316[] = "**mpi_comm_set_errhandler %C %E";
static const char long_spc316[]  = "MPI_Comm_set_errhandler(%C, %E) failed";
static const char short_spc317[] = "**mpi_comm_set_name %C %s";
static const char long_spc317[]  = "MPI_Comm_set_name(%C, comm_name=%s) failed";
static const char short_spc318[] = "**mpi_comm_size %C %p";
static const char long_spc318[]  = "MPI_Comm_size(%C, size=%p) failed";
static const char short_spc319[] = "**mpi_comm_spawn %s %p %d %I %d %C %p %p";
static const char long_spc319[]  = "MPI_Comm_spawn(cmd=\"%s\", argv=%p, maxprocs=%d, %I, root=%d, %C, intercomm=%p, errors=%p) failed";
static const char short_spc320[] = "**mpi_comm_spawn_multiple %d %p %p %p %p %d %C %p %p";
static const char long_spc320[]  = "MPI_Comm_spawn_multiple(count=%d, cmds=%p, argvs=%p, maxprocs=%p, infos=%p, root=%d, %C, intercomm=%p, errors=%p) failed";
static const char short_spc321[] = "**mpi_comm_split %C %d %d %p";
static const char long_spc321[]  = "MPI_Comm_split(%C, color=%d, key=%d, new_comm=%p) failed";
static const char short_spc322[] = "**mpi_comm_test_inter %C %p";
static const char long_spc322[]  = "MPI_Comm_test_inter(%C, flag=%p) failed";
static const char short_spc323[] = "**mpi_dims_create %d %d %p";
static const char long_spc323[]  = "MPI_Dims_create(nnodes=%d, ndims=%d, dims=%p) failed";
static const char short_spc324[] = "**mpi_dist_graph_create %C %d %p %p %p %p %I %d %p";
static const char long_spc324[]  = " MPI_Dist_graph_create(%C, n=%d, sources=%p, degrees=%p, destinations=%p, weights=%p, info=%I, reorder=%d, comm_dist_graph=%p) failed";
static const char short_spc325[] = "**mpi_dist_graph_create_adjacent %C %d %p %p %d %p %p %I %d %p";
static const char long_spc325[]  = " MPI_Dist_graph_create_adjacent(%C, indegree=%d, sources=%p, sourceweights=%p, outdegree=%d, destinations=%p, destweights=%p, %I, %d, comm_dist_graph=%p) failed";
static const char short_spc326[] = "**mpi_dist_graph_neighbors %C %d %p %p %d %p %p";
static const char long_spc326[]  = " MPI_Dist_graph_neighbors(%C, maxindegree=%d, sources=%p, sourceweights=%p, maxoutdegree=%d, destinations=%p, destweights=%p) failed";
static const char short_spc327[] = "**mpi_dist_graph_neighbors_count %C %p %p %p";
static const char long_spc327[]  = " MPI_Dist_graph_neighbors_count(%C, indegree=%p, outdegree=%p, weighted=%p) failed";
static const char short_spc328[] = "**mpi_errhandler_create %p %p";
static const char long_spc328[]  = "MPI_Errhandler_create(function=%p, errhandler=%p) failed";
static const char short_spc329[] = "**mpi_errhandler_free %p";
static const char long_spc329[]  = "MPI_Errhandler_free(errhandler=%p) failed";
static const char short_spc330[] = "**mpi_errhandler_get %C %p";
static const char long_spc330[]  = "MPI_Errhandler_get(%C, errhandler=%p) failed";
static const char short_spc331[] = "**mpi_errhandler_set %C %E";
static const char long_spc331[]  = "MPI_Errhandler_set(%C, %E) failed";
static const char short_spc332[] = "**mpi_error_class %d %p";
static const char long_spc332[]  = "MPI_Error_class(errorcode=%d, errorclass=%p) failed";
static const char short_spc333[] = "**mpi_error_string %d %s %p";
static const char long_spc333[]  = "MPI_Error_string(errorcode=%d, string=%s, resultlen=%p) failed";
static const char short_spc334[] = "**mpi_exscan %p %p %d %D %O %C";
static const char long_spc334[]  = "MPI_Exscan(sbuf=%p, rbuf=%p, count=%d, %D, %O, %C) failed";
static const char short_spc335[] = "**mpi_file_call_errhandler %F %d";
static const char long_spc335[]  = "MPI_File_call_errhandler(%F, errorcode=%d) failed";
static const char short_spc336[] = "**mpi_file_create_errhandler %p %p";
static const char long_spc336[]  = "MPI_File_create_errhandler(function=%p, errhandler=%p) failed";
static const char short_spc337[] = "**mpi_file_get_errhandler %F %p";
static const char long_spc337[]  = "MPI_File_get_errhandler(%F, errhandler=%p) failed";
static const char short_spc338[] = "**mpi_file_set_errhandler %F %E";
static const char long_spc338[]  = "MPI_File_set_errhandler(%F, %E) failed";
static const char short_spc339[] = "**mpi_finalized %p";
static const char long_spc339[]  = "MPI_Finalized(flag=%p) failed";
static const char short_spc340[] = "**mpi_free_mem %p";
static const char long_spc340[]  = "MPI_Free_mem(base=%p) failed";
static const char short_spc341[] = "**mpi_gather %p %d %D %p %d %D %d %C";
static const char long_spc341[]  = "MPI_Gather(sbuf=%p, scount=%d, %D, rbuf=%p, rcount=%d, %D, root=%d, %C) failed";
static const char short_spc342[] = "**mpi_gatherv %p %d %D %p %p %p %D %d %C";
static const char long_spc342[]  = "MPI_Gatherv failed(sbuf=%p, scount=%d, %D, rbuf=%p, rcnts=%p, displs=%p, %D, root=%d, %C) failed";
static const char short_spc343[] = "**mpi_get %p %d %D %d %d %d %D %W";
static const char long_spc343[]  = "MPI_Get(origin_addr=%p, origin_count=%d, %D, target_rank=%d, target_disp=%d, target_count=%d, %D, %W) failed";
static const char short_spc344[] = "**mpi_get_address %p %p";
static const char long_spc344[]  = "MPI_Get_address(location=%p, address=%p) failed";
static const char short_spc345[] = "**mpi_get_count %p %D %p";
static const char long_spc345[]  = "MPI_Get_count(status=%p, %D, count=%p) failed";
static const char short_spc346[] = "**mpi_get_elements %p %D %p";
static const char long_spc346[]  = "MPI_Get_elements(status=%p, %D, elements=%p) failed";
static const char short_spc347[] = "**mpi_get_processor_name %p %p";
static const char long_spc347[]  = "MPI_Get_processor_name(name=%p, resultlen=%p) failed";
static const char short_spc348[] = "**mpi_get_version %p %p";
static const char long_spc348[]  = "MPI_Get_version(version=%p, subversion=%p) failed";
static const char short_spc349[] = "**mpi_graph_create %C %d %p %p %d %p";
static const char long_spc349[]  = "MPI_Graph_create(%C, nnodes=%d, index=%p, edges=%p, reorder=%d, comm_graph=%p) failed";
static const char short_spc350[] = "**mpi_graph_get %C %d %d %p %p";
static const char long_spc350[]  = "MPI_Graph_get(%C, maxindex=%d, maxedges=%d, index=%p, edges=%p) failed";
static const char short_spc351[] = "**mpi_graph_map %C %d %p %p %p";
static const char long_spc351[]  = "MPI_Graph_map(%C, nnodes=%d, index=%p, edges=%p, newrank=%p) failed";
static const char short_spc352[] = "**mpi_graph_neighbors %C %d %d %p";
static const char long_spc352[]  = "MPI_Graph_neighbors(%C, rank=%d, maxneighbors=%d, neighbors=%p) failed";
static const char short_spc353[] = "**mpi_graph_neighbors_count %C %d %p";
static const char long_spc353[]  = "MPI_Graph_neighbors_count(%C, rank=%d, nneighbors=%p) failed";
static const char short_spc354[] = "**mpi_graphdims_get %C %p %p";
static const char long_spc354[]  = "MPI_Graphdims_get(%C, nnodes=%p, nedges=%p) failed";
static const char short_spc355[] = "**mpi_grequest_complete %R";
static const char long_spc355[]  = "MPI_Grequest_complete(%R) failed";
static const char short_spc356[] = "**mpi_grequest_start %p %p %p %p %p";
static const char long_spc356[]  = "MPI_Grequest_start(query_fn=%p, free_fn=%p, cancel_fn=%p, extra_state=%p, request=%p) failed";
static const char short_spc357[] = "**mpi_group_compare %G %G %p";
static const char long_spc357[]  = "MPI_Group_compare(%G, %G, result=%p) failed";
static const char short_spc358[] = "**mpi_group_difference %G %G %p";
static const char long_spc358[]  = "MPI_Group_difference(%G, %G, new_group=%p) failed";
static const char short_spc359[] = "**mpi_group_excl %G %d %p %p";
static const char long_spc359[]  = "MPI_Group_excl(%G, n=%d, ranks=%p, new_group=%p) failed";
static const char short_spc360[] = "**mpi_group_free %p";
static const char long_spc360[]  = "MPI_Group_free(group=%p) failed";
static const char short_spc361[] = "**mpi_group_incl %G %d %p %p";
static const char long_spc361[]  = "MPI_Group_incl(%G, n=%d, ranks=%p, new_group=%p) failed";
static const char short_spc362[] = "**mpi_group_intersection %G %G %p";
static const char long_spc362[]  = "MPI_Group_intersection(%G, %G, new_group=%p) failed";
static const char short_spc363[] = "**mpi_group_range_excl %G %d %p %p";
static const char long_spc363[]  = "MPI_Group_range_excl(%G, n=%d, ranges=%p, new_group=%p) failed";
static const char short_spc364[] = "**mpi_group_range_incl %G %d %p %p";
static const char long_spc364[]  = "MPI_Group_range_incl(%G, n=%d, ranges=%p, new_group=%p) failed";
static const char short_spc365[] = "**mpi_group_rank %G %p";
static const char long_spc365[]  = "MPI_Group_rank(%G, rank=%p) failed";
static const char short_spc366[] = "**mpi_group_size %G %p";
static const char long_spc366[]  = "MPI_Group_size(%G, size=%p) failed";
static const char short_spc367[] = "**mpi_group_translate_ranks %G %d %p %G %p";
static const char long_spc367[]  = "MPI_Group_translate_ranks(%G, n=%d, ranks1=%p, %G, ranks2=%p) failed";
static const char short_spc368[] = "**mpi_group_union %G %G %p";
static const char long_spc368[]  = "MPI_Group_union(%G, %G, new_group=%p) failed";
static const char short_spc369[] = "**mpi_ibsend %p %d %D %i %t %C %p";
static const char long_spc369[]  = "MPI_Ibsend(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc370[] = "**mpi_info_create %p";
static const char long_spc370[]  = "MPI_Info_create(info=%p) failed";
static const char short_spc371[] = "**mpi_info_delete %I %s";
static const char long_spc371[]  = "MPI_Info_delete(%I, key=%s) failed";
static const char short_spc372[] = "**mpi_info_dup %I %p";
static const char long_spc372[]  = "MPI_Info_dup(%I, newinfo=%p) failed";
static const char short_spc373[] = "**mpi_info_free %p";
static const char long_spc373[]  = "MPI_Info_free(info=%p) failed";
static const char short_spc374[] = "**mpi_info_get %I %s %d %p %p";
static const char long_spc374[]  = "MPI_Info_get(%I, key=%s, valuelen=%d, value=%p, flag=%p) failed";
static const char short_spc375[] = "**mpi_info_get_nkeys %I %p";
static const char long_spc375[]  = "MPI_Info_get_nkeys(%I, nkeys=%p) failed";
static const char short_spc376[] = "**mpi_info_get_nthkey %I %d %p";
static const char long_spc376[]  = "MPI_Info_get_nthkey(%I, n=%d, key=%p) failed";
static const char short_spc377[] = "**mpi_info_get_valuelen %I %s %p %p";
static const char long_spc377[]  = "MPI_Info_get_valuelen(%I, key=%s, valuelen=%p, flag=%p) failed";
static const char short_spc378[] = "**mpi_info_set %I %s %s";
static const char long_spc378[]  = "MPI_Info_set(%I, key=%s, value=%s) failed";
static const char short_spc379[] = "**mpi_init %p %p";
static const char long_spc379[]  = "MPI_Init(argc_p=%p, argv_p=%p) failed";
static const char short_spc380[] = "**mpi_init_thread %p %p %d %p";
static const char long_spc380[]  = "MPI_Init_thread(argc_p=%p, argv_p=%p, required=%d, provided=%p)";
static const char short_spc381[] = "**mpi_initialized %p";
static const char long_spc381[]  = "MPI_Initialized(flag=%p) failed";
static const char short_spc382[] = "**mpi_intercomm_create %C %d %C %d %d %p";
static const char long_spc382[]  = "MPI_Intercomm_create(%C, local_leader=%d, %C, remote_leader=%d, tag=%d, newintercomm=%p) failed";
static const char short_spc383[] = "**mpi_intercomm_merge %C %d %p";
static const char long_spc383[]  = "MPI_Intercomm_merge(%C, high=%d, newintracomm=%p) failed";
static const char short_spc384[] = "**mpi_iprobe %i %t %C %p %p";
static const char long_spc384[]  = "MPI_Iprobe(src=%i, tag=%t, %C, flag=%p, status=%p) failed";
static const char short_spc385[] = "**mpi_irecv %p %d %D %i %t %C %p";
static const char long_spc385[]  = "MPI_Irecv(buf=%p, count=%d, %D, src=%i, tag=%t, %C, request=%p) failed";
static const char short_spc386[] = "**mpi_irsend %p %d %D %i %t %C %p";
static const char long_spc386[]  = "MPI_Irsend(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc387[] = "**mpi_is_thread_main %p";
static const char long_spc387[]  = "MPI_Is_thread_main(flag=%p) failed";
static const char short_spc388[] = "**mpi_isend %p %d %D %i %t %C %p";
static const char long_spc388[]  = "MPI_Isend(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc389[] = "**mpi_issend %p %d %D %i %t %C %p";
static const char long_spc389[]  = "MPI_Issend(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc390[] = "**mpi_keyval_create %p %p %p %p";
static const char long_spc390[]  = "MPI_Keyval_create(copy_fn=%p, del_fn=%p, keyval=%p, extra=%p) failed";
static const char short_spc391[] = "**mpi_keyval_free %p";
static const char long_spc391[]  = "MPI_Keyval_free(keyval=%p) failed";
static const char short_spc392[] = "**mpi_lookup_name %s %I %p";
static const char long_spc392[]  = "MPI_Lookup_name(service=\"%s\", %I, port=%p) failed";
static const char short_spc393[] = "**mpi_op_commutative %O %p";
static const char long_spc393[]  = "MPI_Op_commutative(op=%O, commute=%p) failed";
static const char short_spc394[] = "**mpi_op_create %p %d %p";
static const char long_spc394[]  = "MPI_Op_create(fn=%p, commute=%d, op=%p) failed";
static const char short_spc395[] = "**mpi_op_free %p";
static const char long_spc395[]  = "MPI_Op_free(op=%p) failed";
static const char short_spc396[] = "**mpi_open_port %I %p";
static const char long_spc396[]  = "MPI_Open_port(%I, port=%p) failed";
static const char short_spc397[] = "**mpi_pack %p %d %D %p %d %p %C";
static const char long_spc397[]  = "MPI_Pack(inbuf=%p, incount=%d, %D, outbuf=%p, outcount=%d, position=%p, %C) failed";
static const char short_spc398[] = "**mpi_pack_external %s %p %d %D %p %d %p";
static const char long_spc398[]  = "MPI_Pack_external(datarep=%s, inbuf=%p, incount=%d, %D, outbuf=%p, outcount=%d, position=%p) failed";
static const char short_spc399[] = "**mpi_pack_external_size %s %d %D %p";
static const char long_spc399[]  = "MPI_Pack_external_size(datarep=%s, incount=%d, %D, size=%p) failed";
static const char short_spc400[] = "**mpi_pack_size %d %D %C %p";
static const char long_spc400[]  = "MPI_Pack_size(count=%d, %D, %C, size=%p) failed";
static const char short_spc401[] = "**mpi_probe %i %t %C %p";
static const char long_spc401[]  = "MPI_Probe(src=%i, tag=%t, %C, status=%p) failed";
static const char short_spc402[] = "**mpi_publish_name %s %I %s";
static const char long_spc402[]  = "MPI_Publish_name(service=\"%s\", %I, port=\"%s\") failed";
static const char short_spc403[] = "**mpi_put %p %d %D %d %d %d %D %W";
static const char long_spc403[]  = "MPI_Put(origin_addr=%p, origin_count=%d, %D, target_rank=%d, target_disp=%d, target_count=%d, %D, %W) failed";
static const char short_spc404[] = "**mpi_query_thread %p";
static const char long_spc404[]  = "MPI_Query_thread(provided=%p) failed";
static const char short_spc405[] = "**mpi_recv %p %d %D %i %t %C %p";
static const char long_spc405[]  = "MPI_Recv(buf=%p, count=%d, %D, src=%i, tag=%t, %C, status=%p) failed";
static const char short_spc406[] = "**mpi_recv_init %p %d %D %i %t %C %p";
static const char long_spc406[]  = "MPI_Recv_init(buf=%p, count=%d, %D, src=%i, tag=%t, %C, request=%p) failed";
static const char short_spc407[] = "**mpi_reduce %p %p %d %D %O %d %C";
static const char long_spc407[]  = "MPI_Reduce(sbuf=%p, rbuf=%p, count=%d, %D, %O, root=%d, %C) failed";
static const char short_spc408[] = "**mpi_reduce_local %p %p %d %D %O";
static const char long_spc408[]  = "MPI_Reduce_local(inbuf=%p, inoutbuf=%p, count=%d, %D, %O) failed";
static const char short_spc409[] = "**mpi_reduce_scatter %p %p %p %D %O %C";
static const char long_spc409[]  = "MPI_Reduce_scatter(sbuf=%p, rbuf=%p, rcnts=%p, %D, %O, %C) failed";
static const char short_spc410[] = "**mpi_reduce_scatter_block %p %p %d %D %O %C";
static const char long_spc410[]  = "MPI_Reduce_scatter_block(sbuf=%p, rbuf=%p, recvcount=%d, %D, %O, %C) failed";
static const char short_spc411[] = "**mpi_register_datarep %s %p %p %p %p";
static const char long_spc411[]  = "MPI_Register_datarep(datarep=%s, read_conversion_fn=%p, write_conversion_fn=%p, dtype_file_extent_fn=%p, extra_state=%p) failed";
static const char short_spc412[] = "**mpi_request_free %p";
static const char long_spc412[]  = "MPI_Request_free(request=%p) failed";
static const char short_spc413[] = "**mpi_request_get_status %R %p %p";
static const char long_spc413[]  = "MPI_Request_get_status(%R, flag=%p, status=%p) failed";
static const char short_spc414[] = "**mpi_rsend %p %d %D %i %t %C";
static const char long_spc414[]  = "MPI_Rsend(buf=%p, count=%d, %D, src=%i, tag=%t, %C) failed";
static const char short_spc415[] = "**mpi_rsend_init %p %d %D %i %t %C %p";
static const char long_spc415[]  = "MPI_Rsend_init(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc416[] = "**mpi_scan %p %p %d %D %O %C";
static const char long_spc416[]  = "MPI_Scan(sbuf=%p, rbuf=%p, count=%d, %D, %O, %C) failed";
static const char short_spc417[] = "**mpi_scatter %p %d %D %p %d %D %d %C";
static const char long_spc417[]  = "MPI_Scatter(sbuf=%p, scount=%d, %D, rbuf=%p, rcount=%d, %D, root=%d, %C) failed";
static const char short_spc418[] = "**mpi_scatterv %p %p %p %D %p %d %D %d %C";
static const char long_spc418[]  = "MPI_Scatterv(sbuf=%p, scnts=%p, displs=%p, %D, rbuf=%p, rcount=%d, %D, root=%d, %C) failed";
static const char short_spc419[] = "**mpi_send %p %d %D %i %t %C";
static const char long_spc419[]  = "MPI_Send(buf=%p, count=%d, %D, dest=%i, tag=%t, %C) failed";
static const char short_spc420[] = "**mpi_send_init %p %d %D %i %t %C %p";
static const char long_spc420[]  = "MPI_Send_init(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc421[] = "**mpi_sendrecv %p %d %D %i %t %p %d %D %i %t %C %p";
static const char long_spc421[]  = "MPI_Sendrecv(sbuf=%p, scount=%d, %D, dest=%i, stag=%t, rbuf=%p, rcount=%d, %D, src=%i, rtag=%t, %C, status=%p) failed";
static const char short_spc422[] = "**mpi_sendrecv_replace %p %d %D %i %t %i %t %C %p";
static const char long_spc422[]  = "MPI_Sendrecv_replace(buf=%p, count=%d, %D, dest=%i, stag=%t, src=%i, rtag=%t, %C, status=%p) failed";
static const char short_spc423[] = "**mpi_ssend %p %d %D %i %t %C";
static const char long_spc423[]  = "MPI_Ssend(buf=%p, count=%d, %D, dest=%i, tag=%t, %C) failed";
static const char short_spc424[] = "**mpi_ssend_init %p %d %D %i %t %C %p";
static const char long_spc424[]  = "MPI_Ssend_init(buf=%p, count=%d, %D, dest=%i, tag=%t, %C, request=%p) failed";
static const char short_spc425[] = "**mpi_start %p";
static const char long_spc425[]  = "MPI_Start(request=%p) failed";
static const char short_spc426[] = "**mpi_startall %d %p";
static const char long_spc426[]  = "MPI_Startall(count=%d, req_array=%p) failed";
static const char short_spc427[] = "**mpi_status_set_cancelled %p %d";
static const char long_spc427[]  = "MPI_Status_set_cancelled(status=%p, flag=%d) failed";
static const char short_spc428[] = "**mpi_status_set_elements %p %D %d";
static const char long_spc428[]  = "MPI_Status_set_elements(status=%p, %D, count=%d) failed";
static const char short_spc429[] = "**mpi_test %p %p %p";
static const char long_spc429[]  = "MPI_Test(request=%p, flag=%p, status=%p) failed";
static const char short_spc430[] = "**mpi_test_cancelled %p %p";
static const char long_spc430[]  = "MPI_Test_cancelled(status=%p, flag=%p) failed";
static const char short_spc431[] = "**mpi_testall %d %p %p %p";
static const char long_spc431[]  = "MPI_Testall(count=%d, req_array=%p, flag=%p, status_array=%p) failed";
static const char short_spc432[] = "**mpi_testany %d %p %p %p %p";
static const char long_spc432[]  = "MPI_Testany(count=%d, req_array=%p, index=%p, flag=%p, status=%p) failed";
static const char short_spc433[] = "**mpi_testsome %d %p %p %p %p";
static const char long_spc433[]  = "MPI_Testsome(count=%d, req_array=%p, out_count=%p, indices=%p, status_array=%p) failed";
static const char short_spc434[] = "**mpi_topo_test %C %p";
static const char long_spc434[]  = "MPI_Topo_test(%C, topo_type=%p) failed";
static const char short_spc435[] = "**mpi_type_commit %p";
static const char long_spc435[]  = "MPI_Type_commit(datatype_p=%p) failed";
static const char short_spc436[] = "**mpi_type_contiguous %d %D %p";
static const char long_spc436[]  = "MPI_Type_contiguous(count=%d, %D, new_type_p=%p) failed";
static const char short_spc437[] = "**mpi_type_create_darray %d %d %d %p %p %p %p %d %D %p";
static const char long_spc437[]  = "MPI_Type_create_darray(size=%d, rank=%d, ndims=%d, array_of_gsizes=%p, array_of_distribs=%p, array_of_dargs=%p, array_of_psizes=%p, order=%d, %D, newtype=%p) failed";
static const char short_spc438[] = "**mpi_type_create_hindexed %d %p %p %D %p";
static const char long_spc438[]  = "MPI_Type_create_hindexed(count=%d, array_of_blocklengths=%p, array_of_displacements=%p, %D, newtype=%p) failed";
static const char short_spc439[] = "**mpi_type_create_hvector %d %d %d %D %p";
static const char long_spc439[]  = "MPI_Type_create_hvector(count=%d, blocklength=%d, stride=%d, %D, newtype=%p) failed";
static const char short_spc440[] = "**mpi_type_create_indexed_block %d %d %p %D %p";
static const char long_spc440[]  = "MPI_Type_create_indexed_block(count=%d, blocklength=%d, array_of_displacements=%p, %D, newtype=%p) failed";
static const char short_spc441[] = "**mpi_type_create_keyval %p %p %p %p";
static const char long_spc441[]  = "MPI_Type_create_keyval(type_copy_attr_fn=%p, type_delete_attr_fn=%p, type_keyval=%p, extra_state=%p) failed";
static const char short_spc442[] = "**mpi_type_create_resized %D %L %L %p";
static const char long_spc442[]  = "MPI_Type_create_resized(%D, lb=%L, extent=%L, newtype=%p) failed";
static const char short_spc443[] = "**mpi_type_create_struct %d %p %p %p %p";
static const char long_spc443[]  = "MPI_Type_create_struct(count=%d, array_of_blocklengths=%p, array_of_displacements=%p, array_of_types=%p, newtype=%p) failed";
static const char short_spc444[] = "**mpi_type_create_subarray %d %p %p %p %d %D %p";
static const char long_spc444[]  = "MPI_Type_create_subarray(ndims=%d, array_of_sizes=%p, array_of_subsizes=%p, array_of_starts=%p, order=%d, %D, newtype=%p) failed";
static const char short_spc445[] = "**mpi_type_delete_attr %D %d";
static const char long_spc445[]  = "MPI_Type_delete_attr(%D, type_keyval=%d) failed";
static const char short_spc446[] = "**mpi_type_dup %D %p";
static const char long_spc446[]  = "MPI_Type_dup(%D, newtype=%p) failed";
static const char short_spc447[] = "**mpi_type_extent %D %p";
static const char long_spc447[]  = "MPI_Type_extent(%D, extent=%p) failed";
static const char short_spc448[] = "**mpi_type_free %p";
static const char long_spc448[]  = "MPI_Type_free(datatype_p=%p) failed";
static const char short_spc449[] = "**mpi_type_free_keyval %p";
static const char long_spc449[]  = "MPI_Type_free_keyval(type_keyval=%p) failed";
static const char short_spc450[] = "**mpi_type_get_attr %D %d %p %p";
static const char long_spc450[]  = "MPI_Type_get_attr(%D, type_keyval=%d, attribute_val=%p, flag=%p) failed";
static const char short_spc451[] = "**mpi_type_get_contents %D %d %d %d %p %p %p";
static const char long_spc451[]  = "MPI_Type_get_contents(%D, max_integers=%d, max_addresses=%d, max_datatypes=%d, array_of_integers=%p, array_of_addresses=%p, array_of_datatypes=%p) failed";
static const char short_spc452[] = "**mpi_type_get_envelope %D %p %p %p %p";
static const char long_spc452[]  = "MPI_Type_get_envelope(%D, num_integers=%p, num_addresses=%p, num_datatypes=%p, combiner=%p) failed";
static const char short_spc453[] = "**mpi_type_get_extent %D %p %p";
static const char long_spc453[]  = "MPI_Type_get_extent(%D, lb=%p, extent=%p) failed";
static const char short_spc454[] = "**mpi_type_get_name %D %p %p";
static const char long_spc454[]  = "MPI_Type_get_name(%D, type_name=%p, resultlen=%p) failed";
static const char short_spc455[] = "**mpi_type_get_true_extent %D %p %p";
static const char long_spc455[]  = "MPI_Type_get_true_extent(%D, lb=%p, true_extent=%p) failed";
static const char short_spc456[] = "**mpi_type_hindexed %d %p %p %D %p";
static const char long_spc456[]  = "MPI_Type_hindexed(count=%d, blocklens=%p, indices=%p, %D, new_type_p=%p) failed";
static const char short_spc457[] = "**mpi_type_hvector %d %d %d %D %p";
static const char long_spc457[]  = "MPI_Type_hvector(count=%d, blocklen=%d, stride=%d, %D, new_type_p=%p) failed";
static const char short_spc458[] = "**mpi_type_indexed %d %p %p %D %p";
static const char long_spc458[]  = "MPI_Type_indexed(count=%d, blocklens=%p, indices=%p, %D, new_type_p=%p) failed";
static const char short_spc459[] = "**mpi_type_lb %D %p";
static const char long_spc459[]  = "MPI_Type_lb(%D, displacement=%p) failed";
static const char short_spc460[] = "**mpi_type_match_size %d %d %p";
static const char long_spc460[]  = "MPI_Type_match_size(typeclass=%d, size=%d, datatype=%p) failed";
static const char short_spc461[] = "**mpi_type_set_attr %D %d %p";
static const char long_spc461[]  = "MPI_Type_set_attr(%D, type_keyval=%d, attribute_val=%p) failed";
static const char short_spc462[] = "**mpi_type_set_name %D %s";
static const char long_spc462[]  = "MPI_Type_set_name(%D, type_name=%s) failed";
static const char short_spc463[] = "**mpi_type_size %D %p";
static const char long_spc463[]  = "MPI_Type_size(%D) failed";
static const char short_spc464[] = "**mpi_type_struct %d %p %p %p %p";
static const char long_spc464[]  = "MPI_Type_struct(count=%d, blocklens=%p, indices=%p, old_types=%p, new_type_p=%p) failed";
static const char short_spc465[] = "**mpi_type_ub %D %p";
static const char long_spc465[]  = "MPI_Type_ub(%D, displacement=%p) failed";
static const char short_spc466[] = "**mpi_type_vector %d %d %d %D %p";
static const char long_spc466[]  = "MPI_Type_vector(count=%d, blocklength=%d, stride=%d, %D, new_type_p=%p) failed";
static const char short_spc467[] = "**mpi_unpack %p %d %p %p %d %D %C";
static const char long_spc467[]  = "MPI_Unpack(inbuf=%p, insize=%d, position=%p, outbuf=%p, outcount=%d, %D, %C) failed";
static const char short_spc468[] = "**mpi_unpack_external %s %p %d %p %p %d %D";
static const char long_spc468[]  = "MPI_Unpack_external(datarep=%s, inbuf=%p, insize=%d, position=%p, outbuf=%p, outcount=%d, %D) failed";
static const char short_spc469[] = "**mpi_unpublish_name %s %I %s";
static const char long_spc469[]  = "MPI_Unpublish_name(service=\"%s\", %I, port=\"%s\") failed";
static const char short_spc470[] = "**mpi_wait %p %p";
static const char long_spc470[]  = "MPI_Wait(request=%p, status%p) failed";
static const char short_spc471[] = "**mpi_waitall %d %p %p";
static const char long_spc471[]  = "MPI_Waitall(count=%d, req_array=%p, status_array=%p) failed";
static const char short_spc472[] = "**mpi_waitany %d %p %p %p";
static const char long_spc472[]  = "MPI_Waitany(count=%d, req_array=%p, index=%p, status=%p) failed";
static const char short_spc473[] = "**mpi_waitsome %d %p %p %p %p";
static const char long_spc473[]  = "MPI_Waitsome(count=%d, req_array=%p, out_count=%p, indices=%p, status_array=%p) failed";
static const char short_spc474[] = "**mpi_win_call_errhandler %W %d";
static const char long_spc474[]  = "MPI_Win_call_errhandler(%W, errorcode=%d) failed";
static const char short_spc475[] = "**mpi_win_complete %W";
static const char long_spc475[]  = "MPI_Win_complete(%W) failed";
static const char short_spc476[] = "**mpi_win_create %p %d %d %I %C %p";
static const char long_spc476[]  = "MPI_Win_create(base=%p, size=%d, disp_unit=%d, %I, %C, win=%p) failed";
static const char short_spc477[] = "**mpi_win_create_errhandler %p %p";
static const char long_spc477[]  = "MPI_Win_create_errhandler(function=%p, errhandler=%p) failed";
static const char short_spc478[] = "**mpi_win_create_keyval %p %p %p %p";
static const char long_spc478[]  = "MPI_Win_create_keyval(win_copy_attr_fn=%p, win_delete_attr_fn=%p, win_keyval=%p, extra_state=%p) failed";
static const char short_spc479[] = "**mpi_win_delete_attr %W %d";
static const char long_spc479[]  = "MPI_Win_delete_attr(%W, win_keyval=%d) failed";
static const char short_spc480[] = "**mpi_win_fence %A %W";
static const char long_spc480[]  = "MPI_Win_fence(%A, %W) failed";
static const char short_spc481[] = "**mpi_win_free %p";
static const char long_spc481[]  = "MPI_Win_free(win=%p) failed";
static const char short_spc482[] = "**mpi_win_free_keyval %p";
static const char long_spc482[]  = "MPI_Win_free_keyval(win_keyval=%p) failed";
static const char short_spc483[] = "**mpi_win_get_attr %W %d %p %p";
static const char long_spc483[]  = "MPI_Win_get_attr(%W, win_keyval=%d, attribute_val=%p, flag=%p) failed";
static const char short_spc484[] = "**mpi_win_get_errhandler %W %p";
static const char long_spc484[]  = "MPI_Win_get_errhandler(%W, errhandler=%p) failed";
static const char short_spc485[] = "**mpi_win_get_group %W %p";
static const char long_spc485[]  = "MPI_Win_get_group(%W, group=%p) failed";
static const char short_spc486[] = "**mpi_win_get_name %W %p %p";
static const char long_spc486[]  = "MPI_Win_get_name(%W, win_name=%p, resultlen=%p) failed";
static const char short_spc487[] = "**mpi_win_lock %d %d %A %W";
static const char long_spc487[]  = "MPI_Win_lock(lock_type=%d, rank=%d, %A, %W) failed";
static const char short_spc488[] = "**mpi_win_post %G %A %W";
static const char long_spc488[]  = "MPI_Win_post(%G, %A, %W) failed";
static const char short_spc489[] = "**mpi_win_set_attr %W %d %p";
static const char long_spc489[]  = "MPI_Win_set_attr(%W, win_keyval=%d, attribute_val=%p) failed";
static const char short_spc490[] = "**mpi_win_set_errhandler %W %E";
static const char long_spc490[]  = "MPI_Win_set_errhandler(%W, %E) failed";
static const char short_spc491[] = "**mpi_win_set_name %W %s";
static const char long_spc491[]  = "MPI_Win_set_name(%W, win_name=%s) failed";
static const char short_spc492[] = "**mpi_win_start %G %A %W";
static const char long_spc492[]  = "MPI_Win_start(%G, %A, %W) failed";
static const char short_spc493[] = "**mpi_win_test %W %p";
static const char long_spc493[]  = "MPI_Win_test(%W, flag=%p) failed";
static const char short_spc494[] = "**mpi_win_unlock %d %W";
static const char long_spc494[]  = "MPI_Win_unlock(rank=%d, %W) failed";
static const char short_spc495[] = "**mpi_win_wait %W";
static const char long_spc495[]  = "MPI_Win_wait(%W) failed";
static const char short_spc496[] = "**mpir_comm_get_attr %C %d %p %p";
static const char long_spc496[]  = "MPIR_Comm_get_attr(%C, comm_keyval=%d, attribute_val=%p, flag=%p) failed";
static const char short_spc497[] = "**mpir_type_get_attr %D %d %p %p";
static const char long_spc497[]  = "MPIR_Type_get_attr(%D, type_keyval=%d, attribute_val=%p, flag=%p) failed";
static const char short_spc498[] = "**mpir_wingetattr %W %d %p %p";
static const char long_spc498[]  = "MPIR_WinGetAttr(%W, win_keyval=%d, attribute_val=%p, flag=%p) failed";
static const char short_spc499[] = "**mpix_grequest_class_create %p %p %p %p %p";
static const char long_spc499[]  = "MPIX_Grequest_class_create(query_fn=%p, free_fn=%p, cancel_fn=%p, %poll_fn=%p, wait_fn=%p) failed";
static const char short_spc500[] = "**mq_close %d";
static const char long_spc500[]  = "failed to close a posix message queue, error %d";
static const char short_spc501[] = "**mq_open %d";
static const char long_spc501[]  = "failed to open a posix message queue, error %d";
static const char short_spc502[] = "**mq_receive %d";
static const char long_spc502[]  = "failed to receive a posix message queue message, error %d";
static const char short_spc503[] = "**mq_send %d";
static const char long_spc503[]  = "failed to send a posix message queue message, error %d";
static const char short_spc504[] = "**msgctl %d";
static const char long_spc504[]  = "msgctl returned %d";
static const char short_spc505[] = "**msgget %d";
static const char long_spc505[]  = "msgget returned %d";
static const char short_spc506[] = "**msgrcv %d";
static const char long_spc506[]  = "msgrcv returned %d";
static const char short_spc507[] = "**msgsnd %d";
static const char long_spc507[]  = "msgsnd returned %d";
static const char short_spc508[] = "**mx_cancel %s";
static const char long_spc508[]  = "mx_cancel failed (%s)";
static const char short_spc509[] = "**mx_close_endpoint %s";
static const char long_spc509[]  = "mx_close_endpoint failed (%s)";
static const char short_spc510[] = "**mx_connect %s";
static const char long_spc510[]  = "mx_connect failed (%s)";
static const char short_spc511[] = "**mx_decompose_endpoint_addr %s";
static const char long_spc511[]  = "mx_decompose_endpoint_addr failed (%s)";
static const char short_spc512[] = "**mx_finalize %s";
static const char long_spc512[]  = "mx_finalize failed (%s)";
static const char short_spc513[] = "**mx_get_endpoint_addr %s";
static const char long_spc513[]  = "mx_get_endpoint_addr failed (%s)";
static const char short_spc514[] = "**mx_init %s";
static const char long_spc514[]  = "mx_init failed (%s)";
static const char short_spc515[] = "**mx_irecv %s";
static const char long_spc515[]  = "mx_irecv failed (%s)";
static const char short_spc516[] = "**mx_isend %s";
static const char long_spc516[]  = "mx_isend failed (%s)";
static const char short_spc517[] = "**mx_open_endpoint %s";
static const char long_spc517[]  = "mx_open_endpoint failed (%s)";
static const char short_spc518[] = "**namepubfile %s %s %s";
static const char long_spc518[]  = "Unable to publish service name %s using file %s for reason %s";
static const char short_spc519[] = "**namepubnotfound %s";
static const char long_spc519[]  = "Lookup failed for service name %s";
static const char short_spc520[] = "**namepubnotpub %s";
static const char long_spc520[]  = "Lookup failed for service name %s";
static const char short_spc521[] = "**namepubnotunpub %s";
static const char long_spc521[]  = "Failed to unpublish service name %s";
static const char short_spc522[] = "**nomem %d";
static const char long_spc522[]  = "Out of memory (unable to allocate %d bytes)";
static const char short_spc523[] = "**nomem %s";
static const char long_spc523[]  = "Out of memory (unable to allocate a '%s')";
static const char short_spc524[] = "**nomem %s %d";
static const char long_spc524[]  = "Out of memory (unable to allocate a '%s' of size %d)";
static const char short_spc525[] = "**nomem2 %d %s";
static const char long_spc525[]  = "Unable to allocate %d bytes of memory for %s (probably out of memory)";
static const char short_spc526[] = "**nomemuereq %d";
static const char long_spc526[]  = "Failed to allocate memory for an unexpected message. %d unexpected messages queued.";
static const char short_spc527[] = "**notimpl %s";
static const char long_spc527[]  = "Function %s not implemented";
static const char short_spc528[] = "**notsame %s %s";
static const char long_spc528[]  = "Inconsistent arguments %s to collective routine %s";
static const char short_spc529[] = "**nulledge %d %d";
static const char long_spc529[]  = "Edge for node %d (entry edges[%d]) is to itself";
static const char short_spc530[] = "**nullptr %s";
static const char long_spc530[]  = "Null pointer in parameter %s";
static const char short_spc531[] = "**nullptrtype %s";
static const char long_spc531[]  = "Null %s pointer";
static const char short_spc532[] = "**open %s";
static const char long_spc532[]  = "open failed - %s";
static const char short_spc533[] = "**open %s %d %d";
static const char long_spc533[]  = "open(%s) failed for process %d, error %d";
static const char short_spc534[] = "**opnotpredefined %d";
static const char long_spc534[]  = "only predefined ops are valid (op = %d)";
static const char short_spc535[] = "**opundefined %s";
static const char long_spc535[]  = "MPI_Op %s operation not defined for this datatype ";
static const char short_spc536[] = "**pglookup %s";
static const char long_spc536[]  = "unable to find the process group structure with id <%s>";
static const char short_spc537[] = "**pkt_ptr %p %p";
static const char long_spc537[]  = "invalid shm queue packet pointer (%p != %p)";
static const char short_spc538[] = "**pmi_barrier %d";
static const char long_spc538[]  = "PMI_Barrier returned %d";
static const char short_spc539[] = "**pmi_get_appnum %d";
static const char long_spc539[]  = "PMI_Get_appnum returned %d";
static const char short_spc540[] = "**pmi_get_clique_ranks %d";
static const char long_spc540[]  = "PMI_Get_clique_ranks returned %d";
static const char short_spc541[] = "**pmi_get_clique_size %d";
static const char long_spc541[]  = "PMI_Get_clique_size returned %d";
static const char short_spc542[] = "**pmi_get_id %d";
static const char long_spc542[]  = "PMI_Get_id returned %d";
static const char short_spc543[] = "**pmi_get_id_length_max %d";
static const char long_spc543[]  = "PMI_Get_id_length_max returned %d";
static const char short_spc544[] = "**pmi_get_rank %d";
static const char long_spc544[]  = "PMI_Get_rank returned %d";
static const char short_spc545[] = "**pmi_get_size %d";
static const char long_spc545[]  = "PMI_Get_size returned %d";
static const char short_spc546[] = "**pmi_get_universe_size %d";
static const char long_spc546[]  = "PMI_Get_universe_size returned %d";
static const char short_spc547[] = "**pmi_init %d";
static const char long_spc547[]  = "PMI_Init returned %d";
static const char short_spc548[] = "**pmi_invalid_clique_size %d";
static const char long_spc548[]  = "PMI_Get_clique_ranks returned an invalid size %d";
static const char short_spc549[] = "**pmi_kvs_commit %d";
static const char long_spc549[]  = "PMI_KVS_Commit returned %d";
static const char short_spc550[] = "**pmi_kvs_get %d";
static const char long_spc550[]  = "PMI_KVS_Get returned %d";
static const char short_spc551[] = "**pmi_kvs_get_key_length_max %d";
static const char long_spc551[]  = "PMI_KVS_Get_key_length_max returned %d";
static const char short_spc552[] = "**pmi_kvs_get_my_name %d";
static const char long_spc552[]  = "PMI_KVS_Get_my_name returned %d";
static const char short_spc553[] = "**pmi_kvs_get_name_length_max %d";
static const char long_spc553[]  = "PMI_KVS_Get_name_length_max returned %d";
static const char short_spc554[] = "**pmi_kvs_get_value_length_max %d";
static const char long_spc554[]  = "PMI_KVS_Get_value_length_max returned %d";
static const char short_spc555[] = "**pmi_kvs_put %d";
static const char long_spc555[]  = "PMI_KVS_Put returned %d";
static const char short_spc556[] = "**pmi_spawn_multiple %d";
static const char long_spc556[]  = "PMI_Spawn_multiple returned %d";
static const char short_spc557[] = "**poll %s";
static const char long_spc557[]  = "poll of socket fds failed - %s";
static const char short_spc558[] = "**portexist %s";
static const char long_spc558[]  = "Named port %s does not exist";
static const char short_spc559[] = "**portquery %d";
static const char long_spc559[]  = "Query of port %d failed or port is not active.";
static const char short_spc560[] = "**post_connect %s";
static const char long_spc560[]  = "%s failed in VC_post_connect";
static const char short_spc561[] = "**psm_close_endpoint %s";
static const char long_spc561[]  = "psm_close_endpiont failed (%s)";
static const char short_spc562[] = "**psm_connect %d";
static const char long_spc562[]  = " psm_connect failed (%d)";
static const char short_spc563[] = "**psm_ep_connect %s";
static const char long_spc563[]  = "psm_ep_connect failed (%s)";
static const char short_spc564[] = "**psm_ep_open %s";
static const char long_spc564[]  = "psm_ep_open failed (%s)";
static const char short_spc565[] = "**psm_finalize %s";
static const char long_spc565[]  = "psm_finalize failed (%s)";
static const char short_spc566[] = "**psm_init %s";
static const char long_spc566[]  = "psm_init failed (%s)";
static const char short_spc567[] = "**psm_irecv %s";
static const char long_spc567[]  = "psm_irecv failed (%s)";
static const char short_spc568[] = "**psm_isend %s";
static const char long_spc568[]  = "psm_isend failed (%s)";
static const char short_spc569[] = "**psm_mq_finalize %s";
static const char long_spc569[]  = "psm_mq_finalize failed (%s)";
static const char short_spc570[] = "**psm_mq_init %s";
static const char long_spc570[]  = "psm_mq_init failed (%s)";
static const char short_spc571[] = "**psm_test %s";
static const char long_spc571[]  = "psm_test failed (%s)";
static const char short_spc572[] = "**rangedup %d %d %d";
static const char long_spc572[]  = "The range array specifies duplicate entries; process %d specified in range array %d was previously specified in range array %d";
static const char short_spc573[] = "**rangeendinvalid %d %d %d";
static const char long_spc573[]  = "The %dth element of a range array ends at %d but must be nonnegative and less than %d";
static const char short_spc574[] = "**rangestartinvalid %d %d %d";
static const char long_spc574[]  = "The %dth element of a range array starts at %d but must be nonnegative and less than %d";
static const char short_spc575[] = "**rank %d %d";
static const char long_spc575[]  = "Invalid rank has value %d but must be nonnegative and less than %d";
static const char short_spc576[] = "**rankarray %d %d %d";
static const char long_spc576[]  = "Invalid rank in rank array at index %d; value is %d but must be in the range 0 to %d";
static const char short_spc577[] = "**rankdup %d %d %d";
static const char long_spc577[]  = "Duplicate ranks in rank array at index %d, has value %d which is also the value at index %d";
static const char short_spc578[] = "**ranklocal %d %d";
static const char long_spc578[]  = "Error specifying local_leader; rank given was %d but must be in the range 0 to %d";
static const char short_spc579[] = "**rankremote %d %d";
static const char long_spc579[]  = "Error specifying remote_leader; rank given was %d but must be in the range 0 to %d";
static const char short_spc580[] = "**rdmacminvalidport %d";
static const char long_spc580[]  = "Invalid port number (%d).";
static const char short_spc581[] = "**rdmacmmaxport %d %d %d";
static const char long_spc581[]  = "MV2_RDMA_CM_MAX_PORT value of %d is out of range (%d - %d).";
static const char short_spc582[] = "**rdmacmminport %d %d %d";
static const char long_spc582[]  = "MV2_RDMA_CM_MIN_PORT value of %d is out of range (%d - %d).";
static const char short_spc583[] = "**rdmacmportrange %d %d";
static const char long_spc583[]  = "Invalid port range of %d. The required range is %d.";
static const char short_spc584[] = "**read %d %s";
static const char long_spc584[]  = "read from socket failed - nread=%d %s";
static const char short_spc585[] = "**read %s";
static const char long_spc585[]  = "read from socket failed - %s";
static const char short_spc586[] = "**readv %d %s";
static const char long_spc586[]  = "readv failed - errno %d (%s)";
static const char short_spc587[] = "**recv_status %d";
static const char long_spc587[]  = "receive status failed %d";
static const char short_spc588[] = "**remove_shar_mem %s %s";
static const char long_spc588[]  = "unable to remove shared memory - %s %s";
static const char short_spc589[] = "**request %d";
static const char long_spc589[]  = "Invalid MPI_Request in array element %d (from 0)";
static const char short_spc590[] = "**request_invalid_kind %d";
static const char long_spc590[]  = "The supplied request was invalid (kind=%d)";
static const char short_spc591[] = "**request_invalid_kind %d %d";
static const char long_spc591[]  = "The supplied request in array element %d was invalid (kind=%d)";
static const char short_spc592[] = "**rmasize %d";
static const char long_spc592[]  = "Invalid size argument in RMA call (value is %d)";
static const char short_spc593[] = "**root %d";
static const char long_spc593[]  = "Invalid root (value given was %d)";
static const char short_spc594[] = "**rsendnomatch %d %d";
static const char long_spc594[]  = "Ready send from source %d and with tag %d had no matching receive";
static const char short_spc595[] = "**select %s %d";
static const char long_spc595[]  = " select of socket fds failed, %s (errno %d)";
static const char short_spc596[] = "**setsockopt %s %d";
static const char long_spc596[]  = "setsockopt failed, %s (errno %d)";
static const char short_spc597[] = "**shm_op %d";
static const char long_spc597[]  = "invalid shm operation (%d)";
static const char short_spc598[] = "**shm_open %s %d";
static const char long_spc598[]  = "unable to open shared memory object %s (errno %d)";
static const char short_spc599[] = "**shm_unlink %s %d";
static const char long_spc599[]  = "failed to unlink shared memory object %s, error %d";
static const char short_spc600[] = "**shmat %d";
static const char long_spc600[]  = "shmat failed, error %d";
static const char short_spc601[] = "**shmctl %d %d";
static const char long_spc601[]  = "failed to mark the sysv segment %d for removal, error %d";
static const char short_spc602[] = "**shmget %d";
static const char long_spc602[]  = "shmget failed, error %d";
static const char short_spc603[] = "**shmhost %s %s";
static const char long_spc603[]  = "process not on the same host (%s != %s)";
static const char short_spc604[] = "**shmq_index %d %d";
static const char long_spc604[]  = "invalid shm queue index (%d > %d)";
static const char short_spc605[] = "**shmsize %d";
static const char long_spc605[]  = "Shared memory subsystem unable to allocate a block of the requested size, %d bytes";
static const char short_spc606[] = "**shutdown %s %d";
static const char long_spc606[]  = "shutdown failed, %s (errno %d)";
static const char short_spc607[] = "**snprintf %d";
static const char long_spc607[]  = "snprintf returned %d";
static const char short_spc608[] = "**sock_accept %s";
static const char long_spc608[]  = "accept of socket fd failed - %s";
static const char short_spc609[] = "**sock_accept %s %d";
static const char long_spc609[]  = "accept failed, %s (errno %d) ";
static const char short_spc610[] = "**sock_close %s %d";
static const char long_spc610[]  = " close of socket failed, %s (errno %d)";
static const char short_spc611[] = "**sock_connect %d %s";
static const char long_spc611[]  = "connect failed - %s (errno %d)";
static const char short_spc612[] = "**sock_connect %s %d";
static const char long_spc612[]  = "connect failed - %s (errno %d)";
static const char short_spc613[] = "**sock_connect %s %d %s %d";
static const char long_spc613[]  = "unable to connect to %s on port %d, %s (errno %d)";
static const char short_spc614[] = "**sock_create %s %d";
static const char long_spc614[]  = "unable to create a socket, %s (errno %d)";
static const char short_spc615[] = "**sock_gethost %s %d";
static const char long_spc615[]  = "gethostname failed, %s (errno %d)";
static const char short_spc616[] = "**sock_read %s %d";
static const char long_spc616[]  = "read from socket failed, %s (errno %d)";
static const char short_spc617[] = "**sock_write %s %d";
static const char long_spc617[]  = " Unable to write to a socket, %s (errno %d)";
static const char short_spc618[] = "**socket %s %d";
static const char long_spc618[]  = "WSASocket failed, %s (errno %d)";
static const char short_spc619[] = "**sock|badiovn %d %d %d";
static const char long_spc619[]  = "size of iov is invalid (set=%d,sock=%d,iov_n=%d)";
static const char short_spc620[] = "**sock|badlen %d %d %d %d";
static const char long_spc620[]  = "bad length parameter(s) (set=%d,sock=%d,min=%d,max=%d)";
static const char short_spc621[] = "**sock|badport %d";
static const char long_spc621[]  = "port number is out of range (sock=%d)";
static const char short_spc622[] = "**sock|close_cancel %d %d";
static const char long_spc622[]  = "operation cancelled because sock was closed locally (set=%d,sock=%d)";
static const char short_spc623[] = "**sock|closing %d %d";
static const char long_spc623[]  = "sock is in the process of being closed locally (set=%d,sock=%d)";
static const char short_spc624[] = "**sock|closing_already %d %d";
static const char long_spc624[]  = "a close operation is already post (set=%d,sock=%d)";
static const char short_spc625[] = "**sock|connclosed %d %d";
static const char long_spc625[]  = "connection closed by peer (set=%d,sock=%d)";
static const char short_spc626[] = "**sock|listener_bad_sock %d %d";
static const char long_spc626[]  = "supplied sock is not a listener (set=%d,sock=%d)";
static const char short_spc627[] = "**sock|listener_bad_state %d %d %d";
static const char long_spc627[]  = "supplied listener sock is in a bad state (set=%d,sock=%d,state=%d)";
static const char short_spc628[] = "**sock|listener_read %d %d";
static const char long_spc628[]  = "read operation not allowed on a listener (set=%d,sock=%d)";
static const char short_spc629[] = "**sock|listener_write %d %d";
static const char long_spc629[]  = "write operation not allowed on a listener (set=%d,sock=%d)";
static const char short_spc630[] = "**sock|notconnected %d %d";
static const char long_spc630[]  = "sock is not connected (set=%d,sock=%d)";
static const char short_spc631[] = "**sock|osnomem %s %d %d";
static const char long_spc631[]  = "operating system routine %s failed due to lack of memory (set=%d,sock=%d)";
static const char short_spc632[] = "**sock|poll|accept %d %s";
static const char long_spc632[]  = "accept failed to acquire a new socket (errno=%d:%s)";
static const char short_spc633[] = "**sock|poll|badbuf %d %d %d %s";
static const char long_spc633[]  = "the supplied buffer contains invalid memory (set=%d,sock=%d,errno=%d:%s)";
static const char short_spc634[] = "**sock|poll|badhandle %d %d %d";
static const char long_spc634[]  = "sock contains an invalid file descriptor (set=%d,sock=%d,fd=%d)";
static const char short_spc635[] = "**sock|poll|badhandle %d %d %d %d";
static const char long_spc635[]  = "sock contains an invalid file descriptor (set=%d,sock=%d,fd=%d:%d)";
static const char short_spc636[] = "**sock|poll|bind %d %d %s";
static const char long_spc636[]  = "unable to bind socket to port (port=%d,errno=%d:%s)";
static const char short_spc637[] = "**sock|poll|connclosed %d %d %d %s";
static const char long_spc637[]  = "connection closed by peer (set=%d,sock=%d,errno=%d:%s)";
static const char short_spc638[] = "**sock|poll|connfailed %d %d %d %s";
static const char long_spc638[]  = "connection failure (set=%d,sock=%d,errno=%d:%s)";
static const char short_spc639[] = "**sock|poll|connrefused %d %d %s";
static const char long_spc639[]  = "connection refused (set=%d,sock=%d,host=%s)";
static const char short_spc640[] = "**sock|poll|eqfail %d %d %d";
static const char long_spc640[]  = "fatal error: failed to enqueue an event; event was lost (set=%d,sock=%d,op=%d)";
static const char short_spc641[] = "**sock|poll|getport %d %s";
static const char long_spc641[]  = "failed to obtain port number of listener (errno=%d:%s)";
static const char short_spc642[] = "**sock|poll|listen %d %s";
static const char long_spc642[]  = "listen() failed (errno=%d:%s)";
static const char short_spc643[] = "**sock|poll|nodelay %d %s";
static const char long_spc643[]  = "unable to set TCP no delay attribute on socket (errno=%d:%s)";
static const char short_spc644[] = "**sock|poll|nonblock %d %s";
static const char long_spc644[]  = "unable to set socket to nonblocking (errno=%d:%s)";
static const char short_spc645[] = "**sock|poll|oserror %d %d %d %s";
static const char long_spc645[]  = "unexpected operating system error (set=%d,sock=%d,errno=%d:%s)";
static const char short_spc646[] = "**sock|poll|oserror %d %s";
static const char long_spc646[]  = "unexpected operating system error (errno=%d:%s)";
static const char short_spc647[] = "**sock|poll|oserror %s %d %d %d %s";
static const char long_spc647[]  = "unpected operating system error from %s (set=%d,sock=%d,errno=%d:%s)";
static const char short_spc648[] = "**sock|poll|osnomem %d %d %d %s";
static const char long_spc648[]  = "operating system routine failed due to lack of memory (set=%d,sock=%d,errno=%d:%s)";
static const char short_spc649[] = "**sock|poll|pipe %d %s";
static const char long_spc649[]  = "unable to allocate pipe to wakeup a blocking poll() (errno=%d:%s)";
static const char short_spc650[] = "**sock|poll|pipenonblock %d %s";
static const char long_spc650[]  = "unable to set wakeup pipe to nonblocking (errno=%d:%s)";
static const char short_spc651[] = "**sock|poll|reuseaddr %d %s";
static const char long_spc651[]  = "unable to set reuseaddr attribute on socket (errno=%d:%s)";
static const char short_spc652[] = "**sock|poll|setrcvbufsz %d %d %s";
static const char long_spc652[]  = " unable to set the receive socket buffer size (size=%d,errno=%d:%s)";
static const char short_spc653[] = "**sock|poll|setsndbufsz %d %d %s";
static const char long_spc653[]  = " unable to set the send socket buffer size (size=%d,errno=%d:%s)";
static const char short_spc654[] = "**sock|poll|socket %d %s";
static const char long_spc654[]  = "unable to obtain new socket (errno=%d:%s)";
static const char short_spc655[] = "**sock|poll|unhandledstate %d";
static const char long_spc655[]  = "encountered an unexpected state (%d)";
static const char short_spc656[] = "**sock|poll|unhandledtype %d";
static const char long_spc656[]  = "encountered an unexpected sock type (%d)";
static const char short_spc657[] = "**sock|reads %d %d";
static const char long_spc657[]  = "attempt to perform multiple simultaneous reads (set=%d,sock=%d)";
static const char short_spc658[] = "**sock|writes %d %d";
static const char long_spc658[]  = "attempt to perform multiple simultaneous writes (set=%d,sock=%d)";
static const char short_spc659[] = "**stride %d %d %d";
static const char long_spc659[]  = "Range (start = %d, end = %d, stride = %d) does not terminate";
static const char short_spc660[] = "**subarrayoflow %L";
static const char long_spc660[]  = "Total size of array_of_sizes[] is %L which requires the MPI implementation to use a 64-bit MPI_Aint";
static const char short_spc661[] = "**tag %d";
static const char long_spc661[]  = "Invalid tag, value is %d";
static const char short_spc662[] = "**tempnam %d %s";
static const char long_spc662[]  = "tempnam failed - errno %d (%s)";
static const char short_spc663[] = "**tmpnam %s";
static const char long_spc663[]  = "tmpnam failed %s";
static const char short_spc664[] = "**topotoolarge %d %d";
static const char long_spc664[]  = "Topology size %d is larger than communicator size (%d)";
static const char short_spc665[] = "**truncate %d %d";
static const char long_spc665[]  = "Message truncated; %d bytes received but buffer size is %d";
static const char short_spc666[] = "**truncate %d %d %d %d";
static const char long_spc666[]  = "Message from rank %d and tag %d truncated; %d bytes received but buffer size is %d";
static const char short_spc667[] = "**typeinitbadmem %d";
static const char long_spc667[]  = "%dth builtin datatype handle references invalid memory";
static const char short_spc668[] = "**typeinitfail %d";
static const char long_spc668[]  = "Did not initialize name for all of the predefined datatypes (only did first %d)";
static const char short_spc669[] = "**typematchsize %s %d";
static const char long_spc669[]  = "No MPI datatype available for typeclass %s and size %d";
static const char short_spc670[] = "**typenamelen %d";
static const char long_spc670[]  = "Specified datatype name is too long (%d characters)";
static const char short_spc671[] = "**unableToLoadDLL %s %s";
static const char long_spc671[]  = " Unable to load the dynamically loadable library %s for reason %s";
static const char short_spc672[] = "**unableToLoadDLLsym %s %s";
static const char long_spc672[]  = " Unable to find or load the symbol %s from a dynamically loaded library for reason %s";
static const char short_spc673[] = "**unknowngpid %d %d";
static const char long_spc673[]  = "Internal MPI error: Unknown gpid (%d)%d";
static const char short_spc674[] = "**usercancel %d";
static const char long_spc674[]  = "user request cancel function returned error code %d";
static const char short_spc675[] = "**usercopy %d";
static const char long_spc675[]  = "user copy function returned error code %d";
static const char short_spc676[] = "**userdel %d";
static const char long_spc676[]  = "user delete function returned error code %d";
static const char short_spc677[] = "**userfree %d";
static const char long_spc677[]  = "user request free function returned error code %d";
static const char short_spc678[] = "**userquery %d";
static const char long_spc678[]  = "user request query function returned error code %d";
static const char short_spc679[] = "**vc_state %d";
static const char long_spc679[]  = "invalid vc state (%d)";
static const char short_spc680[] = "**vmsplice %d %s";
static const char long_spc680[]  = "vmsplice failed - errno %d (%s)";
static const char short_spc681[] = "**winunlockrank %d %d";
static const char long_spc681[]  = "Invalid rank argument %d, should be %d";
static const char short_spc682[] = "**write %s";
static const char long_spc682[]  = "write to socket failed - %s";
static const char short_spc683[] = "**writev %s";
static const char long_spc683[]  = "writev to socket failed - %s";
static const char short_spc684[] = "**wsacleanup %s %d";
static const char long_spc684[]  = " WSACleanup failed, %s (errno = %d)";
static const char short_spc685[] = "**wsasock %s %d";
static const char long_spc685[]  = "WSAStartup failed, %s (errno %d)";
static const char short_spc686[] = "**wsastartup %s %d";
static const char long_spc686[]  = " WSAStartup failed, %s (errno = %d)";

static const int specific_msgs_len = 687;
static const msgpair specific_err_msgs[] = {
{ 0xacebad03, short_spc0, long_spc0, 0xcb0bfa11 },
{ 0xacebad03, short_spc1, long_spc1, 0xcb0bfa11 },
{ 0xacebad03, short_spc2, long_spc2, 0xcb0bfa11 },
{ 0xacebad03, short_spc3, long_spc3, 0xcb0bfa11 },
{ 0xacebad03, short_spc4, long_spc4, 0xcb0bfa11 },
{ 0xacebad03, short_spc5, long_spc5, 0xcb0bfa11 },
{ 0xacebad03, short_spc6, long_spc6, 0xcb0bfa11 },
{ 0xacebad03, short_spc7, long_spc7, 0xcb0bfa11 },
{ 0xacebad03, short_spc8, long_spc8, 0xcb0bfa11 },
{ 0xacebad03, short_spc9, long_spc9, 0xcb0bfa11 },
{ 0xacebad03, short_spc10, long_spc10, 0xcb0bfa11 },
{ 0xacebad03, short_spc11, long_spc11, 0xcb0bfa11 },
{ 0xacebad03, short_spc12, long_spc12, 0xcb0bfa11 },
{ 0xacebad03, short_spc13, long_spc13, 0xcb0bfa11 },
{ 0xacebad03, short_spc14, long_spc14, 0xcb0bfa11 },
{ 0xacebad03, short_spc15, long_spc15, 0xcb0bfa11 },
{ 0xacebad03, short_spc16, long_spc16, 0xcb0bfa11 },
{ 0xacebad03, short_spc17, long_spc17, 0xcb0bfa11 },
{ 0xacebad03, short_spc18, long_spc18, 0xcb0bfa11 },
{ 0xacebad03, short_spc19, long_spc19, 0xcb0bfa11 },
{ 0xacebad03, short_spc20, long_spc20, 0xcb0bfa11 },
{ 0xacebad03, short_spc21, long_spc21, 0xcb0bfa11 },
{ 0xacebad03, short_spc22, long_spc22, 0xcb0bfa11 },
{ 0xacebad03, short_spc23, long_spc23, 0xcb0bfa11 },
{ 0xacebad03, short_spc24, long_spc24, 0xcb0bfa11 },
{ 0xacebad03, short_spc25, long_spc25, 0xcb0bfa11 },
{ 0xacebad03, short_spc26, long_spc26, 0xcb0bfa11 },
{ 0xacebad03, short_spc27, long_spc27, 0xcb0bfa11 },
{ 0xacebad03, short_spc28, long_spc28, 0xcb0bfa11 },
{ 0xacebad03, short_spc29, long_spc29, 0xcb0bfa11 },
{ 0xacebad03, short_spc30, long_spc30, 0xcb0bfa11 },
{ 0xacebad03, short_spc31, long_spc31, 0xcb0bfa11 },
{ 0xacebad03, short_spc32, long_spc32, 0xcb0bfa11 },
{ 0xacebad03, short_spc33, long_spc33, 0xcb0bfa11 },
{ 0xacebad03, short_spc34, long_spc34, 0xcb0bfa11 },
{ 0xacebad03, short_spc35, long_spc35, 0xcb0bfa11 },
{ 0xacebad03, short_spc36, long_spc36, 0xcb0bfa11 },
{ 0xacebad03, short_spc37, long_spc37, 0xcb0bfa11 },
{ 0xacebad03, short_spc38, long_spc38, 0xcb0bfa11 },
{ 0xacebad03, short_spc39, long_spc39, 0xcb0bfa11 },
{ 0xacebad03, short_spc40, long_spc40, 0xcb0bfa11 },
{ 0xacebad03, short_spc41, long_spc41, 0xcb0bfa11 },
{ 0xacebad03, short_spc42, long_spc42, 0xcb0bfa11 },
{ 0xacebad03, short_spc43, long_spc43, 0xcb0bfa11 },
{ 0xacebad03, short_spc44, long_spc44, 0xcb0bfa11 },
{ 0xacebad03, short_spc45, long_spc45, 0xcb0bfa11 },
{ 0xacebad03, short_spc46, long_spc46, 0xcb0bfa11 },
{ 0xacebad03, short_spc47, long_spc47, 0xcb0bfa11 },
{ 0xacebad03, short_spc48, long_spc48, 0xcb0bfa11 },
{ 0xacebad03, short_spc49, long_spc49, 0xcb0bfa11 },
{ 0xacebad03, short_spc50, long_spc50, 0xcb0bfa11 },
{ 0xacebad03, short_spc51, long_spc51, 0xcb0bfa11 },
{ 0xacebad03, short_spc52, long_spc52, 0xcb0bfa11 },
{ 0xacebad03, short_spc53, long_spc53, 0xcb0bfa11 },
{ 0xacebad03, short_spc54, long_spc54, 0xcb0bfa11 },
{ 0xacebad03, short_spc55, long_spc55, 0xcb0bfa11 },
{ 0xacebad03, short_spc56, long_spc56, 0xcb0bfa11 },
{ 0xacebad03, short_spc57, long_spc57, 0xcb0bfa11 },
{ 0xacebad03, short_spc58, long_spc58, 0xcb0bfa11 },
{ 0xacebad03, short_spc59, long_spc59, 0xcb0bfa11 },
{ 0xacebad03, short_spc60, long_spc60, 0xcb0bfa11 },
{ 0xacebad03, short_spc61, long_spc61, 0xcb0bfa11 },
{ 0xacebad03, short_spc62, long_spc62, 0xcb0bfa11 },
{ 0xacebad03, short_spc63, long_spc63, 0xcb0bfa11 },
{ 0xacebad03, short_spc64, long_spc64, 0xcb0bfa11 },
{ 0xacebad03, short_spc65, long_spc65, 0xcb0bfa11 },
{ 0xacebad03, short_spc66, long_spc66, 0xcb0bfa11 },
{ 0xacebad03, short_spc67, long_spc67, 0xcb0bfa11 },
{ 0xacebad03, short_spc68, long_spc68, 0xcb0bfa11 },
{ 0xacebad03, short_spc69, long_spc69, 0xcb0bfa11 },
{ 0xacebad03, short_spc70, long_spc70, 0xcb0bfa11 },
{ 0xacebad03, short_spc71, long_spc71, 0xcb0bfa11 },
{ 0xacebad03, short_spc72, long_spc72, 0xcb0bfa11 },
{ 0xacebad03, short_spc73, long_spc73, 0xcb0bfa11 },
{ 0xacebad03, short_spc74, long_spc74, 0xcb0bfa11 },
{ 0xacebad03, short_spc75, long_spc75, 0xcb0bfa11 },
{ 0xacebad03, short_spc76, long_spc76, 0xcb0bfa11 },
{ 0xacebad03, short_spc77, long_spc77, 0xcb0bfa11 },
{ 0xacebad03, short_spc78, long_spc78, 0xcb0bfa11 },
{ 0xacebad03, short_spc79, long_spc79, 0xcb0bfa11 },
{ 0xacebad03, short_spc80, long_spc80, 0xcb0bfa11 },
{ 0xacebad03, short_spc81, long_spc81, 0xcb0bfa11 },
{ 0xacebad03, short_spc82, long_spc82, 0xcb0bfa11 },
{ 0xacebad03, short_spc83, long_spc83, 0xcb0bfa11 },
{ 0xacebad03, short_spc84, long_spc84, 0xcb0bfa11 },
{ 0xacebad03, short_spc85, long_spc85, 0xcb0bfa11 },
{ 0xacebad03, short_spc86, long_spc86, 0xcb0bfa11 },
{ 0xacebad03, short_spc87, long_spc87, 0xcb0bfa11 },
{ 0xacebad03, short_spc88, long_spc88, 0xcb0bfa11 },
{ 0xacebad03, short_spc89, long_spc89, 0xcb0bfa11 },
{ 0xacebad03, short_spc90, long_spc90, 0xcb0bfa11 },
{ 0xacebad03, short_spc91, long_spc91, 0xcb0bfa11 },
{ 0xacebad03, short_spc92, long_spc92, 0xcb0bfa11 },
{ 0xacebad03, short_spc93, long_spc93, 0xcb0bfa11 },
{ 0xacebad03, short_spc94, long_spc94, 0xcb0bfa11 },
{ 0xacebad03, short_spc95, long_spc95, 0xcb0bfa11 },
{ 0xacebad03, short_spc96, long_spc96, 0xcb0bfa11 },
{ 0xacebad03, short_spc97, long_spc97, 0xcb0bfa11 },
{ 0xacebad03, short_spc98, long_spc98, 0xcb0bfa11 },
{ 0xacebad03, short_spc99, long_spc99, 0xcb0bfa11 },
{ 0xacebad03, short_spc100, long_spc100, 0xcb0bfa11 },
{ 0xacebad03, short_spc101, long_spc101, 0xcb0bfa11 },
{ 0xacebad03, short_spc102, long_spc102, 0xcb0bfa11 },
{ 0xacebad03, short_spc103, long_spc103, 0xcb0bfa11 },
{ 0xacebad03, short_spc104, long_spc104, 0xcb0bfa11 },
{ 0xacebad03, short_spc105, long_spc105, 0xcb0bfa11 },
{ 0xacebad03, short_spc106, long_spc106, 0xcb0bfa11 },
{ 0xacebad03, short_spc107, long_spc107, 0xcb0bfa11 },
{ 0xacebad03, short_spc108, long_spc108, 0xcb0bfa11 },
{ 0xacebad03, short_spc109, long_spc109, 0xcb0bfa11 },
{ 0xacebad03, short_spc110, long_spc110, 0xcb0bfa11 },
{ 0xacebad03, short_spc111, long_spc111, 0xcb0bfa11 },
{ 0xacebad03, short_spc112, long_spc112, 0xcb0bfa11 },
{ 0xacebad03, short_spc113, long_spc113, 0xcb0bfa11 },
{ 0xacebad03, short_spc114, long_spc114, 0xcb0bfa11 },
{ 0xacebad03, short_spc115, long_spc115, 0xcb0bfa11 },
{ 0xacebad03, short_spc116, long_spc116, 0xcb0bfa11 },
{ 0xacebad03, short_spc117, long_spc117, 0xcb0bfa11 },
{ 0xacebad03, short_spc118, long_spc118, 0xcb0bfa11 },
{ 0xacebad03, short_spc119, long_spc119, 0xcb0bfa11 },
{ 0xacebad03, short_spc120, long_spc120, 0xcb0bfa11 },
{ 0xacebad03, short_spc121, long_spc121, 0xcb0bfa11 },
{ 0xacebad03, short_spc122, long_spc122, 0xcb0bfa11 },
{ 0xacebad03, short_spc123, long_spc123, 0xcb0bfa11 },
{ 0xacebad03, short_spc124, long_spc124, 0xcb0bfa11 },
{ 0xacebad03, short_spc125, long_spc125, 0xcb0bfa11 },
{ 0xacebad03, short_spc126, long_spc126, 0xcb0bfa11 },
{ 0xacebad03, short_spc127, long_spc127, 0xcb0bfa11 },
{ 0xacebad03, short_spc128, long_spc128, 0xcb0bfa11 },
{ 0xacebad03, short_spc129, long_spc129, 0xcb0bfa11 },
{ 0xacebad03, short_spc130, long_spc130, 0xcb0bfa11 },
{ 0xacebad03, short_spc131, long_spc131, 0xcb0bfa11 },
{ 0xacebad03, short_spc132, long_spc132, 0xcb0bfa11 },
{ 0xacebad03, short_spc133, long_spc133, 0xcb0bfa11 },
{ 0xacebad03, short_spc134, long_spc134, 0xcb0bfa11 },
{ 0xacebad03, short_spc135, long_spc135, 0xcb0bfa11 },
{ 0xacebad03, short_spc136, long_spc136, 0xcb0bfa11 },
{ 0xacebad03, short_spc137, long_spc137, 0xcb0bfa11 },
{ 0xacebad03, short_spc138, long_spc138, 0xcb0bfa11 },
{ 0xacebad03, short_spc139, long_spc139, 0xcb0bfa11 },
{ 0xacebad03, short_spc140, long_spc140, 0xcb0bfa11 },
{ 0xacebad03, short_spc141, long_spc141, 0xcb0bfa11 },
{ 0xacebad03, short_spc142, long_spc142, 0xcb0bfa11 },
{ 0xacebad03, short_spc143, long_spc143, 0xcb0bfa11 },
{ 0xacebad03, short_spc144, long_spc144, 0xcb0bfa11 },
{ 0xacebad03, short_spc145, long_spc145, 0xcb0bfa11 },
{ 0xacebad03, short_spc146, long_spc146, 0xcb0bfa11 },
{ 0xacebad03, short_spc147, long_spc147, 0xcb0bfa11 },
{ 0xacebad03, short_spc148, long_spc148, 0xcb0bfa11 },
{ 0xacebad03, short_spc149, long_spc149, 0xcb0bfa11 },
{ 0xacebad03, short_spc150, long_spc150, 0xcb0bfa11 },
{ 0xacebad03, short_spc151, long_spc151, 0xcb0bfa11 },
{ 0xacebad03, short_spc152, long_spc152, 0xcb0bfa11 },
{ 0xacebad03, short_spc153, long_spc153, 0xcb0bfa11 },
{ 0xacebad03, short_spc154, long_spc154, 0xcb0bfa11 },
{ 0xacebad03, short_spc155, long_spc155, 0xcb0bfa11 },
{ 0xacebad03, short_spc156, long_spc156, 0xcb0bfa11 },
{ 0xacebad03, short_spc157, long_spc157, 0xcb0bfa11 },
{ 0xacebad03, short_spc158, long_spc158, 0xcb0bfa11 },
{ 0xacebad03, short_spc159, long_spc159, 0xcb0bfa11 },
{ 0xacebad03, short_spc160, long_spc160, 0xcb0bfa11 },
{ 0xacebad03, short_spc161, long_spc161, 0xcb0bfa11 },
{ 0xacebad03, short_spc162, long_spc162, 0xcb0bfa11 },
{ 0xacebad03, short_spc163, long_spc163, 0xcb0bfa11 },
{ 0xacebad03, short_spc164, long_spc164, 0xcb0bfa11 },
{ 0xacebad03, short_spc165, long_spc165, 0xcb0bfa11 },
{ 0xacebad03, short_spc166, long_spc166, 0xcb0bfa11 },
{ 0xacebad03, short_spc167, long_spc167, 0xcb0bfa11 },
{ 0xacebad03, short_spc168, long_spc168, 0xcb0bfa11 },
{ 0xacebad03, short_spc169, long_spc169, 0xcb0bfa11 },
{ 0xacebad03, short_spc170, long_spc170, 0xcb0bfa11 },
{ 0xacebad03, short_spc171, long_spc171, 0xcb0bfa11 },
{ 0xacebad03, short_spc172, long_spc172, 0xcb0bfa11 },
{ 0xacebad03, short_spc173, long_spc173, 0xcb0bfa11 },
{ 0xacebad03, short_spc174, long_spc174, 0xcb0bfa11 },
{ 0xacebad03, short_spc175, long_spc175, 0xcb0bfa11 },
{ 0xacebad03, short_spc176, long_spc176, 0xcb0bfa11 },
{ 0xacebad03, short_spc177, long_spc177, 0xcb0bfa11 },
{ 0xacebad03, short_spc178, long_spc178, 0xcb0bfa11 },
{ 0xacebad03, short_spc179, long_spc179, 0xcb0bfa11 },
{ 0xacebad03, short_spc180, long_spc180, 0xcb0bfa11 },
{ 0xacebad03, short_spc181, long_spc181, 0xcb0bfa11 },
{ 0xacebad03, short_spc182, long_spc182, 0xcb0bfa11 },
{ 0xacebad03, short_spc183, long_spc183, 0xcb0bfa11 },
{ 0xacebad03, short_spc184, long_spc184, 0xcb0bfa11 },
{ 0xacebad03, short_spc185, long_spc185, 0xcb0bfa11 },
{ 0xacebad03, short_spc186, long_spc186, 0xcb0bfa11 },
{ 0xacebad03, short_spc187, long_spc187, 0xcb0bfa11 },
{ 0xacebad03, short_spc188, long_spc188, 0xcb0bfa11 },
{ 0xacebad03, short_spc189, long_spc189, 0xcb0bfa11 },
{ 0xacebad03, short_spc190, long_spc190, 0xcb0bfa11 },
{ 0xacebad03, short_spc191, long_spc191, 0xcb0bfa11 },
{ 0xacebad03, short_spc192, long_spc192, 0xcb0bfa11 },
{ 0xacebad03, short_spc193, long_spc193, 0xcb0bfa11 },
{ 0xacebad03, short_spc194, long_spc194, 0xcb0bfa11 },
{ 0xacebad03, short_spc195, long_spc195, 0xcb0bfa11 },
{ 0xacebad03, short_spc196, long_spc196, 0xcb0bfa11 },
{ 0xacebad03, short_spc197, long_spc197, 0xcb0bfa11 },
{ 0xacebad03, short_spc198, long_spc198, 0xcb0bfa11 },
{ 0xacebad03, short_spc199, long_spc199, 0xcb0bfa11 },
{ 0xacebad03, short_spc200, long_spc200, 0xcb0bfa11 },
{ 0xacebad03, short_spc201, long_spc201, 0xcb0bfa11 },
{ 0xacebad03, short_spc202, long_spc202, 0xcb0bfa11 },
{ 0xacebad03, short_spc203, long_spc203, 0xcb0bfa11 },
{ 0xacebad03, short_spc204, long_spc204, 0xcb0bfa11 },
{ 0xacebad03, short_spc205, long_spc205, 0xcb0bfa11 },
{ 0xacebad03, short_spc206, long_spc206, 0xcb0bfa11 },
{ 0xacebad03, short_spc207, long_spc207, 0xcb0bfa11 },
{ 0xacebad03, short_spc208, long_spc208, 0xcb0bfa11 },
{ 0xacebad03, short_spc209, long_spc209, 0xcb0bfa11 },
{ 0xacebad03, short_spc210, long_spc210, 0xcb0bfa11 },
{ 0xacebad03, short_spc211, long_spc211, 0xcb0bfa11 },
{ 0xacebad03, short_spc212, long_spc212, 0xcb0bfa11 },
{ 0xacebad03, short_spc213, long_spc213, 0xcb0bfa11 },
{ 0xacebad03, short_spc214, long_spc214, 0xcb0bfa11 },
{ 0xacebad03, short_spc215, long_spc215, 0xcb0bfa11 },
{ 0xacebad03, short_spc216, long_spc216, 0xcb0bfa11 },
{ 0xacebad03, short_spc217, long_spc217, 0xcb0bfa11 },
{ 0xacebad03, short_spc218, long_spc218, 0xcb0bfa11 },
{ 0xacebad03, short_spc219, long_spc219, 0xcb0bfa11 },
{ 0xacebad03, short_spc220, long_spc220, 0xcb0bfa11 },
{ 0xacebad03, short_spc221, long_spc221, 0xcb0bfa11 },
{ 0xacebad03, short_spc222, long_spc222, 0xcb0bfa11 },
{ 0xacebad03, short_spc223, long_spc223, 0xcb0bfa11 },
{ 0xacebad03, short_spc224, long_spc224, 0xcb0bfa11 },
{ 0xacebad03, short_spc225, long_spc225, 0xcb0bfa11 },
{ 0xacebad03, short_spc226, long_spc226, 0xcb0bfa11 },
{ 0xacebad03, short_spc227, long_spc227, 0xcb0bfa11 },
{ 0xacebad03, short_spc228, long_spc228, 0xcb0bfa11 },
{ 0xacebad03, short_spc229, long_spc229, 0xcb0bfa11 },
{ 0xacebad03, short_spc230, long_spc230, 0xcb0bfa11 },
{ 0xacebad03, short_spc231, long_spc231, 0xcb0bfa11 },
{ 0xacebad03, short_spc232, long_spc232, 0xcb0bfa11 },
{ 0xacebad03, short_spc233, long_spc233, 0xcb0bfa11 },
{ 0xacebad03, short_spc234, long_spc234, 0xcb0bfa11 },
{ 0xacebad03, short_spc235, long_spc235, 0xcb0bfa11 },
{ 0xacebad03, short_spc236, long_spc236, 0xcb0bfa11 },
{ 0xacebad03, short_spc237, long_spc237, 0xcb0bfa11 },
{ 0xacebad03, short_spc238, long_spc238, 0xcb0bfa11 },
{ 0xacebad03, short_spc239, long_spc239, 0xcb0bfa11 },
{ 0xacebad03, short_spc240, long_spc240, 0xcb0bfa11 },
{ 0xacebad03, short_spc241, long_spc241, 0xcb0bfa11 },
{ 0xacebad03, short_spc242, long_spc242, 0xcb0bfa11 },
{ 0xacebad03, short_spc243, long_spc243, 0xcb0bfa11 },
{ 0xacebad03, short_spc244, long_spc244, 0xcb0bfa11 },
{ 0xacebad03, short_spc245, long_spc245, 0xcb0bfa11 },
{ 0xacebad03, short_spc246, long_spc246, 0xcb0bfa11 },
{ 0xacebad03, short_spc247, long_spc247, 0xcb0bfa11 },
{ 0xacebad03, short_spc248, long_spc248, 0xcb0bfa11 },
{ 0xacebad03, short_spc249, long_spc249, 0xcb0bfa11 },
{ 0xacebad03, short_spc250, long_spc250, 0xcb0bfa11 },
{ 0xacebad03, short_spc251, long_spc251, 0xcb0bfa11 },
{ 0xacebad03, short_spc252, long_spc252, 0xcb0bfa11 },
{ 0xacebad03, short_spc253, long_spc253, 0xcb0bfa11 },
{ 0xacebad03, short_spc254, long_spc254, 0xcb0bfa11 },
{ 0xacebad03, short_spc255, long_spc255, 0xcb0bfa11 },
{ 0xacebad03, short_spc256, long_spc256, 0xcb0bfa11 },
{ 0xacebad03, short_spc257, long_spc257, 0xcb0bfa11 },
{ 0xacebad03, short_spc258, long_spc258, 0xcb0bfa11 },
{ 0xacebad03, short_spc259, long_spc259, 0xcb0bfa11 },
{ 0xacebad03, short_spc260, long_spc260, 0xcb0bfa11 },
{ 0xacebad03, short_spc261, long_spc261, 0xcb0bfa11 },
{ 0xacebad03, short_spc262, long_spc262, 0xcb0bfa11 },
{ 0xacebad03, short_spc263, long_spc263, 0xcb0bfa11 },
{ 0xacebad03, short_spc264, long_spc264, 0xcb0bfa11 },
{ 0xacebad03, short_spc265, long_spc265, 0xcb0bfa11 },
{ 0xacebad03, short_spc266, long_spc266, 0xcb0bfa11 },
{ 0xacebad03, short_spc267, long_spc267, 0xcb0bfa11 },
{ 0xacebad03, short_spc268, long_spc268, 0xcb0bfa11 },
{ 0xacebad03, short_spc269, long_spc269, 0xcb0bfa11 },
{ 0xacebad03, short_spc270, long_spc270, 0xcb0bfa11 },
{ 0xacebad03, short_spc271, long_spc271, 0xcb0bfa11 },
{ 0xacebad03, short_spc272, long_spc272, 0xcb0bfa11 },
{ 0xacebad03, short_spc273, long_spc273, 0xcb0bfa11 },
{ 0xacebad03, short_spc274, long_spc274, 0xcb0bfa11 },
{ 0xacebad03, short_spc275, long_spc275, 0xcb0bfa11 },
{ 0xacebad03, short_spc276, long_spc276, 0xcb0bfa11 },
{ 0xacebad03, short_spc277, long_spc277, 0xcb0bfa11 },
{ 0xacebad03, short_spc278, long_spc278, 0xcb0bfa11 },
{ 0xacebad03, short_spc279, long_spc279, 0xcb0bfa11 },
{ 0xacebad03, short_spc280, long_spc280, 0xcb0bfa11 },
{ 0xacebad03, short_spc281, long_spc281, 0xcb0bfa11 },
{ 0xacebad03, short_spc282, long_spc282, 0xcb0bfa11 },
{ 0xacebad03, short_spc283, long_spc283, 0xcb0bfa11 },
{ 0xacebad03, short_spc284, long_spc284, 0xcb0bfa11 },
{ 0xacebad03, short_spc285, long_spc285, 0xcb0bfa11 },
{ 0xacebad03, short_spc286, long_spc286, 0xcb0bfa11 },
{ 0xacebad03, short_spc287, long_spc287, 0xcb0bfa11 },
{ 0xacebad03, short_spc288, long_spc288, 0xcb0bfa11 },
{ 0xacebad03, short_spc289, long_spc289, 0xcb0bfa11 },
{ 0xacebad03, short_spc290, long_spc290, 0xcb0bfa11 },
{ 0xacebad03, short_spc291, long_spc291, 0xcb0bfa11 },
{ 0xacebad03, short_spc292, long_spc292, 0xcb0bfa11 },
{ 0xacebad03, short_spc293, long_spc293, 0xcb0bfa11 },
{ 0xacebad03, short_spc294, long_spc294, 0xcb0bfa11 },
{ 0xacebad03, short_spc295, long_spc295, 0xcb0bfa11 },
{ 0xacebad03, short_spc296, long_spc296, 0xcb0bfa11 },
{ 0xacebad03, short_spc297, long_spc297, 0xcb0bfa11 },
{ 0xacebad03, short_spc298, long_spc298, 0xcb0bfa11 },
{ 0xacebad03, short_spc299, long_spc299, 0xcb0bfa11 },
{ 0xacebad03, short_spc300, long_spc300, 0xcb0bfa11 },
{ 0xacebad03, short_spc301, long_spc301, 0xcb0bfa11 },
{ 0xacebad03, short_spc302, long_spc302, 0xcb0bfa11 },
{ 0xacebad03, short_spc303, long_spc303, 0xcb0bfa11 },
{ 0xacebad03, short_spc304, long_spc304, 0xcb0bfa11 },
{ 0xacebad03, short_spc305, long_spc305, 0xcb0bfa11 },
{ 0xacebad03, short_spc306, long_spc306, 0xcb0bfa11 },
{ 0xacebad03, short_spc307, long_spc307, 0xcb0bfa11 },
{ 0xacebad03, short_spc308, long_spc308, 0xcb0bfa11 },
{ 0xacebad03, short_spc309, long_spc309, 0xcb0bfa11 },
{ 0xacebad03, short_spc310, long_spc310, 0xcb0bfa11 },
{ 0xacebad03, short_spc311, long_spc311, 0xcb0bfa11 },
{ 0xacebad03, short_spc312, long_spc312, 0xcb0bfa11 },
{ 0xacebad03, short_spc313, long_spc313, 0xcb0bfa11 },
{ 0xacebad03, short_spc314, long_spc314, 0xcb0bfa11 },
{ 0xacebad03, short_spc315, long_spc315, 0xcb0bfa11 },
{ 0xacebad03, short_spc316, long_spc316, 0xcb0bfa11 },
{ 0xacebad03, short_spc317, long_spc317, 0xcb0bfa11 },
{ 0xacebad03, short_spc318, long_spc318, 0xcb0bfa11 },
{ 0xacebad03, short_spc319, long_spc319, 0xcb0bfa11 },
{ 0xacebad03, short_spc320, long_spc320, 0xcb0bfa11 },
{ 0xacebad03, short_spc321, long_spc321, 0xcb0bfa11 },
{ 0xacebad03, short_spc322, long_spc322, 0xcb0bfa11 },
{ 0xacebad03, short_spc323, long_spc323, 0xcb0bfa11 },
{ 0xacebad03, short_spc324, long_spc324, 0xcb0bfa11 },
{ 0xacebad03, short_spc325, long_spc325, 0xcb0bfa11 },
{ 0xacebad03, short_spc326, long_spc326, 0xcb0bfa11 },
{ 0xacebad03, short_spc327, long_spc327, 0xcb0bfa11 },
{ 0xacebad03, short_spc328, long_spc328, 0xcb0bfa11 },
{ 0xacebad03, short_spc329, long_spc329, 0xcb0bfa11 },
{ 0xacebad03, short_spc330, long_spc330, 0xcb0bfa11 },
{ 0xacebad03, short_spc331, long_spc331, 0xcb0bfa11 },
{ 0xacebad03, short_spc332, long_spc332, 0xcb0bfa11 },
{ 0xacebad03, short_spc333, long_spc333, 0xcb0bfa11 },
{ 0xacebad03, short_spc334, long_spc334, 0xcb0bfa11 },
{ 0xacebad03, short_spc335, long_spc335, 0xcb0bfa11 },
{ 0xacebad03, short_spc336, long_spc336, 0xcb0bfa11 },
{ 0xacebad03, short_spc337, long_spc337, 0xcb0bfa11 },
{ 0xacebad03, short_spc338, long_spc338, 0xcb0bfa11 },
{ 0xacebad03, short_spc339, long_spc339, 0xcb0bfa11 },
{ 0xacebad03, short_spc340, long_spc340, 0xcb0bfa11 },
{ 0xacebad03, short_spc341, long_spc341, 0xcb0bfa11 },
{ 0xacebad03, short_spc342, long_spc342, 0xcb0bfa11 },
{ 0xacebad03, short_spc343, long_spc343, 0xcb0bfa11 },
{ 0xacebad03, short_spc344, long_spc344, 0xcb0bfa11 },
{ 0xacebad03, short_spc345, long_spc345, 0xcb0bfa11 },
{ 0xacebad03, short_spc346, long_spc346, 0xcb0bfa11 },
{ 0xacebad03, short_spc347, long_spc347, 0xcb0bfa11 },
{ 0xacebad03, short_spc348, long_spc348, 0xcb0bfa11 },
{ 0xacebad03, short_spc349, long_spc349, 0xcb0bfa11 },
{ 0xacebad03, short_spc350, long_spc350, 0xcb0bfa11 },
{ 0xacebad03, short_spc351, long_spc351, 0xcb0bfa11 },
{ 0xacebad03, short_spc352, long_spc352, 0xcb0bfa11 },
{ 0xacebad03, short_spc353, long_spc353, 0xcb0bfa11 },
{ 0xacebad03, short_spc354, long_spc354, 0xcb0bfa11 },
{ 0xacebad03, short_spc355, long_spc355, 0xcb0bfa11 },
{ 0xacebad03, short_spc356, long_spc356, 0xcb0bfa11 },
{ 0xacebad03, short_spc357, long_spc357, 0xcb0bfa11 },
{ 0xacebad03, short_spc358, long_spc358, 0xcb0bfa11 },
{ 0xacebad03, short_spc359, long_spc359, 0xcb0bfa11 },
{ 0xacebad03, short_spc360, long_spc360, 0xcb0bfa11 },
{ 0xacebad03, short_spc361, long_spc361, 0xcb0bfa11 },
{ 0xacebad03, short_spc362, long_spc362, 0xcb0bfa11 },
{ 0xacebad03, short_spc363, long_spc363, 0xcb0bfa11 },
{ 0xacebad03, short_spc364, long_spc364, 0xcb0bfa11 },
{ 0xacebad03, short_spc365, long_spc365, 0xcb0bfa11 },
{ 0xacebad03, short_spc366, long_spc366, 0xcb0bfa11 },
{ 0xacebad03, short_spc367, long_spc367, 0xcb0bfa11 },
{ 0xacebad03, short_spc368, long_spc368, 0xcb0bfa11 },
{ 0xacebad03, short_spc369, long_spc369, 0xcb0bfa11 },
{ 0xacebad03, short_spc370, long_spc370, 0xcb0bfa11 },
{ 0xacebad03, short_spc371, long_spc371, 0xcb0bfa11 },
{ 0xacebad03, short_spc372, long_spc372, 0xcb0bfa11 },
{ 0xacebad03, short_spc373, long_spc373, 0xcb0bfa11 },
{ 0xacebad03, short_spc374, long_spc374, 0xcb0bfa11 },
{ 0xacebad03, short_spc375, long_spc375, 0xcb0bfa11 },
{ 0xacebad03, short_spc376, long_spc376, 0xcb0bfa11 },
{ 0xacebad03, short_spc377, long_spc377, 0xcb0bfa11 },
{ 0xacebad03, short_spc378, long_spc378, 0xcb0bfa11 },
{ 0xacebad03, short_spc379, long_spc379, 0xcb0bfa11 },
{ 0xacebad03, short_spc380, long_spc380, 0xcb0bfa11 },
{ 0xacebad03, short_spc381, long_spc381, 0xcb0bfa11 },
{ 0xacebad03, short_spc382, long_spc382, 0xcb0bfa11 },
{ 0xacebad03, short_spc383, long_spc383, 0xcb0bfa11 },
{ 0xacebad03, short_spc384, long_spc384, 0xcb0bfa11 },
{ 0xacebad03, short_spc385, long_spc385, 0xcb0bfa11 },
{ 0xacebad03, short_spc386, long_spc386, 0xcb0bfa11 },
{ 0xacebad03, short_spc387, long_spc387, 0xcb0bfa11 },
{ 0xacebad03, short_spc388, long_spc388, 0xcb0bfa11 },
{ 0xacebad03, short_spc389, long_spc389, 0xcb0bfa11 },
{ 0xacebad03, short_spc390, long_spc390, 0xcb0bfa11 },
{ 0xacebad03, short_spc391, long_spc391, 0xcb0bfa11 },
{ 0xacebad03, short_spc392, long_spc392, 0xcb0bfa11 },
{ 0xacebad03, short_spc393, long_spc393, 0xcb0bfa11 },
{ 0xacebad03, short_spc394, long_spc394, 0xcb0bfa11 },
{ 0xacebad03, short_spc395, long_spc395, 0xcb0bfa11 },
{ 0xacebad03, short_spc396, long_spc396, 0xcb0bfa11 },
{ 0xacebad03, short_spc397, long_spc397, 0xcb0bfa11 },
{ 0xacebad03, short_spc398, long_spc398, 0xcb0bfa11 },
{ 0xacebad03, short_spc399, long_spc399, 0xcb0bfa11 },
{ 0xacebad03, short_spc400, long_spc400, 0xcb0bfa11 },
{ 0xacebad03, short_spc401, long_spc401, 0xcb0bfa11 },
{ 0xacebad03, short_spc402, long_spc402, 0xcb0bfa11 },
{ 0xacebad03, short_spc403, long_spc403, 0xcb0bfa11 },
{ 0xacebad03, short_spc404, long_spc404, 0xcb0bfa11 },
{ 0xacebad03, short_spc405, long_spc405, 0xcb0bfa11 },
{ 0xacebad03, short_spc406, long_spc406, 0xcb0bfa11 },
{ 0xacebad03, short_spc407, long_spc407, 0xcb0bfa11 },
{ 0xacebad03, short_spc408, long_spc408, 0xcb0bfa11 },
{ 0xacebad03, short_spc409, long_spc409, 0xcb0bfa11 },
{ 0xacebad03, short_spc410, long_spc410, 0xcb0bfa11 },
{ 0xacebad03, short_spc411, long_spc411, 0xcb0bfa11 },
{ 0xacebad03, short_spc412, long_spc412, 0xcb0bfa11 },
{ 0xacebad03, short_spc413, long_spc413, 0xcb0bfa11 },
{ 0xacebad03, short_spc414, long_spc414, 0xcb0bfa11 },
{ 0xacebad03, short_spc415, long_spc415, 0xcb0bfa11 },
{ 0xacebad03, short_spc416, long_spc416, 0xcb0bfa11 },
{ 0xacebad03, short_spc417, long_spc417, 0xcb0bfa11 },
{ 0xacebad03, short_spc418, long_spc418, 0xcb0bfa11 },
{ 0xacebad03, short_spc419, long_spc419, 0xcb0bfa11 },
{ 0xacebad03, short_spc420, long_spc420, 0xcb0bfa11 },
{ 0xacebad03, short_spc421, long_spc421, 0xcb0bfa11 },
{ 0xacebad03, short_spc422, long_spc422, 0xcb0bfa11 },
{ 0xacebad03, short_spc423, long_spc423, 0xcb0bfa11 },
{ 0xacebad03, short_spc424, long_spc424, 0xcb0bfa11 },
{ 0xacebad03, short_spc425, long_spc425, 0xcb0bfa11 },
{ 0xacebad03, short_spc426, long_spc426, 0xcb0bfa11 },
{ 0xacebad03, short_spc427, long_spc427, 0xcb0bfa11 },
{ 0xacebad03, short_spc428, long_spc428, 0xcb0bfa11 },
{ 0xacebad03, short_spc429, long_spc429, 0xcb0bfa11 },
{ 0xacebad03, short_spc430, long_spc430, 0xcb0bfa11 },
{ 0xacebad03, short_spc431, long_spc431, 0xcb0bfa11 },
{ 0xacebad03, short_spc432, long_spc432, 0xcb0bfa11 },
{ 0xacebad03, short_spc433, long_spc433, 0xcb0bfa11 },
{ 0xacebad03, short_spc434, long_spc434, 0xcb0bfa11 },
{ 0xacebad03, short_spc435, long_spc435, 0xcb0bfa11 },
{ 0xacebad03, short_spc436, long_spc436, 0xcb0bfa11 },
{ 0xacebad03, short_spc437, long_spc437, 0xcb0bfa11 },
{ 0xacebad03, short_spc438, long_spc438, 0xcb0bfa11 },
{ 0xacebad03, short_spc439, long_spc439, 0xcb0bfa11 },
{ 0xacebad03, short_spc440, long_spc440, 0xcb0bfa11 },
{ 0xacebad03, short_spc441, long_spc441, 0xcb0bfa11 },
{ 0xacebad03, short_spc442, long_spc442, 0xcb0bfa11 },
{ 0xacebad03, short_spc443, long_spc443, 0xcb0bfa11 },
{ 0xacebad03, short_spc444, long_spc444, 0xcb0bfa11 },
{ 0xacebad03, short_spc445, long_spc445, 0xcb0bfa11 },
{ 0xacebad03, short_spc446, long_spc446, 0xcb0bfa11 },
{ 0xacebad03, short_spc447, long_spc447, 0xcb0bfa11 },
{ 0xacebad03, short_spc448, long_spc448, 0xcb0bfa11 },
{ 0xacebad03, short_spc449, long_spc449, 0xcb0bfa11 },
{ 0xacebad03, short_spc450, long_spc450, 0xcb0bfa11 },
{ 0xacebad03, short_spc451, long_spc451, 0xcb0bfa11 },
{ 0xacebad03, short_spc452, long_spc452, 0xcb0bfa11 },
{ 0xacebad03, short_spc453, long_spc453, 0xcb0bfa11 },
{ 0xacebad03, short_spc454, long_spc454, 0xcb0bfa11 },
{ 0xacebad03, short_spc455, long_spc455, 0xcb0bfa11 },
{ 0xacebad03, short_spc456, long_spc456, 0xcb0bfa11 },
{ 0xacebad03, short_spc457, long_spc457, 0xcb0bfa11 },
{ 0xacebad03, short_spc458, long_spc458, 0xcb0bfa11 },
{ 0xacebad03, short_spc459, long_spc459, 0xcb0bfa11 },
{ 0xacebad03, short_spc460, long_spc460, 0xcb0bfa11 },
{ 0xacebad03, short_spc461, long_spc461, 0xcb0bfa11 },
{ 0xacebad03, short_spc462, long_spc462, 0xcb0bfa11 },
{ 0xacebad03, short_spc463, long_spc463, 0xcb0bfa11 },
{ 0xacebad03, short_spc464, long_spc464, 0xcb0bfa11 },
{ 0xacebad03, short_spc465, long_spc465, 0xcb0bfa11 },
{ 0xacebad03, short_spc466, long_spc466, 0xcb0bfa11 },
{ 0xacebad03, short_spc467, long_spc467, 0xcb0bfa11 },
{ 0xacebad03, short_spc468, long_spc468, 0xcb0bfa11 },
{ 0xacebad03, short_spc469, long_spc469, 0xcb0bfa11 },
{ 0xacebad03, short_spc470, long_spc470, 0xcb0bfa11 },
{ 0xacebad03, short_spc471, long_spc471, 0xcb0bfa11 },
{ 0xacebad03, short_spc472, long_spc472, 0xcb0bfa11 },
{ 0xacebad03, short_spc473, long_spc473, 0xcb0bfa11 },
{ 0xacebad03, short_spc474, long_spc474, 0xcb0bfa11 },
{ 0xacebad03, short_spc475, long_spc475, 0xcb0bfa11 },
{ 0xacebad03, short_spc476, long_spc476, 0xcb0bfa11 },
{ 0xacebad03, short_spc477, long_spc477, 0xcb0bfa11 },
{ 0xacebad03, short_spc478, long_spc478, 0xcb0bfa11 },
{ 0xacebad03, short_spc479, long_spc479, 0xcb0bfa11 },
{ 0xacebad03, short_spc480, long_spc480, 0xcb0bfa11 },
{ 0xacebad03, short_spc481, long_spc481, 0xcb0bfa11 },
{ 0xacebad03, short_spc482, long_spc482, 0xcb0bfa11 },
{ 0xacebad03, short_spc483, long_spc483, 0xcb0bfa11 },
{ 0xacebad03, short_spc484, long_spc484, 0xcb0bfa11 },
{ 0xacebad03, short_spc485, long_spc485, 0xcb0bfa11 },
{ 0xacebad03, short_spc486, long_spc486, 0xcb0bfa11 },
{ 0xacebad03, short_spc487, long_spc487, 0xcb0bfa11 },
{ 0xacebad03, short_spc488, long_spc488, 0xcb0bfa11 },
{ 0xacebad03, short_spc489, long_spc489, 0xcb0bfa11 },
{ 0xacebad03, short_spc490, long_spc490, 0xcb0bfa11 },
{ 0xacebad03, short_spc491, long_spc491, 0xcb0bfa11 },
{ 0xacebad03, short_spc492, long_spc492, 0xcb0bfa11 },
{ 0xacebad03, short_spc493, long_spc493, 0xcb0bfa11 },
{ 0xacebad03, short_spc494, long_spc494, 0xcb0bfa11 },
{ 0xacebad03, short_spc495, long_spc495, 0xcb0bfa11 },
{ 0xacebad03, short_spc496, long_spc496, 0xcb0bfa11 },
{ 0xacebad03, short_spc497, long_spc497, 0xcb0bfa11 },
{ 0xacebad03, short_spc498, long_spc498, 0xcb0bfa11 },
{ 0xacebad03, short_spc499, long_spc499, 0xcb0bfa11 },
{ 0xacebad03, short_spc500, long_spc500, 0xcb0bfa11 },
{ 0xacebad03, short_spc501, long_spc501, 0xcb0bfa11 },
{ 0xacebad03, short_spc502, long_spc502, 0xcb0bfa11 },
{ 0xacebad03, short_spc503, long_spc503, 0xcb0bfa11 },
{ 0xacebad03, short_spc504, long_spc504, 0xcb0bfa11 },
{ 0xacebad03, short_spc505, long_spc505, 0xcb0bfa11 },
{ 0xacebad03, short_spc506, long_spc506, 0xcb0bfa11 },
{ 0xacebad03, short_spc507, long_spc507, 0xcb0bfa11 },
{ 0xacebad03, short_spc508, long_spc508, 0xcb0bfa11 },
{ 0xacebad03, short_spc509, long_spc509, 0xcb0bfa11 },
{ 0xacebad03, short_spc510, long_spc510, 0xcb0bfa11 },
{ 0xacebad03, short_spc511, long_spc511, 0xcb0bfa11 },
{ 0xacebad03, short_spc512, long_spc512, 0xcb0bfa11 },
{ 0xacebad03, short_spc513, long_spc513, 0xcb0bfa11 },
{ 0xacebad03, short_spc514, long_spc514, 0xcb0bfa11 },
{ 0xacebad03, short_spc515, long_spc515, 0xcb0bfa11 },
{ 0xacebad03, short_spc516, long_spc516, 0xcb0bfa11 },
{ 0xacebad03, short_spc517, long_spc517, 0xcb0bfa11 },
{ 0xacebad03, short_spc518, long_spc518, 0xcb0bfa11 },
{ 0xacebad03, short_spc519, long_spc519, 0xcb0bfa11 },
{ 0xacebad03, short_spc520, long_spc520, 0xcb0bfa11 },
{ 0xacebad03, short_spc521, long_spc521, 0xcb0bfa11 },
{ 0xacebad03, short_spc522, long_spc522, 0xcb0bfa11 },
{ 0xacebad03, short_spc523, long_spc523, 0xcb0bfa11 },
{ 0xacebad03, short_spc524, long_spc524, 0xcb0bfa11 },
{ 0xacebad03, short_spc525, long_spc525, 0xcb0bfa11 },
{ 0xacebad03, short_spc526, long_spc526, 0xcb0bfa11 },
{ 0xacebad03, short_spc527, long_spc527, 0xcb0bfa11 },
{ 0xacebad03, short_spc528, long_spc528, 0xcb0bfa11 },
{ 0xacebad03, short_spc529, long_spc529, 0xcb0bfa11 },
{ 0xacebad03, short_spc530, long_spc530, 0xcb0bfa11 },
{ 0xacebad03, short_spc531, long_spc531, 0xcb0bfa11 },
{ 0xacebad03, short_spc532, long_spc532, 0xcb0bfa11 },
{ 0xacebad03, short_spc533, long_spc533, 0xcb0bfa11 },
{ 0xacebad03, short_spc534, long_spc534, 0xcb0bfa11 },
{ 0xacebad03, short_spc535, long_spc535, 0xcb0bfa11 },
{ 0xacebad03, short_spc536, long_spc536, 0xcb0bfa11 },
{ 0xacebad03, short_spc537, long_spc537, 0xcb0bfa11 },
{ 0xacebad03, short_spc538, long_spc538, 0xcb0bfa11 },
{ 0xacebad03, short_spc539, long_spc539, 0xcb0bfa11 },
{ 0xacebad03, short_spc540, long_spc540, 0xcb0bfa11 },
{ 0xacebad03, short_spc541, long_spc541, 0xcb0bfa11 },
{ 0xacebad03, short_spc542, long_spc542, 0xcb0bfa11 },
{ 0xacebad03, short_spc543, long_spc543, 0xcb0bfa11 },
{ 0xacebad03, short_spc544, long_spc544, 0xcb0bfa11 },
{ 0xacebad03, short_spc545, long_spc545, 0xcb0bfa11 },
{ 0xacebad03, short_spc546, long_spc546, 0xcb0bfa11 },
{ 0xacebad03, short_spc547, long_spc547, 0xcb0bfa11 },
{ 0xacebad03, short_spc548, long_spc548, 0xcb0bfa11 },
{ 0xacebad03, short_spc549, long_spc549, 0xcb0bfa11 },
{ 0xacebad03, short_spc550, long_spc550, 0xcb0bfa11 },
{ 0xacebad03, short_spc551, long_spc551, 0xcb0bfa11 },
{ 0xacebad03, short_spc552, long_spc552, 0xcb0bfa11 },
{ 0xacebad03, short_spc553, long_spc553, 0xcb0bfa11 },
{ 0xacebad03, short_spc554, long_spc554, 0xcb0bfa11 },
{ 0xacebad03, short_spc555, long_spc555, 0xcb0bfa11 },
{ 0xacebad03, short_spc556, long_spc556, 0xcb0bfa11 },
{ 0xacebad03, short_spc557, long_spc557, 0xcb0bfa11 },
{ 0xacebad03, short_spc558, long_spc558, 0xcb0bfa11 },
{ 0xacebad03, short_spc559, long_spc559, 0xcb0bfa11 },
{ 0xacebad03, short_spc560, long_spc560, 0xcb0bfa11 },
{ 0xacebad03, short_spc561, long_spc561, 0xcb0bfa11 },
{ 0xacebad03, short_spc562, long_spc562, 0xcb0bfa11 },
{ 0xacebad03, short_spc563, long_spc563, 0xcb0bfa11 },
{ 0xacebad03, short_spc564, long_spc564, 0xcb0bfa11 },
{ 0xacebad03, short_spc565, long_spc565, 0xcb0bfa11 },
{ 0xacebad03, short_spc566, long_spc566, 0xcb0bfa11 },
{ 0xacebad03, short_spc567, long_spc567, 0xcb0bfa11 },
{ 0xacebad03, short_spc568, long_spc568, 0xcb0bfa11 },
{ 0xacebad03, short_spc569, long_spc569, 0xcb0bfa11 },
{ 0xacebad03, short_spc570, long_spc570, 0xcb0bfa11 },
{ 0xacebad03, short_spc571, long_spc571, 0xcb0bfa11 },
{ 0xacebad03, short_spc572, long_spc572, 0xcb0bfa11 },
{ 0xacebad03, short_spc573, long_spc573, 0xcb0bfa11 },
{ 0xacebad03, short_spc574, long_spc574, 0xcb0bfa11 },
{ 0xacebad03, short_spc575, long_spc575, 0xcb0bfa11 },
{ 0xacebad03, short_spc576, long_spc576, 0xcb0bfa11 },
{ 0xacebad03, short_spc577, long_spc577, 0xcb0bfa11 },
{ 0xacebad03, short_spc578, long_spc578, 0xcb0bfa11 },
{ 0xacebad03, short_spc579, long_spc579, 0xcb0bfa11 },
{ 0xacebad03, short_spc580, long_spc580, 0xcb0bfa11 },
{ 0xacebad03, short_spc581, long_spc581, 0xcb0bfa11 },
{ 0xacebad03, short_spc582, long_spc582, 0xcb0bfa11 },
{ 0xacebad03, short_spc583, long_spc583, 0xcb0bfa11 },
{ 0xacebad03, short_spc584, long_spc584, 0xcb0bfa11 },
{ 0xacebad03, short_spc585, long_spc585, 0xcb0bfa11 },
{ 0xacebad03, short_spc586, long_spc586, 0xcb0bfa11 },
{ 0xacebad03, short_spc587, long_spc587, 0xcb0bfa11 },
{ 0xacebad03, short_spc588, long_spc588, 0xcb0bfa11 },
{ 0xacebad03, short_spc589, long_spc589, 0xcb0bfa11 },
{ 0xacebad03, short_spc590, long_spc590, 0xcb0bfa11 },
{ 0xacebad03, short_spc591, long_spc591, 0xcb0bfa11 },
{ 0xacebad03, short_spc592, long_spc592, 0xcb0bfa11 },
{ 0xacebad03, short_spc593, long_spc593, 0xcb0bfa11 },
{ 0xacebad03, short_spc594, long_spc594, 0xcb0bfa11 },
{ 0xacebad03, short_spc595, long_spc595, 0xcb0bfa11 },
{ 0xacebad03, short_spc596, long_spc596, 0xcb0bfa11 },
{ 0xacebad03, short_spc597, long_spc597, 0xcb0bfa11 },
{ 0xacebad03, short_spc598, long_spc598, 0xcb0bfa11 },
{ 0xacebad03, short_spc599, long_spc599, 0xcb0bfa11 },
{ 0xacebad03, short_spc600, long_spc600, 0xcb0bfa11 },
{ 0xacebad03, short_spc601, long_spc601, 0xcb0bfa11 },
{ 0xacebad03, short_spc602, long_spc602, 0xcb0bfa11 },
{ 0xacebad03, short_spc603, long_spc603, 0xcb0bfa11 },
{ 0xacebad03, short_spc604, long_spc604, 0xcb0bfa11 },
{ 0xacebad03, short_spc605, long_spc605, 0xcb0bfa11 },
{ 0xacebad03, short_spc606, long_spc606, 0xcb0bfa11 },
{ 0xacebad03, short_spc607, long_spc607, 0xcb0bfa11 },
{ 0xacebad03, short_spc608, long_spc608, 0xcb0bfa11 },
{ 0xacebad03, short_spc609, long_spc609, 0xcb0bfa11 },
{ 0xacebad03, short_spc610, long_spc610, 0xcb0bfa11 },
{ 0xacebad03, short_spc611, long_spc611, 0xcb0bfa11 },
{ 0xacebad03, short_spc612, long_spc612, 0xcb0bfa11 },
{ 0xacebad03, short_spc613, long_spc613, 0xcb0bfa11 },
{ 0xacebad03, short_spc614, long_spc614, 0xcb0bfa11 },
{ 0xacebad03, short_spc615, long_spc615, 0xcb0bfa11 },
{ 0xacebad03, short_spc616, long_spc616, 0xcb0bfa11 },
{ 0xacebad03, short_spc617, long_spc617, 0xcb0bfa11 },
{ 0xacebad03, short_spc618, long_spc618, 0xcb0bfa11 },
{ 0xacebad03, short_spc619, long_spc619, 0xcb0bfa11 },
{ 0xacebad03, short_spc620, long_spc620, 0xcb0bfa11 },
{ 0xacebad03, short_spc621, long_spc621, 0xcb0bfa11 },
{ 0xacebad03, short_spc622, long_spc622, 0xcb0bfa11 },
{ 0xacebad03, short_spc623, long_spc623, 0xcb0bfa11 },
{ 0xacebad03, short_spc624, long_spc624, 0xcb0bfa11 },
{ 0xacebad03, short_spc625, long_spc625, 0xcb0bfa11 },
{ 0xacebad03, short_spc626, long_spc626, 0xcb0bfa11 },
{ 0xacebad03, short_spc627, long_spc627, 0xcb0bfa11 },
{ 0xacebad03, short_spc628, long_spc628, 0xcb0bfa11 },
{ 0xacebad03, short_spc629, long_spc629, 0xcb0bfa11 },
{ 0xacebad03, short_spc630, long_spc630, 0xcb0bfa11 },
{ 0xacebad03, short_spc631, long_spc631, 0xcb0bfa11 },
{ 0xacebad03, short_spc632, long_spc632, 0xcb0bfa11 },
{ 0xacebad03, short_spc633, long_spc633, 0xcb0bfa11 },
{ 0xacebad03, short_spc634, long_spc634, 0xcb0bfa11 },
{ 0xacebad03, short_spc635, long_spc635, 0xcb0bfa11 },
{ 0xacebad03, short_spc636, long_spc636, 0xcb0bfa11 },
{ 0xacebad03, short_spc637, long_spc637, 0xcb0bfa11 },
{ 0xacebad03, short_spc638, long_spc638, 0xcb0bfa11 },
{ 0xacebad03, short_spc639, long_spc639, 0xcb0bfa11 },
{ 0xacebad03, short_spc640, long_spc640, 0xcb0bfa11 },
{ 0xacebad03, short_spc641, long_spc641, 0xcb0bfa11 },
{ 0xacebad03, short_spc642, long_spc642, 0xcb0bfa11 },
{ 0xacebad03, short_spc643, long_spc643, 0xcb0bfa11 },
{ 0xacebad03, short_spc644, long_spc644, 0xcb0bfa11 },
{ 0xacebad03, short_spc645, long_spc645, 0xcb0bfa11 },
{ 0xacebad03, short_spc646, long_spc646, 0xcb0bfa11 },
{ 0xacebad03, short_spc647, long_spc647, 0xcb0bfa11 },
{ 0xacebad03, short_spc648, long_spc648, 0xcb0bfa11 },
{ 0xacebad03, short_spc649, long_spc649, 0xcb0bfa11 },
{ 0xacebad03, short_spc650, long_spc650, 0xcb0bfa11 },
{ 0xacebad03, short_spc651, long_spc651, 0xcb0bfa11 },
{ 0xacebad03, short_spc652, long_spc652, 0xcb0bfa11 },
{ 0xacebad03, short_spc653, long_spc653, 0xcb0bfa11 },
{ 0xacebad03, short_spc654, long_spc654, 0xcb0bfa11 },
{ 0xacebad03, short_spc655, long_spc655, 0xcb0bfa11 },
{ 0xacebad03, short_spc656, long_spc656, 0xcb0bfa11 },
{ 0xacebad03, short_spc657, long_spc657, 0xcb0bfa11 },
{ 0xacebad03, short_spc658, long_spc658, 0xcb0bfa11 },
{ 0xacebad03, short_spc659, long_spc659, 0xcb0bfa11 },
{ 0xacebad03, short_spc660, long_spc660, 0xcb0bfa11 },
{ 0xacebad03, short_spc661, long_spc661, 0xcb0bfa11 },
{ 0xacebad03, short_spc662, long_spc662, 0xcb0bfa11 },
{ 0xacebad03, short_spc663, long_spc663, 0xcb0bfa11 },
{ 0xacebad03, short_spc664, long_spc664, 0xcb0bfa11 },
{ 0xacebad03, short_spc665, long_spc665, 0xcb0bfa11 },
{ 0xacebad03, short_spc666, long_spc666, 0xcb0bfa11 },
{ 0xacebad03, short_spc667, long_spc667, 0xcb0bfa11 },
{ 0xacebad03, short_spc668, long_spc668, 0xcb0bfa11 },
{ 0xacebad03, short_spc669, long_spc669, 0xcb0bfa11 },
{ 0xacebad03, short_spc670, long_spc670, 0xcb0bfa11 },
{ 0xacebad03, short_spc671, long_spc671, 0xcb0bfa11 },
{ 0xacebad03, short_spc672, long_spc672, 0xcb0bfa11 },
{ 0xacebad03, short_spc673, long_spc673, 0xcb0bfa11 },
{ 0xacebad03, short_spc674, long_spc674, 0xcb0bfa11 },
{ 0xacebad03, short_spc675, long_spc675, 0xcb0bfa11 },
{ 0xacebad03, short_spc676, long_spc676, 0xcb0bfa11 },
{ 0xacebad03, short_spc677, long_spc677, 0xcb0bfa11 },
{ 0xacebad03, short_spc678, long_spc678, 0xcb0bfa11 },
{ 0xacebad03, short_spc679, long_spc679, 0xcb0bfa11 },
{ 0xacebad03, short_spc680, long_spc680, 0xcb0bfa11 },
{ 0xacebad03, short_spc681, long_spc681, 0xcb0bfa11 },
{ 0xacebad03, short_spc682, long_spc682, 0xcb0bfa11 },
{ 0xacebad03, short_spc683, long_spc683, 0xcb0bfa11 },
{ 0xacebad03, short_spc684, long_spc684, 0xcb0bfa11 },
{ 0xacebad03, short_spc685, long_spc685, 0xcb0bfa11 },
{ 0xacebad03, short_spc686, long_spc686, 0xcb0bfa11 }
};
#endif

#if MPICH_ERROR_MSG_LEVEL > MPICH_ERROR_MSG_NONE
#define MPIR_MAX_ERROR_CLASS_INDEX 54
static int class_to_index[] = {
986,53,122,152,987,114,872,895,427,803,
992,146,12,1006,994,810,461,460,459,886,
176,177,183,120,134,181,182,175,440,441,
448,446,468,777,11,798,187,186,841,189,
190,900,979,133,188,1013,39,506,502,891,
894,893,892,29};
#endif
