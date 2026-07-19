/* Function at 0x807A1EDC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A1EDC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807A1EE4
    *(0x14 + r1) = r0; // stw @ 0x807A1EE8
    *(0xc + r1) = r31; // stw @ 0x807A1EEC
    /* li r31, 1 */ // 0x807A1EF0
    r3 = *(0 + r3); // lwz @ 0x807A1EF4
    r3 = r3 + 0x34; // 0x807A1EF8
    FUN_8067F3DC(r3); // bl 0x8067F3DC
    if (>=) goto 0x0x807a1f30;
    if (>=) goto 0x0x807a1f24;
    if (>=) goto 0x0x807a1f6c;
    if (>=) goto 0x0x807a1f50;
    /* b 0x807a1f6c */ // 0x807A1F20
    if (>=) goto 0x0x807a1f6c;
    /* b 0x807a1f58 */ // 0x807A1F2C
    if (>=) goto 0x0x807a1f44;
    if (>=) goto 0x0x807a1f6c;
    /* b 0x807a1f60 */ // 0x807A1F40
    if (>=) goto 0x0x807a1f6c;
    /* b 0x807a1f68 */ // 0x807A1F4C
    r31 = r31 | 2; // 0x807A1F50
    /* b 0x807a1f6c */ // 0x807A1F54
    r31 = r31 | 4; // 0x807A1F58
    /* b 0x807a1f6c */ // 0x807A1F5C
    r31 = r31 | 8; // 0x807A1F60
    /* b 0x807a1f6c */ // 0x807A1F64
    r31 = r31 | 0x10; // 0x807A1F68
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807A1F70
    r0 = *(0x14 + r1); // lwz @ 0x807A1F74
    return;
}