/* Function at 0x806DE238, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_806DE238(int r3, int r4, int r5)
{
    r0 = *(0x3c + r3); // lwz @ 0x806DE238
    r5 = *(0x34 + r3); // lwz @ 0x806DE23C
    /* slwi r0, r0, 2 */ // 0x806DE240
    /* stwx r4, r5, r0 */ // 0x806DE244
    r4 = *(0x3c + r3); // lwz @ 0x806DE248
    r0 = r4 + 1; // 0x806DE24C
    *(0x3c + r3) = r0; // stw @ 0x806DE250
    return;
}