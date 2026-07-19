/* Function at 0x806E9234, size=84 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806E9234(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x806E923C
    /* lis r8, 0 */ // 0x806E9240
    *(0x14 + r1) = r0; // stw @ 0x806E9244
    /* li r0, 0 */ // 0x806E9248
    r5 = r3;
    r10 = r3;
    *(8 + r1) = r0; // stw @ 0x806E9254
    r4 = r4 + 0; // 0x806E9258
    r8 = r8 + 0; // 0x806E925C
    r0 = *(0x291c + r3); // lwz @ 0x806E9264
    /* li r6, 0 */ // 0x806E9268
    /* li r7, 0 */ // 0x806E926C
    /* mulli r0, r0, 0x58 */ // 0x806E9270
    r3 = r3 + r0; // 0x806E9274
    r0 = *(0x58 + r3); // lbz @ 0x806E9278
    *(8 + r1) = r0; // stb @ 0x806E927C
    r3 = *(0x54 + r3); // lwz @ 0x806E9280
    FUN_805E3430(); // bl 0x805E3430
}