/* Function at 0x8082AFF0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8082AFF0(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    r10 = r5;
    r9 = r7;
    *(0x14 + r1) = r0; // stw @ 0x8082B000
    r0 = r6;
    r5 = r4;
    r6 = r10;
    *(8 + r1) = r8; // stw @ 0x8082B010
    r8 = r0;
    /* li r4, 0 */ // 0x8082B018
    /* li r7, 0 */ // 0x8082B01C
    /* li r10, 0 */ // 0x8082B020
    FUN_8082B0D4(r8, r4, r7, r10); // bl 0x8082B0D4
    r0 = *(0x14 + r1); // lwz @ 0x8082B028
    return;
}