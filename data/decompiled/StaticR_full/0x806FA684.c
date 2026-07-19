/* Function at 0x806FA684, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806FA684(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    r3 = r4;
    *(0x14 + r1) = r0; // stw @ 0x806FA694
    /* li r6, 1 */ // 0x806FA69C
    /* li r7, 0 */ // 0x806FA6A0
    r4 = *(0x7588 + r5); // lwz @ 0x806FA6A4
    /* li r5, 0 */ // 0x806FA6A8
    /* li r8, 0 */ // 0x806FA6AC
    FUN_805E3430(r6, r7, r5, r8); // bl 0x805E3430
}