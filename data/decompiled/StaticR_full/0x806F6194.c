/* Function at 0x806F6194, size=184 bytes */
/* Stack frame: 1200 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_806F6194(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -1200(r1) */
    /* saved r25 */
    /* li r8, 0xa */ // 0x806F619C
    /* li r9, 0 */ // 0x806F61A0
    *(0x4b4 + r1) = r0; // stw @ 0x806F61A4
    /* li r0, 0xb */ // 0x806F61A8
    /* mulli r7, r0, 0x17 */ // 0x806F61AC
    /* stmw r25, 0x494(r1) */ // 0x806F61B4
    /* mulli r0, r8, 0x17 */ // 0x806F61C0
    /* slwi r7, r7, 2 */ // 0x806F61D0
    r28 = r3;
    r29 = r4;
    /* slwi r0, r0, 2 */ // 0x806F61DC
    r7 = r10 + r7; // 0x806F61E0
    r30 = r5;
    r31 = r6;
    *(0x40 + r1) = r11; // stw @ 0x806F61EC
    /* li r4, 0x54 */ // 0x806F61F8
    *(0x9c + r1) = r12; // stw @ 0x806F61FC
    *(0xf8 + r1) = r26; // stw @ 0x806F6204
    *(0x154 + r1) = r27; // stw @ 0x806F620C
    *(0x1b0 + r1) = r8; // stw @ 0x806F6214
    *(0x2c + r1) = r9; // stw @ 0x806F621C
    *(0x3c + r1) = r9; // stw @ 0x806F6220
    *(0x28 + r1) = r10; // stw @ 0x806F6224
    *(0x20c + r1) = r11; // stw @ 0x806F6228
    *(0x268 + r1) = r12; // stw @ 0x806F622C
    *(0x2c4 + r1) = r26; // stw @ 0x806F6230
    *(0x320 + r1) = r27; // stw @ 0x806F6234
    *(0x37c + r1) = r8; // stw @ 0x806F6238
    /* stwx r7, r10, r0 */ // 0x806F623C
    *(0x434 + r1) = r9; // stw @ 0x806F6240
    *(0x2c + r1) = r10; // stw @ 0x806F6244
    FUN_805E3430(); // bl 0x805E3430
}