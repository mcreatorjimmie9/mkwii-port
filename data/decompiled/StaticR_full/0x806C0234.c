/* Function at 0x806C0234, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806C0234(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x806C023C
    r3 = r3 + 0x98; // 0x806C0240
    *(0x14 + r1) = r0; // stw @ 0x806C0244
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x806C024C
    r0 = r3 + -3; // 0x806C0250
    /* cntlzw r0, r0 */ // 0x806C0254
    /* srwi r3, r0, 5 */ // 0x806C0258
    r0 = *(0x14 + r1); // lwz @ 0x806C025C
    return;
}