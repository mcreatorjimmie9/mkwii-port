/* Function at 0x806DE544, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_806DE544(int r3, int r4, int r5, int r6)
{
    r4 = r3;
    /* lis r6, 0 */ // 0x806DE548
    r3 = *(0x34 + r3); // lwz @ 0x806DE54C
    r6 = r6 + 0; // 0x806DE550
    r4 = *(0x3c + r4); // lwz @ 0x806DE554
    /* li r5, 4 */ // 0x806DE558
    /* b 0x805e3430 */ // 0x806DE55C
}