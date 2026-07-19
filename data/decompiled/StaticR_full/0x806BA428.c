/* Function at 0x806BA428, size=72 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806BA428(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x806BA430
    r3 = r3 + 0x98; // 0x806BA434
    *(0x14 + r1) = r0; // stw @ 0x806BA438
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r4 = *(0x38 + r3); // lwz @ 0x806BA440
    /* li r3, 1 */ // 0x806BA444
    r4 = r4 + -1; // 0x806BA448
    /* subfic r0, r4, 1 */ // 0x806BA44C
    /* orc r3, r3, r4 */ // 0x806BA450
    /* srwi r0, r0, 1 */ // 0x806BA454
    /* subf r0, r0, r3 */ // 0x806BA458
    /* srwi r3, r0, 0x1f */ // 0x806BA45C
    r0 = *(0x14 + r1); // lwz @ 0x806BA460
    return;
}