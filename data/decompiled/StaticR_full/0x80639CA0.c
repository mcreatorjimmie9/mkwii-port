/* Function at 0x80639CA0, size=112 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80639CA0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r8, 0 */ // 0x80639CA8
    /* li r7, 2 */ // 0x80639CAC
    *(0x44 + r1) = r0; // stw @ 0x80639CB0
    /* li r0, 3 */ // 0x80639CB4
    *(0x3c + r1) = r31; // stw @ 0x80639CB8
    r31 = r6;
    *(0x38 + r1) = r30; // stw @ 0x80639CC0
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x80639CC8
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x80639CD0
    r28 = r3;
    r3 = r29;
    *(0 + r4) = r7; // stb @ 0x80639CDC
    /* lis r7, 0 */ // 0x80639CE0
    *(4 + r4) = r8; // stw @ 0x80639CE4
    *(8 + r4) = r8; // stw @ 0x80639CE8
    *(0xc + r4) = r0; // stb @ 0x80639CEC
    *(0x10 + r4) = r8; // stw @ 0x80639CF0
    *(0x14 + r4) = r8; // stw @ 0x80639CF4
    *(0x18 + r4) = r0; // stw @ 0x80639CF8
    *(0x1c + r4) = r8; // stw @ 0x80639CFC
    r0 = *(0 + r7); // lwz @ 0x80639D00
    r0 = r0 rlwinm 0x1e; // rlwinm
    *(0x20 + r4) = r0; // stb @ 0x80639D08
    FUN_805E3430(); // bl 0x805E3430
}