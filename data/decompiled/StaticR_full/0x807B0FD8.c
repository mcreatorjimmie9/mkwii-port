/* Function at 0x807B0FD8, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B0FD8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807B0FE0
    /* li r4, 0 */ // 0x807B0FE4
    *(0x24 + r1) = r0; // stw @ 0x807B0FE8
    /* li r0, 0 */ // 0x807B0FEC
    r5 = r5 + 0; // 0x807B0FF0
    *(0x1c + r1) = r31; // stw @ 0x807B0FF4
    *(0x18 + r1) = r30; // stw @ 0x807B0FF8
    r30 = r3;
    *(8 + r1) = r0; // stw @ 0x807B1004
    FUN_805EB338(r3); // bl 0x805EB338
    /* li r3, 0x4c */ // 0x807B100C
    FUN_805E3430(r3, r3); // bl 0x805E3430
}