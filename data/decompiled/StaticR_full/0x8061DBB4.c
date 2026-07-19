/* Function at 0x8061DBB4, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DBB4(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061DBB4
    /* slwi r0, r4, 2 */ // 0x8061DBB8
    r3 = *(0x10 + r3); // lwz @ 0x8061DBBC
    /* lwzx r3, r3, r0 */ // 0x8061DBC0
    r3 = *(0x98 + r3); // lwz @ 0x8061DBC4
    /* b 0x80627728 */ // 0x8061DBC8
}