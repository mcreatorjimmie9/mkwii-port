/* Function at 0x807B6C38, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B6C38(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B6C4C
    r30 = r3;
    FUN_807CF000(); // bl 0x807CF000
    /* lis r3, 0 */ // 0x807B6C58
    /* li r0, 0 */ // 0x807B6C5C
    r3 = r3 + 0; // 0x807B6C60
    *(0x34 + r30) = r3; // stw @ 0x807B6C64
    /* li r3, 0x40 */ // 0x807B6C68
    *(0x38 + r30) = r31; // stw @ 0x807B6C6C
    *(0x3c + r30) = r0; // stw @ 0x807B6C70
    *(0x40 + r30) = r0; // stw @ 0x807B6C74
    *(0x44 + r30) = r0; // stw @ 0x807B6C78
    *(0x48 + r30) = r0; // stw @ 0x807B6C7C
    *(0x4c + r30) = r0; // stw @ 0x807B6C80
    *(0x50 + r30) = r0; // stw @ 0x807B6C84
    *(0x54 + r30) = r0; // stw @ 0x807B6C88
    *(0x58 + r30) = r0; // stw @ 0x807B6C8C
    *(0x5c + r30) = r0; // stw @ 0x807B6C90
    FUN_805E3430(); // bl 0x805E3430
}