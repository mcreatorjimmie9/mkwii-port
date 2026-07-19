/* Function at 0x80751220, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80751220(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80751228
    r6 = r6 + 0; // 0x80751230
    r7 = r6;
    *(0x1c + r1) = r31; // stw @ 0x80751238
    /* lis r31, 0 */ // 0x8075123C
    r5 = r31 + 0; // 0x80751240
    *(0x18 + r1) = r30; // stw @ 0x80751244
    /* lis r30, 0 */ // 0x80751248
    r30 = r30 + 0; // 0x8075124C
    *(0x14 + r1) = r29; // stw @ 0x80751250
    r29 = r3;
    r8 = r30 + 0x28; // 0x80751258
    FUN_8089F5F0(r8); // bl 0x8089F5F0
    /* lis r4, 0 */ // 0x80751260
    /* li r3, 0 */ // 0x80751264
    r4 = r4 + 0; // 0x80751268
    /* li r5, 0x3e8 */ // 0x8075126C
    *(0 + r29) = r4; // stw @ 0x80751270
    r7 = r31 + 0; // 0x80751274
    /* lis r4, 0 */ // 0x80751278
    /* li r0, -1 */ // 0x8075127C
    *(0xb0 + r29) = r3; // stb @ 0x80751280
    r4 = r4 + 0; // 0x80751284
    /* li r3, 0x7c */ // 0x80751288
    *(0xb4 + r29) = r5; // stw @ 0x8075128C
    r6 = *(0 + r7); // lwz @ 0x80751290
    r5 = *(4 + r7); // lwz @ 0x80751294
    *(0xbc + r29) = r5; // stw @ 0x80751298
    *(0xb8 + r29) = r6; // stw @ 0x8075129C
    r5 = *(8 + r7); // lwz @ 0x807512A0
    *(0xc0 + r29) = r5; // stw @ 0x807512A4
    *(0xd4 + r29) = r0; // stw @ 0x807512A8
    *(0 + r29) = r4; // stw @ 0x807512AC
    FUN_805E3430(); // bl 0x805E3430
}