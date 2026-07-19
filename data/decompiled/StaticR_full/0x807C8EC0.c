/* Function at 0x807C8EC0, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C8EC0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807C8EC8
    *(0xc + r1) = r31; // stw @ 0x807C8ED0
    *(8 + r1) = r30; // stw @ 0x807C8ED4
    r30 = r3;
    /* lfs f0, 0(r4) */ // 0x807C8EDC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807C8EE0
    if (>=) goto 0x0x807c8f3c;
    r3 = *(0xbc + r3); // lwz @ 0x807C8EE8
    r31 = *(0 + r3); // lwz @ 0x807C8EEC
    r3 = r31;
    FUN_807B6180(r3); // bl 0x807B6180
    if (==) goto 0x0x807c8f44;
    r3 = *(0 + r31); // lwz @ 0x807C8F00
    r3 = *(4 + r3); // lwz @ 0x807C8F04
    r0 = *(8 + r3); // lwz @ 0x807C8F08
    /* clrlwi. r0, r0, 0x1f */ // 0x807C8F0C
    if (!=) goto 0x0x807c8f44;
    r4 = *(0xe4 + r30); // lwz @ 0x807C8F14
    r3 = *(0xc4 + r30); // lwz @ 0x807C8F18
    r4 = r4 + 1; // 0x807C8F1C
    *(0xe4 + r30) = r4; // stw @ 0x807C8F20
    r0 = *(0xc + r3); // lbz @ 0x807C8F24
    if (==) goto 0x0x807c8f44;
    r0 = r4 + 2; // 0x807C8F30
    *(0xe4 + r30) = r0; // stw @ 0x807C8F34
    /* b 0x807c8f44 */ // 0x807C8F38
    /* li r0, 0 */ // 0x807C8F3C
    *(0xe4 + r3) = r0; // stw @ 0x807C8F40
    /* lis r3, 0 */ // 0x807C8F44
    r0 = *(0xe4 + r30); // lwz @ 0x807C8F48
    r3 = *(0 + r3); // lha @ 0x807C8F4C
    if (<=) goto 0x0x807c8f64;
    *(0xe4 + r30) = r3; // stw @ 0x807C8F58
    /* li r3, 1 */ // 0x807C8F5C
    /* b 0x807c8f68 */ // 0x807C8F60
    /* li r3, 0 */ // 0x807C8F64
    r0 = *(0x14 + r1); // lwz @ 0x807C8F68
    r31 = *(0xc + r1); // lwz @ 0x807C8F6C
    r30 = *(8 + r1); // lwz @ 0x807C8F70
    return;
}