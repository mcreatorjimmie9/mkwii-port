/* Function at 0x805E09B4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E09B4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x805E09C4
    *(0xc + r1) = r31; // stw @ 0x805E09C8
    /* lis r31, 0 */ // 0x805E09CC
    r31 = r31 + 0; // 0x805E09D0
    if (==) goto 0x0x805e0a0c;
    r6 = r31 + 0x320; // 0x805E09D8
    /* lis r4, 0 */ // 0x805E09DC
    r8 = r3;
    r3 = r31 + 8; // 0x805E09E4
    r4 = r4 + 0; // 0x805E09E8
    r6 = r6 + 0x1000; // 0x805E09EC
    /* li r7, 0x1000 */ // 0x805E09F0
    /* li r9, 1 */ // 0x805E09F4
    FUN_805E3430(r3, r4, r6, r7, r9); // bl 0x805E3430
    if (!=) goto 0x0x805e0a44;
    /* li r3, 0 */ // 0x805E0A04
    /* b 0x805e0a74 */ // 0x805E0A08
    r5 = r31 + 0x320; // 0x805E0A0C
    /* lis r4, 0 */ // 0x805E0A10
    r8 = r3;
    r3 = r31 + 8; // 0x805E0A18
    r6 = r5 + 0x1000; // 0x805E0A1C
    r4 = r4 + 0; // 0x805E0A20
}