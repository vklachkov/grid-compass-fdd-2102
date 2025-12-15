#define CMD_INIT 0x0
#define CMD_READ 0x4
#define CMD_FORMAT 0x11
#define CMD_GET_STATUS 0x1
#define CMD_WRITE 0x5
#define CMD_TRACK_FORMAT 0x16
#define CMD_SELF_TEST 0x10
#define 0xC 0xc
#define STATE_4 0x10
#define STATE_6 0x40
#define STATE_1 0x2
#define STATE_3 0x4
#define STATE_0_CMD_RECEIVED 0x1
#define 00010100b 0x14
#define GPIB_SPE 0x18
#define GPIB_SPD 0x19
#define GPIB_DCL 0x14
#define GPIB_UNT 0x5f
#define 11101111b 0xef
#define 10011111b 0x9f
#define 10001101b 0x8d
#define 8 0x8
#define 20 0x14
#define 0 0x0
#define 29 0x1d
#define 0x3B 0x3b
#define 01011000b 0x58
#define 0xD2 0xd2
#define 1 0x1
#define 7 0x7
#define 4 0x4
#define 11011000b 0xd8
#define 3 0x3
#define 64 0x40
#define 16 0x10
#define 01111100b 0x7c
#define 15 0xf
#define 12 0xc
#define 22 0x16
#define 28 0x1c
#define 40 0x28
#define 80 0x50
#define 2 0x2
#define 48 0x30
#define 54 0x36
#define 30 0x1e
#define 00011100b 0x1c
#define 10000000b 0x80
#define 10000100b 0x84
#define 00000100b 0x4
#define 6 0x6
#define 0x34 0x34
#define STATE_7_SEND_GET_STATUS_RESP 0x80
#define 51 0x33
#define GPIB_UNL 0x3f
#define 140 0x8c
#define 0xFF 0xff
#define 201 0xc9
#define RESPONSE_STATUS_NO_DISK 0x6b
#define RESPONSE_STATUS_UNKNOWN_6A 0x6a
#define RESPONSE_STATUS_OOB_WRITE 0x66
#define RESPONSE_STATUS_UNKNOWN_6C 0x6c
#define RESPONSE_STATUS_NOT_FORMATTED 0x68
#define RESPONSE_STATUS_BAD_SECTOR 0x67
#define RESPONSE_STATUS_UNKNOWN_65 0x65
#define RESPONSE_STATUS_UNSUPPORTED 0x23

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct cmd_req_struct cmd_req_struct, *Pcmd_req_struct;

typedef ushort uint16_t;

typedef uint uint32_t;

struct cmd_req_struct {
    byte cmd;
    uint16_t conn;
    uint32_t sector;
    uint16_t data_size;
    byte mode;
};

typedef struct disk_status disk_status, *Pdisk_status;

struct disk_status {
    word sector_size;
    word logical_sector_size;
    word sector_count;
    byte disk_status;
    word bitmap_block_id;
    word superblock_id;
    word min_dir_pages;
    byte flush;
    char device_name[32];
    word bytes_per_sector;
    word sectors_per_track;
    word tracks_per_cylinder;
    byte interleave_factor;
    byte second_side_count;
};

typedef uchar uint8_t;



undefined1 P1_INV_20;
bool GPIB_STATE_LISTEN;
bool 25.0_STATE_WAIT_CMD_BIT;
undefined SP;
undefined MTA_23;
bool GPIB_STATE_SPE;
bool 25.2_STATE_2_BIT;
bool GPIB_STATE_TALK;
bool 25.4_STATE_4_BIT;
byte req_cmd;
undefined MLA_22;
bool srq_requested_26.1;
undefined GPIB_SRQ;
undefined1 P1;
undefined GPIB_NRFD;
bool another_device_raise_srq_26.5;
undefined GPIB_NDAC;
undefined1 drive_status;
undefined gpib_state_21;
byte handler_state_machine_25;
undefined ATN_INV;
undefined DAV_INV;
undefined INTERRUPT_PRIORITY;
undefined TIMER_CONTROL;
bool MOT_B_EN_INV;
undefined PRECOM;
undefined EXT_PWR;
bool ??interrupt_flag_26.4;
undefined SEND_GPIB;
byte counter;
undefined INTERRUPT_ENABLE;
byte drive_status_or_mode;
byte dip_reg_3000;
undefined 23.6;
byte track_number;
undefined 22.5;
byte error_code2_always_0;
byte error_code_27;
bool floppy_motor_enabled_26.2;
bool floppy_power_enabled_26.6;
byte status_cmd_floppy_reg;
undefined EA;
bool ??floppy_flag_26.0;
char DAT_INTMEM_2a;
byte time_until_floppy_poweroff;
undefined ET0;
undefined TR0;
undefined UNK_CODE_1786;
byte ?tracks_per_cylinder;
undefined1 side_head_number;
byte ?sectors_per_track;
byte ?interleave_factor;
byte ?second_side_count;
byte ?try_counter;
uint32_t req_sector;
byte format_track_number;
undefined sectors_counter;
byte ??another_track_number;
undefined ??another_sector_number;
byte sector_number;
byte track_floppy_reg;
byte sector_floppy_reg;
undefined 27.3;
bool floppy_disk_inserted_27.4;
undefined 27.5;
bool 27.6;
undefined ADDR_HIGH;
undefined TMOD;
undefined TL0;
bool WD2797_DRQ;
undefined TH0;
undefined TF0;
undefined data_floppy_reg;
byte counter_2;
byte BYTE_INTMEM_33;
byte BYTE_INTMEM_28;
byte format_ff_count;
undefined 28.0;
byte BYTE_INTMEM_3f;
byte[10] REQ_RESP_BUFFER;
byte BYTE_INTMEM_49;
byte BYTE_INTMEM_4a;
undefined UNK_CODE_17bc;
byte ??floppy_command_or_data??;
undefined1 DAT_INTMEM_2a;
byte sleep_counter;
undefined INT_PWR;
undefined EOI_INV;
undefined req_mode;
word req_data_size;
undefined GPIB_EOI;
undefined gpib_reg_4000;
byte srq_response_byte;
byte 28.2;
undefined srq_response_6bit;
bool GPIB_STATE_SRQ_REQUESTED;
disk_status disk_status_1786;
disk_status disk_status_1750;
undefined GPIB_DAV;
undefined 28.5;
undefined 28.6;

// WARNING: Unknown calling convention

void entry(void)

{
  byte gpib_cmd;
  uint16_t req_resp_len;
  byte temp1;
  byte temp2;
  byte temp3;
  
  SP = 0x4f;
  drive_status = 0;
  req_resp_len = reset_device();
  prepare_disk_status();
  do {
    GPIB_NDAC = 1;
wait_cmd_loop:
    temp1 = P1;
                    // 4 bit - DAV
                    // 2 bit - ATN
    P1_INV_20 = ~temp1 & 0b00010100;
  } while (ATN_INV == 0);
  GPIB_NDAC = 0;
  if (DAV_INV != 0) {
                    // data_valid
    GPIB_NRFD = 0;
    gpib_cmd = read_gpib_byte_and_signals();
    P1_INV_20 = 0;
    if (gpib_cmd == MLA_22) {
      gpib_handshake_end();
      GPIB_STATE_LISTEN = true;
      listen_bytes_until_eoi(req_resp_len);
    }
    else if (gpib_cmd == MTA_23) {
      gpib_handshake_end();
      GPIB_STATE_TALK = true;
      temp2 = P1;
                    // 7 bit - EOI
                    // 6 bit - NDAC
                    // 5 bit - NRFD
                    // 4 bit - DAV (DO NOT TOUCH)
                    // 3 bit - SRQ
                    // 2 bit - ATN
                    // 1 bit - DRQ
                    // 0 bit - IFC
      P1 = temp2 | 0b11101111;
      gpib_send_bytes(req_resp_len);
      temp3 = P1;
                    // 7 bit - EOI
                    // 6 bit - NDAC (DO NOT TOUCH)
                    // 5 bit - NRFD (DO NOT TOUCH)
                    // 4 bit - DAV
                    // 3 bit - SRQ
                    // 2 bit - ATN
                    // 1 bit - DRQ
                    // 0 bit - IFC
      P1 = temp3 | 0b10011111;
      GPIB_NDAC = 0;
    }
    else if (gpib_cmd == GPIB_SPE) {
      if (srq_requested_26_1 << 7 < 0) {
        gpib_handshake_end();
        GPIB_STATE_SPE = true;
      }
      else {
        another_device_raise_srq_26_5 = true;
        gpib_wait_next_valid_data();
      }
    }
    else {
      if (gpib_cmd != GPIB_DCL) {
        if (gpib_cmd == GPIB_SPD) {
          if (srq_requested_26_1 << 7 < '\0') {
            gpib_handshake_end();
            GPIB_STATE_TALK = true;
          }
          else {
            gpib_wait_next_valid_data();
            another_device_raise_srq_26_5 = false;
reset_flags:
            srq_requested_26_1 = false;
            gpib_state_21 = 0;
          }
          goto wait_cmd_loop;
        }
        if (gpib_cmd == GPIB_UNT) {
          if (GPIB_STATE_TALK != false) {
            gpib_handshake_end();
            if (srq_requested_26_1 << 7 < '\0') {
              if ((req_cmd == CMD_WRITE) || (req_cmd == CMD_FORMAT)) {
                handler_state_machine_25 = STATE_4;
                req_resp_len = 6;
              }
              if (_5_4_STATE_4_BIT != true) {
                req_resp_len = 0x1ff;
                handler_state_machine_25 = STATE_6;
              }
              goto reset_flags;
            }
            gpib_state_21 = 0;
            req_resp_len = 9;
            handler_state_machine_25 = STATE_0_CMD_RECEIVED;
            goto wait_cmd_loop;
          }
        }
        else if ((gpib_cmd == GPIB_UNL) && (GPIB_STATE_LISTEN != false)) {
          gpib_handshake_end();
          if (_5_0_STATE_WAIT_CMD_BIT == false) {
            if (_5_2_STATE_2_BIT == true) {
              __cmd_write_2();
            }
            else {
              __cmd_read_or_write();
            }
          }
          else {
            req_resp_len = handle_cmd();
          }
          gpib_state_21 = 0;
          if (srq_requested_26_1 << 7 < 0) {
            GPIB_SRQ = 0;
          }
          goto wait_cmd_loop;
        }
        gpib_wait_next_valid_data();
        goto wait_cmd_loop;
      }
      gpib_handshake_end();
      req_resp_len = reset_device();
    }
  }
  goto wait_cmd_loop;
}



uint16_t reset_device(void)

{
  char gpib_cmd;
  
  SEND_GPIB = 1;
  GPIB_SRQ = 1;
  MOT_B_EN_INV = false;
  PRECOM = 0;
  EXT_PWR = 0;
  __interrupt_flag_26_4 = false;
  srq_requested_26_1 = false;
  another_device_raise_srq_26_5 = false;
  drive_status_or_mode = 0;
  req_cmd = 0;
  INTERRUPT_ENABLE = 0;
  TIMER_CONTROL = 0b00000100;
  INTERRUPT_PRIORITY = 0b00000100;
  if (gpib_cmd != GPIB_DCL) {
    counter = 15;
    reset_gpib_and_reread_address();
  }
                    // Enable External interrupt1
  INTERRUPT_ENABLE = 0b10000100;
  drive_init();
  handler_state_machine_25 = STATE_0_CMD_RECEIVED;
  return 9;
}



void reset_gpib_and_reread_address(void)

{
  do {
    P1_INV_20 = 0;
    counter = counter - 1;
  } while (counter != 0);
  GPIB_NRFD = 1;
  GPIB_NDAC = 1;
  MLA_22 = dip_reg_3000;
  _2_5 = 1;
  MTA_23 = MLA_22;
  _3_6 = 1;
  track_number = 0xff;
  handler_state_machine_25 = 1;
  return;
}



void drive_init(void)

{
  error_code_27 = 0;
  error_code2_always_0 = 0;
  floppy_motor_enabled_26_2 = false;
  floppy_power_enabled_26_6 = false;
  if (drive_status != 0) {
    return;
  }
  drive_status_or_mode = 1;
  floppy_turn_on();
  if (error_code_27 == 0) {
    drive_status = 3;
  }
  else {
    drive_status = 1;
  }
  floppy_shutdown();
  drive_status_or_mode = 0;
  return;
}



undefined1 __interrupt_0013(undefined1 param_1,char param_2)

{
  byte bVar1;
  
  __floppy_flag_26_0 = false;
  EA = 0;
  bVar1 = status_cmd_floppy_reg;
  if ((bVar1 & 0b10000000) == 0) {
    if (param_2 == 1) {
      floppy_shutdown();
    }
  }
  else {
    floppy_shutdown();
  }
  EA = 1;
  return param_1;
}



// WARNING: Unknown calling convention

void interrupt_floppy_poweroff_timer(void)

{
  char in_R7;
  
  TR0 = 0;
  if ((DAT_INTMEM_2a == 0) || (DAT_INTMEM_2a != in_R7)) {
    time_until_floppy_poweroff = 16;
    DAT_INTMEM_2a = in_R7;
  }
  else {
    time_until_floppy_poweroff = time_until_floppy_poweroff - 1;
    if (time_until_floppy_poweroff == 0) {
      ET0 = 0;
      floppy_shutdown();
      return;
    }
  }
  TR0 = 1;
  return;
}



void __interrupt_0003_0023_001b(void)

{
  __interrupt_flag_26_4 = true;
  return;
}



void __read_fdd_params(void)

{
  disk_status *puVar1;
  byte *pbVar1;
  
  if (drive_status_or_mode == 0) {
    puVar1 = (disk_status *)0x1750;
  }
  else {
    puVar1 = (disk_status *)&disk_status_1786;
  }
  pbVar1 = (byte *)CONCAT11((char)((ushort)puVar1 >> 8),(char)puVar1 + 48);
  _sectors_per_track = *pbVar1;
  _tracks_per_cylinder = pbVar1[2];
  _interleave_factor = pbVar1[4];
  _second_side_count = pbVar1[5];
  side_head_number = 0;
  return;
}



// WARNING: Unknown calling convention

byte __cmd_read_or_write(void)

{
  byte bVar1;
  byte in_R2;
  byte cVar1;
  
  ET0 = 0;
  TR0 = 0;
  error_code_27 = 0;
  error_code2_always_0 = 0;
  __read_fdd_params();
  floppy_turn_on();
  if ((req_cmd == CMD_READ) && (error_code_27 == RESPONSE_STATUS_UNKNOWN_6A)) {
    error_code_27 = 0;
  }
  else {
    bVar1 = error_code_27;
    if (error_code_27 != 0) goto done;
  }
  cVar1 = 2 - req_sector._2_1_;
  if (((2 < req_sector._2_1_) << 7 < 0) ||
     ((cVar1 == 0 &&
      (cVar1 = -(byte)req_sector - 0x30, in_R2 = (byte)req_sector,
      (0xd0 < (byte)req_sector) << 7 < 0)))) {
    error_code_27 = RESPONSE_STATUS_OOB_WRITE;
    bVar1 = error_code_27;
  }
  else {
    __track_info(cVar1);
    _try_counter = 6;
    while ((((__read_validate_params(), error_code_27 == 0 ||
             (bVar1 = error_code_27, req_cmd != CMD_WRITE)) &&
            (cmd_write_or_read_impl(), bVar1 = error_code_27, error_code_27 != 0)) &&
           ((req_cmd != CMD_WRITE || (error_code_27 != RESPONSE_STATUS_UNKNOWN_6A))))) {
      error_code_27 = 0;
      _try_counter = _try_counter - 1;
      if ((_try_counter == 0) ||
         ((_try_counter == 3 &&
          (floppy_status_transform(), bVar1 = error_code_27,
          error_code_27 == RESPONSE_STATUS_NO_DISK)))) break;
    }
  }
done:
  error_code_27 = bVar1;
  if (req_cmd != CMD_WRITE) {
    srq_was_requested();
    return in_R2;
  }
  response_with_srq();
  return in_R2;
}



void __track_info(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cStack_1;
  
  if (req_sector._2_1_ == 0) {
    bVar2 = _sectors_per_track * _tracks_per_cylinder;
    sectors_counter = 0;
    format_track_number = (byte)req_sector;
    if (bVar2 != 0) {
      format_track_number = (byte)req_sector / bVar2;
      sectors_counter = (byte)req_sector % bVar2;
    }
  }
  else {
    sectors_counter = 0;
    counter = 0x10;
    bVar2 = (byte)req_sector;
    bVar3 = req_sector._2_1_;
    do {
      format_track_number = bVar2 * 2;
      bVar1 = bVar2 >> 7;
      sectors_counter = sectors_counter * 2 - ((char)bVar3 >> 7);
      if (_sectors_per_track * _tracks_per_cylinder <= sectors_counter) {
        format_track_number = format_track_number + 1;
        sectors_counter = sectors_counter - _sectors_per_track * _tracks_per_cylinder;
      }
      counter = counter - 1;
      bVar2 = format_track_number;
      bVar3 = bVar3 << 1 | bVar1;
    } while (counter != 0);
  }
  cStack_1 = _sectors_per_track * _tracks_per_cylinder;
  if (((_tracks_per_cylinder != 1) && (_sectors_per_track <= sectors_counter)) &&
     (side_head_number = 2, _second_side_count == 0)) {
    sectors_counter = sectors_counter - _sectors_per_track;
  }
  if (cStack_1 - sectors_counter == 0) {
    format_track_number = format_track_number + 1;
    sectors_counter = 0;
  }
  sectors_counter = sectors_counter + 1;
  return;
}



void __read_validate_params(void)

{
  if (track_number == 0xff) {
    error_code_27 = 0;
    return;
  }
  if (format_track_number <= track_number) {
    if (track_number != format_track_number) {
      return;
    }
    if ((sectors_counter <= sector_number) && (sector_number != sectors_counter)) {
      return;
    }
  }
  if ((__another_track_number <= format_track_number) &&
     (format_track_number != __another_track_number)) {
    return;
  }
  if ((__another_sector_number <= sectors_counter) && (sectors_counter != __another_sector_number))
  {
    return;
  }
  error_code_27 = 0x6a;
  return;
}



void cmd_write_or_read_impl(void)

{
  byte bVar1;
  
  ET0 = 0;
  TR0 = 0;
  __floppy_controller_seek();
  bVar1 = track_floppy_reg;
  if (bVar1 == format_track_number) {
    if (error_code_27 == 0) {
_retry:
      sector_floppy_reg = sectors_counter;
      if (req_cmd == CMD_READ) {
        cmd_read();
        if (error_code_27 == RESPONSE_STATUS_NO_DISK) {
          return;
        }
        bVar1 = error_code_27 & 0b00011100;
      }
      else {
        cmd_write();
        if (error_code_27 == RESPONSE_STATUS_NO_DISK) {
          return;
        }
        bVar1 = error_code_27 & 0b01111100;
      }
      if (bVar1 != 0) {
        if (_7_6 != false) {
          error_code_27 = RESPONSE_STATUS_UNKNOWN_6A;
          return;
        }
        if (_7_5 != 0) {
          error_code_27 = RESPONSE_STATUS_UNKNOWN_6C;
          return;
        }
        if (floppy_disk_inserted_27_4 != false) {
          error_code_27 = RESPONSE_STATUS_NOT_FORMATTED;
          return;
        }
        if (_7_3 != 0) {
          error_code_27 = RESPONSE_STATUS_BAD_SECTOR;
          return;
        }
        error_code_27 = RESPONSE_STATUS_UNKNOWN_6C;
      }
      return;
    }
    if (error_code_27 == RESPONSE_STATUS_NO_DISK) {
      return;
    }
    if (_7_6 != false) {
      if (req_cmd == CMD_READ) {
        error_code_27 = 0;
        goto _retry;
      }
      error_code_27 = RESPONSE_STATUS_UNKNOWN_6A;
      goto end;
    }
    if (floppy_disk_inserted_27_4 == false) {
      error_code_27 = RESPONSE_STATUS_BAD_SECTOR;
      goto end;
    }
  }
  error_code_27 = RESPONSE_STATUS_NOT_FORMATTED;
end:
  floppy_status_transform();
  return;
}



// WARNING: Unknown calling convention

uint8_t __floppy_controller_force_interrupt(void)

{
  uint8_t uVar1;
  
  TR0 = 0;
  ET0 = 0;
  counter = 0;
  uVar1 = 0xff;
  WD2797_DRQ = true;
  ADDR_HIGH = 0x11;
  TMOD = 1;
  TH0 = 0;
  TL0 = 0;
  TR0 = 0;
  status_cmd_floppy_reg = 0xd0;
  sleep();
  return uVar1;
}



void cmd_write(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  bVar3 = __floppy_controller_force_interrupt();
  counter_2 = 20;
  __floppy_flag_26_0 = true;
  status_cmd_floppy_reg = side_head_number | 0xac;
  TR0 = 1;
  while (bVar2 = WD2797_DRQ, bVar2 != true) {
    cVar1 = TF0;
    if (cVar1 != 0) {
      TIMER_CONTROL = 4;
      TR0 = 1;
      counter_2 = counter_2 - 1;
      if (counter_2 == 0) {
        __check_disk_presence();
        return;
      }
    }
  }
  TR0 = 0;
  TH0 = 0;
  TL0 = 0;
  TR0 = 1;
  do {
    while (bVar2 = WD2797_DRQ, bVar2 == true) {
      data_floppy_reg = *(undefined1 *)(ushort)bVar3;
      bVar3 = bVar3 - 1;
      counter = counter - 1;
      if (counter == 0) {
        cVar1 = ADDR_HIGH;
        ADDR_HIGH = cVar1 + -1;
        goto LAB_CODE_044b;
      }
    }
    cVar1 = TF0;
  } while (cVar1 == 0);
  goto done;
  while( true ) {
    data_floppy_reg = *(undefined1 *)(ushort)bVar3;
    bVar3 = bVar3 - 1;
    counter = counter - 1;
    if (counter == 0) break;
LAB_CODE_044b:
    bVar2 = WD2797_DRQ;
    if (bVar2 != true) {
      cVar1 = TF0;
      if (cVar1 != 0) break;
      goto LAB_CODE_044b;
    }
  }
done:
  __floppy_controller_reset_with_wait();
  return;
}



// WARNING: Unknown calling convention

uint16_t cmd_read(void)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 in_R1;
  
  bVar4 = __floppy_controller_force_interrupt();
  counter_2 = 20;
  __floppy_flag_26_0 = true;
  status_cmd_floppy_reg = side_head_number | 0x8c;
  TR0 = 1;
  while (bVar2 = WD2797_DRQ, bVar2 != true) {
    cVar1 = TF0;
    if (cVar1 != 0) {
      TIMER_CONTROL = 4;
      TR0 = 1;
      counter_2 = counter_2 - 1;
      if (counter_2 == 0) {
        __check_disk_presence();
        return CONCAT11(in_R1,bVar4);
      }
    }
  }
  TR0 = 0;
  TH0 = 0;
  TL0 = 0;
  TR0 = 1;
  do {
    while (bVar2 = WD2797_DRQ, bVar2 == true) {
      uVar3 = data_floppy_reg;
      *(undefined1 *)(ushort)bVar4 = uVar3;
      bVar4 = bVar4 - 1;
      counter = counter - 1;
      if (counter == 0) {
        cVar1 = ADDR_HIGH;
        ADDR_HIGH = cVar1 + -1;
        goto LAB_CODE_049f;
      }
    }
    cVar1 = TF0;
  } while (cVar1 == 0);
  goto LAB_CODE_04ad;
  while( true ) {
    uVar3 = data_floppy_reg;
    *(undefined1 *)(ushort)bVar4 = uVar3;
    bVar4 = bVar4 - 1;
    counter = counter - 1;
    if (counter == 0) break;
LAB_CODE_049f:
    bVar2 = WD2797_DRQ;
    if (bVar2 != true) {
      cVar1 = TF0;
      if (cVar1 != '\0') break;
      goto LAB_CODE_049f;
    }
  }
LAB_CODE_04ad:
  __floppy_controller_reset_with_wait();
  return 0x1ff;
}



void cmd_format_disk_or_track(void)

{
  byte bVar1;
  
  error_code_27 = 0;
  error_code2_always_0 = 0;
  __read_fdd_params();
  floppy_turn_on();
  if (error_code_27 == 0) {
    do {
      if (req_cmd == CMD_TRACK_FORMAT) {
        __track_info();
      }
      else {
        format_track_number = 0;
      }
      do {
        _preformat_track();
        __floppy_controller_seek();
        if (error_code_27 != 0) {
          error_code_27 = 0x66;
          return;
        }
        bVar1 = status_cmd_floppy_reg;
        if ((bVar1 & 0b11011000) != 0) {
          error_code_27 = 0x6a;
          return;
        }
        format_track();
        if (error_code_27 != 0) {
          return;
        }
        if (req_cmd != CMD_FORMAT) goto cmd_format_done;
        format_track_number = format_track_number + 1;
      } while (format_track_number != 40);
      side_head_number = side_head_number + 1;
    } while (side_head_number != _tracks_per_cylinder);
  }
cmd_format_done:
  __floppy_controller_reset_with_wait();
  return;
}



void format_track(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uStack_1;
  
  ET0 = 0;
  sectors_counter = _sectors_per_track;
  bVar3 = 0;
  counter = 20;
  counter_2 = 0;
  format_ff_count = 8;
  BYTE_INTMEM_33 = 29;
  TMOD = 1;
  TH0 = 0;
  TL0 = 0;
  TR0 = 0;
  WD2797_DRQ = true;
  __floppy_flag_26_0 = true;
  status_cmd_floppy_reg = 0xd0;
  sleep();
  uStack_1 = 0xf4;
  if (side_head_number != '\0') {
    uStack_1 = 0xf6;
  }
  __floppy_flag_26_0 = true;
  status_cmd_floppy_reg = uStack_1;
  TR0 = 1;
  do {
    do {
      bVar2 = WD2797_DRQ;
      if (bVar2 == true) {
        TR0 = 0;
        counter = 80;
        do {
          do {
            bVar2 = WD2797_DRQ;
          } while (bVar2 == false);
          data_floppy_reg = 0x4e;
          counter = counter - 1;
        } while (counter != 0);
        counter = 3;
        do {
          do {
            bVar2 = WD2797_DRQ;
          } while (bVar2 == false);
          data_floppy_reg = 0xf6;
          counter = counter - 1;
        } while (counter != 0);
        do {
          bVar2 = WD2797_DRQ;
        } while (bVar2 == false);
        data_floppy_reg = 0xfc;
        counter = 0x32;
        do {
          do {
            bVar2 = WD2797_DRQ;
          } while (bVar2 == false);
          data_floppy_reg = 0x4e;
          counter = counter - 1;
        } while (counter != 0);
        ADDR_HIGH = 0x10;
        do {
          cVar4 = 0x3b;
          do {
            do {
              bVar2 = WD2797_DRQ;
            } while (bVar2 == false);
            data_floppy_reg = *(undefined1 *)(ushort)bVar3;
            bVar3 = bVar3 + 1;
            if (bVar3 == 0) {
              cVar1 = ADDR_HIGH;
              ADDR_HIGH = cVar1 + '\x01';
            }
            cVar4 = cVar4 + -1;
          } while (cVar4 != '\0');
          do {
            do {
              bVar2 = WD2797_DRQ;
            } while (bVar2 == false);
            data_floppy_reg = 0xff;
            format_ff_count = format_ff_count - 1;
          } while (format_ff_count != 0);
          do {
            do {
              bVar2 = WD2797_DRQ;
            } while (bVar2 == false);
            data_floppy_reg = 0xe5;
            counter_2 = counter_2 - 1;
          } while (counter_2 != 0);
          counter_2 = 0xf8;
          do {
            do {
              bVar2 = WD2797_DRQ;
            } while (bVar2 == false);
            data_floppy_reg = 0xe5;
            counter_2 = counter_2 - 1;
          } while (counter_2 != 0);
          BYTE_INTMEM_33 = 29;
          counter_2 = 0;
          format_ff_count = 8;
          do {
            do {
              bVar2 = WD2797_DRQ;
            } while (bVar2 == false);
            data_floppy_reg = *(undefined1 *)(ushort)bVar3;
            bVar3 = bVar3 + 1;
            if (bVar3 == 0) {
              cVar4 = ADDR_HIGH;
              ADDR_HIGH = cVar4 + '\x01';
            }
            BYTE_INTMEM_33 = BYTE_INTMEM_33 - 1;
          } while (BYTE_INTMEM_33 != 0);
          sectors_counter = sectors_counter - 1;
        } while (sectors_counter != 0);
        TR0 = 1;
        counter = 10;
        do {
          while (bVar2 = WD2797_DRQ, bVar2 == false) {
            BYTE_INTMEM_28 = status_cmd_floppy_reg;
            if (_8_0 != 1) {
              error_code_27 = BYTE_INTMEM_28;
              return;
            }
          }
          cVar4 = TF0;
          if (cVar4 != '\0') {
            TIMER_CONTROL = 4;
            TR0 = 1;
            counter = counter - 1;
            if (counter == 0) {
              error_code_27 = 0x6b;
              return;
            }
          }
          data_floppy_reg = 0;
        } while( true );
      }
      cVar4 = TF0;
    } while (cVar4 == '\0');
    TIMER_CONTROL = 4;
    TR0 = 1;
    counter = counter - 1;
  } while (counter != 0);
  __check_disk_presence();
  return;
}



// WARNING: Inlined function: FUN_CODE_0670

void _preformat_track(void)

{
  byte *pbVar1;
  byte *pbVar2;
  
  prepare_for_track_format();
  sectors_counter = _sectors_per_track;
  BYTE_INTMEM_3f = 0;
                    // https://nerdlypleasures.blogspot.com/2015/11/ibm-pc-floppy-disks-deeper-look-at-disk.html
  pbVar1 = REQ_RESP_BUFFER;
  do {
                    // Sync Gap
    counter = 12;
    do {
      *pbVar1 = 0;
      pbVar1 = pbVar1 + 1;
      counter = counter - 1;
    } while (counter != 0);
    counter = 3;
    do {
      pbVar2 = pbVar1;
      *pbVar2 = 0xf5;
      counter = counter - 1;
      pbVar1 = pbVar2 + 1;
    } while (counter != 0);
                    // ID Address Mark
    pbVar2[1] = 0xfe;
                    // Track/Cylinder
    pbVar2[2] = format_track_number;
                    // Side/Head field
    pbVar2[3] = side_head_number;
                    // Sector
    sector_number = *(byte *)CONCAT11(0x17,BYTE_INTMEM_3f + 0xbc);
    BYTE_INTMEM_3f = BYTE_INTMEM_3f + 1;
    pbVar2[4] = sector_number;
                    // Sector Size ID Byte (02 is 512 bytes)
    pbVar2[5] = 2;
                    // CRC Marker
    pbVar2[6] = 0xf7;
                    // Gap Between ID and Data
    counter = 22;
    pbVar2 = pbVar2 + 7;
    do {
      *pbVar2 = 0x4e;
      pbVar2 = pbVar2 + 1;
      counter = counter - 1;
    } while (counter != 0);
                    // Sync Gap
    counter = 12;
    do {
      *pbVar2 = 0;
      pbVar2 = pbVar2 + 1;
      counter = counter - 1;
    } while (counter != 0);
    counter = 3;
    do {
      pbVar1 = pbVar2;
      *pbVar1 = 0xf5;
      counter = counter - 1;
      pbVar2 = pbVar1 + 1;
    } while (counter != 0);
                    // Data Address Mark
    pbVar1[1] = 0xfb;
                    // CRC Marker
    pbVar1[2] = 0xf7;
                    // Gap Between Sectors
    pbVar1 = pbVar1 + 3;
    counter = 28;
    do {
      *pbVar1 = 0x4e;
      pbVar1 = pbVar1 + 1;
      counter = counter - 1;
    } while (counter != 0);
    sectors_counter = sectors_counter - 1;
  } while (sectors_counter != 0);
  return;
}



// WARNING: This is an inlined function

undefined1 FUN_CODE_0670(undefined1 param_1)

{
  sector_number = *(byte *)CONCAT11(0x17,BYTE_INTMEM_3f + 0xbc);
  BYTE_INTMEM_3f = BYTE_INTMEM_3f + 1;
  return param_1;
}



void prepare_for_track_format(void)

{
  char cVar1;
  byte *pbVar2;
  
  cVar1 = side_head_number;
  counter = 64;
  pbVar2 = &BYTE_EXTMEM_17bc;
  do {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + 1;
    counter = counter - 1;
  } while (counter != 0);
  __read_fdd_params();
  side_head_number = cVar1;
  BYTE_INTMEM_49 = 0;
  if ((cVar1 != '\0') && (_second_side_count != 0)) {
    BYTE_INTMEM_49 = _sectors_per_track;
  }
  BYTE_EXTMEM_17bc = _sectors_per_track;
  BYTE_INTMEM_49 = BYTE_INTMEM_49 + 2;
  BYTE_INTMEM_4a = 2;
  do {
    pbVar2 = (byte *)0x17bc;
    counter = 0;
    if (BYTE_EXTMEM_17bc != 0) {
      counter = ((BYTE_INTMEM_49 - 1) * _interleave_factor) % BYTE_EXTMEM_17bc;
    }
    for (; counter != 0; counter = counter - 1) {
      pbVar2 = pbVar2 + 1;
    }
    for (; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
    }
    *pbVar2 = BYTE_INTMEM_49;
    BYTE_INTMEM_4a = BYTE_INTMEM_4a + 1;
    BYTE_INTMEM_49 = BYTE_INTMEM_49 + 1;
  } while (((BYTE_INTMEM_4a < _sectors_per_track) << 7 < '\0') ||
          (BYTE_INTMEM_4a == _sectors_per_track));
  BYTE_INTMEM_49 = 1;
  if ((cVar1 != '\0') && (_second_side_count != 0)) {
    BYTE_INTMEM_49 = _sectors_per_track + 1;
  }
  BYTE_EXTMEM_17bc = BYTE_INTMEM_49;
  return;
}



void __floppy_controller_seek(void)

{
  PRECOM = 0;
  if ((format_track_number != 30) && (29 < format_track_number)) {
    PRECOM = 1;
  }
  data_floppy_reg = format_track_number;
  __floppy_command_or_data__ = 0x18;
  floppy_controller_reset_d2();
  floppy_controller_get_status();
  if (error_code_27 == 0x6b) {
    return;
  }
  error_code_27 = error_code_27 & 0b01011000;
  return;
}



void __check_disk_presence(void)

{
  error_code_27 = status_cmd_floppy_reg;
  if (!floppy_disk_inserted_27_4) {
    error_code_27 = RESPONSE_STATUS_NO_DISK;
  }
  floppy_reset_d6();
  return;
}



void floppy_controller_get_status(void)

{
  char cVar1;
  byte bVar2;
  
  counter_2 = 0x10;
  TMOD = 1;
  do {
    TIMER_CONTROL = 4;
    TH0 = 0;
    TL0 = 0;
    TR0 = 1;
    while (cVar1 = TF0, cVar1 == '\0') {
      if (-1 < __floppy_flag_26_0 << 7) {
        bVar2 = status_cmd_floppy_reg;
        if ((error_code_27 != bVar2) && (error_code_27 != 0)) {
          floppy_reset_d6();
          return;
        }
        status_cmd_floppy_reg = 0xd6;
        error_code_27 = bVar2;
        sleep();
        TH0 = 0;
        TL0 = 0;
        TMOD = 1;
        time_until_floppy_poweroff = 0;
        DAT_INTMEM_2a = 0;
        TR0 = 1;
        ET0 = 1;
        return;
      }
    }
    counter_2 = counter_2 - 1;
    if (counter_2 == 0) {
      error_code_27 = 0x6b;
      floppy_reset_d6();
      return;
    }
  } while( true );
}



void __floppy_controller_reset_with_wait(void)

{
  byte bVar1;
  
  do {
  } while (__floppy_flag_26_0 << 7 < '\0');
  bVar1 = status_cmd_floppy_reg;
  if ((error_code_27 != bVar1) && (error_code_27 != 0)) {
    floppy_reset_d6();
    return;
  }
  status_cmd_floppy_reg = 0xd6;
  error_code_27 = bVar1;
  sleep();
  TH0 = 0;
  TL0 = 0;
  TMOD = 1;
  time_until_floppy_poweroff = 0;
  DAT_INTMEM_2a = 0;
  TR0 = 1;
  ET0 = 1;
  return;
}



void floppy_reset_d6(void)

{
  status_cmd_floppy_reg = 0xd6;
  sleep();
  TH0 = 0;
  TL0 = 0;
  TMOD = 1;
  time_until_floppy_poweroff = 0;
  DAT_INTMEM_2a = 0;
  TR0 = 1;
  ET0 = 1;
  return;
}



void floppy_controller_reset_d2(void)

{
  byte *pbVar1;
  
  EA = 0;
  pbVar1 = &status_cmd_floppy_reg;
  status_cmd_floppy_reg = 0xd2;
  sleep();
  __floppy_flag_26_0 = true;
  EA = 1;
  *pbVar1 = __floppy_command_or_data__;
  sleep();
  return;
}



void sleep(void)

{
  sleep_counter = 0xc;
  do {
    sleep_counter = sleep_counter - 1;
  } while (sleep_counter != 0);
  return;
}



void floppy_turn_on(void)

{
  char cVar1;
  
  ET0 = 0;
  TR0 = 0;
  if (drive_status_or_mode == 0) {
    cVar1 = EXT_PWR;
    if (cVar1 != 1) {
      INT_PWR = 0;
      floppy_power_enabled_26_6 = false;
      floppy_motor_enabled_26_2 = false;
    }
  }
  else {
    cVar1 = INT_PWR;
    if (cVar1 != 1) {
      EXT_PWR = 0;
      floppy_power_enabled_26_6 = false;
      floppy_motor_enabled_26_2 = false;
    }
  }
  if (-1 < floppy_power_enabled_26_6 << 7) {
    floppy_power_enabled_26_6 = true;
    if (drive_status_or_mode == 0) {
      EXT_PWR = 1;
    }
    else {
      INT_PWR = 1;
    }
    counter_2 = 140;
    long_sleep();
  }
  if (-1 < floppy_motor_enabled_26_2 << 7) {
    MOT_B_EN_INV = true;
    floppy_motor_enabled_26_2 = true;
    counter_2 = 0x46;
    long_sleep();
    floppy_status_transform();
    return;
  }
  return;
}



void long_sleep(void)

{
  counter = 0xff;
  do {
    do {
      sleep();
      counter = counter - 1;
    } while (counter != 0);
    counter = 0xff;
    counter_2 = counter_2 - 1;
  } while (counter_2 != 0);
  return;
}



void floppy_shutdown(void)

{
  status_cmd_floppy_reg = 0xd0;
  TR0 = 0;
  ET0 = 0;
  floppy_motor_enabled_26_2 = false;
  MOT_B_EN_INV = false;
  floppy_power_enabled_26_6 = false;
  EXT_PWR = 0;
  INT_PWR = 0;
  return;
}



void floppy_power_off(void)

{
  floppy_power_enabled_26_6 = false;
  EXT_PWR = 0;
  INT_PWR = 0;
  return;
}



void __floppy_controller_d2_and_status_to_error_code_27(void)

{
  PRECOM = 0;
  __floppy_command_or_data__ = 0;
  floppy_controller_reset_d2();
  floppy_controller_get_status();
  error_code_27 = error_code_27 & 0b01011000;
  error_code2_always_0 = 0;
  return;
}



void floppy_status_transform(void)

{
  char cVar1;
  
  cVar1 = __floppy_controller_d2_and_status_to_error_code_27();
  if (cVar1 != 0) {
    if (_7_6 == false) {
      if (floppy_disk_inserted_27_4 == false) {
        error_code_27 = RESPONSE_STATUS_BAD_SECTOR;
      }
      else {
        error_code_27 = RESPONSE_STATUS_NOT_FORMATTED;
      }
      floppy_shutdown();
    }
    else {
      error_code_27 = RESPONSE_STATUS_UNKNOWN_6A;
    }
  }
  error_code2_always_0 = 0;
  return;
}



byte listen_bytes_until_eoi(uint16_t param_1)

{
  char cVar1;
  char cVar2;
  byte byte_from_gpib;
  
  EA = 0;
  while( true ) {
    gpib_wait_data_valid_and_read();
    gpib_handshake_end();
    cVar2 = (char)(param_1 >> 8);
                    // 7 bit - EOI
                    // 3 bit - SRQ
                    // 2 bit - ATN
                    // 0 bit - IFC
    if ((P1_INV_20 & 0b10001101) != 0) break;
    *(byte *)(param_1 | 0x1000) = byte_from_gpib;
    cVar1 = (char)param_1 + -1;
    if (((cVar1 != 0) || (param_1 = CONCAT11(cVar2,cVar1), cVar2 == 0)) &&
       (param_1 = CONCAT11(cVar2,cVar1), cVar1 == -1)) {
      param_1 = CONCAT11(cVar2 + -1,0xff);
    }
  }
  if (EOI_INV != 1) {
    reset_device();
    return byte_from_gpib;
  }
  P1_INV_20 = 0;
  *(byte *)CONCAT11(0x10,(char)param_1) = byte_from_gpib;
  if (_5_0_STATE_WAIT_CMD_BIT != true) {
    EA = 1;
    return byte_from_gpib;
  }
  req_mode = REQ_RESP_BUFFER[0];
  req_data_size._0_1_ = REQ_RESP_BUFFER[1];
  req_data_size._1_1_ = REQ_RESP_BUFFER[2];
  req_sector._0_1_ = REQ_RESP_BUFFER[3];
  req_sector._1_1_ = REQ_RESP_BUFFER[4];
  req_sector._2_1_ = REQ_RESP_BUFFER[5];
  req_sector._3_1_ = REQ_RESP_BUFFER[6];
  drive_status_or_mode = REQ_RESP_BUFFER[7];
  req_cmd = REQ_RESP_BUFFER[9];
  EA = 1;
  return byte_from_gpib;
}



// WARNING: Unknown calling convention

uint16_t handle_cmd(void)

{
  undefined1 in_R0;
  undefined1 in_R1;
  uint16_t uVar1;
  
  if (req_cmd == CMD_INIT) {
    if ((drive_status_or_mode == 0) || (drive_status != 1)) {
      drive_init();
    }
    else {
      error_code_27 = RESPONSE_STATUS_UNKNOWN_65;
      error_code2_always_0 = 0;
    }
    uVar1 = prepare_status_response();
    gpib_state_21 = 0;
    handler_state_machine_25 = STATE_4;
    P1_INV_20 = 0;
    return uVar1;
  }
  if (req_cmd == CMD_READ) {
    __cmd_read_or_write();
    if (error_code_27 == 0) {
      return CONCAT11(in_R1,in_R0);
    }
  }
  else {
    if (req_cmd == CMD_FORMAT) {
      cmd_format_disk_or_track();
      response_with_srq();
      return CONCAT11(in_R1,in_R0);
    }
    if (req_cmd == CMD_GET_STATUS) {
      uVar1 = cmd_get_status();
      gpib_state_21 = 0;
      srq_requested_26_1 = false;
      return uVar1;
    }
    if (req_cmd == CMD_WRITE) {
      if (req_mode == 0) {
        gpib_state_21 = 0;
        handler_state_machine_25 = STATE_1;
        return 0x1ff;
      }
      if (req_mode != 1) {
        error_code_27 = RESPONSE_STATUS_UNSUPPORTED;
      }
      gpib_state_21 = 0;
      handler_state_machine_25 = STATE_3;
      return 0x1ff;
    }
    if (req_cmd == CMD_TRACK_FORMAT) {
      cmd_format_disk_or_track();
      response_with_srq();
      return CONCAT11(in_R1,in_R0);
    }
    if (req_cmd == CMD_SELF_TEST) {
      if (req_mode == 4) {
        self_test_part1();
        response_with_srq();
        return CONCAT11(in_R1,in_R0);
      }
      if (req_mode == 7) {
        floppy_power_enabled_26_6 = true;
        if (drive_status_or_mode == 0) {
          EXT_PWR = 1;
          response_with_srq();
          return CONCAT11(in_R1,in_R0);
        }
        INT_PWR = 1;
        response_with_srq();
        return CONCAT11(in_R1,in_R0);
      }
      if (req_mode == 8) {
        floppy_power_off();
        response_with_srq();
        return CONCAT11(in_R1,in_R0);
      }
    }
    error_code_27 = RESPONSE_STATUS_UNSUPPORTED;
  }
  uVar1 = prepare_status_response();
  gpib_state_21 = 0;
  handler_state_machine_25 = 0x10;
  P1_INV_20 = 0;
  srq_was_requested();
  return uVar1;
}



void response_with_srq(void)

{
  prepare_status_response();
  gpib_state_21 = 0;
  handler_state_machine_25 = STATE_4;
  P1_INV_20 = 0;
  srq_was_requested();
  return;
}



void gpib_send_bytes(uint16_t len)

{
  char cVar1;
  char cVar2;
  
  EA = 0;
  do {
                    // Wait ATN
    BYTE_INTMEM_28 = P1;
  } while (_8_2 == 0);
  SEND_GPIB = 0;
  if (srq_requested_26_1 << 7 < 0) {
    GPIB_SRQ = 1;
  }
  else {
                    // Send all bytes except last
    if (-1 < another_device_raise_srq_26_5 << 7) {
      do {
        while( true ) {
          gpib_reg_4000 = *(undefined1 *)(len | 0x1000);
          gpib_send_handshake();
          cVar2 = (char)(len >> 8);
          cVar1 = (char)len + -1;
          len = CONCAT11(cVar2,cVar1);
          if (cVar1 == '\0') break;
          if (cVar1 == -1) {
            len = CONCAT11(cVar2 + -1,0xff);
          }
        }
        len = CONCAT11(cVar2,cVar1);
      } while (cVar2 != 0);
                    // Send last byte
      GPIB_EOI = 0;
      gpib_reg_4000 = REQ_RESP_BUFFER[0];
      gpib_send_handshake();
                    // Reset after send
      GPIB_EOI = 1;
      SEND_GPIB = 1;
      EA = 1;
      return;
    }
  }
  gpib_reg_4000 = srq_response_byte;
  gpib_send_handshake();
  srq_response_6bit = 0;
  SEND_GPIB = 1;
  EA = 1;
  return;
}



void srq_was_requested(void)

{
  srq_response_byte = 0xf;
  srq_response_6bit = 1;
  GPIB_STATE_SRQ_REQUESTED = true;
  srq_requested_26_1 = true;
  return;
}



// WARNING: Unknown calling convention

uint16_t cmd_get_status(void)

{
  byte bVar1;
  disk_status *pdVar2;
  
  counter = 0x34;
  if (drive_status_or_mode == 0) {
    pdVar2 = &disk_status_1750;
  }
  else {
    pdVar2 = &disk_status_1786;
  }
  do {
    bVar1 = counter;
    counter = counter - 1;
    *(undefined1 *)CONCAT11(0x10,counter) = *(undefined1 *)&pdVar2->sector_size;
    pdVar2 = (disk_status *)((short)&pdVar2->sector_size + 1);
    counter = bVar1 - 1;
  } while (counter != 0);
  handler_state_machine_25 = STATE_7_SEND_GET_STATUS_RESP;
  return 51;
}



// WARNING: Inlined function: set_drive_ready_in_get_status_response

void prepare_disk_status(void)

{
  counter = 54;
  copy_get_status_response(9,0x1750);
  disk_status_1750.disk_status = drive_status;
  counter = 54;
  copy_get_status_response(9,&disk_status_1786);
  disk_status_1786.disk_status = drive_status;
  return;
}



// WARNING: This is an inlined function

void set_drive_ready_in_get_status_response(byte *ptr)

{
  *(undefined1 *)CONCAT11((char)((ushort)ptr >> 8),(char)ptr + 6) = drive_status;
  return;
}



void copy_get_status_response(byte param_1,undefined1 *param_2)

{
  do {
    *param_2 = *(undefined1 *)((ushort)param_1 + 0xa37);
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    counter = counter - 1;
  } while (counter != 0);
  return;
}



// WARNING: Inlined function: set_drive_ready_in_get_status_response

void __cmd_write_2(void)

{
  disk_status *pdVar1;
  undefined1 *puVar2;
  
  counter = 0xff;
  counter_2 = 0x11;
  if (drive_status_or_mode == 0) {
    pdVar1 = &disk_status_1750;
  }
  else {
    pdVar1 = &disk_status_1786;
  }
  do {
    puVar2 = (undefined1 *)CONCAT11(0x11,counter);
    counter = counter - 1;
    *(undefined1 *)&pdVar1->sector_size = *puVar2;
    pdVar1 = (disk_status *)((short)&pdVar1->sector_size + 1);
  } while (counter != 201);
  if (drive_status_or_mode == 0) {
    disk_status_1750.disk_status = drive_status;
  }
  else {
    disk_status_1786.disk_status = drive_status;
  }
  error_code_27 = 0;
  error_code2_always_0 = 0;
  response_with_srq();
  return;
}



// WARNING: Unknown calling convention

uint16_t prepare_status_response(void)

{
  handler_state_machine_25 = STATE_4;
  REQ_RESP_BUFFER[6] = error_code_27;
  REQ_RESP_BUFFER[5] = error_code2_always_0;
  REQ_RESP_BUFFER[4] = drive_status_or_mode;
  REQ_RESP_BUFFER[3] = (byte)req_sector;
  REQ_RESP_BUFFER[2] = req_sector._2_1_;
  REQ_RESP_BUFFER[1] = 0;
  counter = 0;
  REQ_RESP_BUFFER[0] = 0;
  return 6;
}



void self_test_part1(void)

{
  bool bVar1;
  
  __track_info();
  __another_track_number = format_track_number;
  __another_sector_number = sectors_counter;
  bVar1 = CARRY1((byte)req_data_size,(byte)req_sector);
  req_sector._3_1_ = (byte)req_data_size + (byte)req_sector;
  req_sector._2_1_ = req_data_size._0_1_ + (req_sector._2_1_ - ((bVar1 << 7) >> 7));
  __track_info();
  track_number = format_track_number;
  sector_number = sectors_counter;
  error_code_27 = 0;
  error_code2_always_0 = 0;
  return;
}



byte gpib_wait_data_valid_and_read(void)

{
  byte bVar1;
  char cVar2;
  
  do {
    cVar2 = GPIB_DAV;
  } while (cVar2 == '\x01');
  bVar1 = P1;
  P1_INV_20 = ~bVar1;
  bVar1 = gpib_reg_4000;
  return bVar1;
}



// WARNING: Unknown calling convention

byte read_gpib_byte_and_signals(void)

{
  byte bVar1;
  
  bVar1 = P1;
  P1_INV_20 = ~bVar1;
  bVar1 = gpib_reg_4000;
  return bVar1;
}



void gpib_handshake_end(void)

{
  char cVar1;
  
  GPIB_NRFD = 0;
  GPIB_NDAC = 1;
  do {
    cVar1 = GPIB_DAV;
  } while (cVar1 == 0);
  GPIB_NDAC = 0;
  GPIB_NRFD = 1;
  return;
}



void gpib_wait_next_valid_data(void)

{
  char cVar1;
  
  GPIB_NDAC = 1;
  do {
    cVar1 = GPIB_DAV;
  } while (cVar1 == 0);
  GPIB_NRFD = 1;
  return;
}



void gpib_send_handshake(void)

{
  byte temp1;
  
  do {
    do {
      temp1 = P1;
                    // Wait NDAC
    } while (_8_6 == 1);
                    // Wait NRFD
  } while (_8_5 == 0);
                    // Data valid
  GPIB_DAV = 0;
  do {
    BYTE_INTMEM_28 = P1;
                    //  Wait NDAC
  } while (_8_6 == 0);
                    // Data invalid
  GPIB_DAV = 1;
  return;
}


