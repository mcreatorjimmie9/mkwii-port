/* Function at 0x806EC6D8, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_806EC6D8(int r3, int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x806EC6D8
    r6 = *(0 + r6); // lwz @ 0x806EC6DC
    r0 = *(0x291c + r6); // lwz @ 0x806EC6E0
    /* mulli r0, r0, 0x58 */ // 0x806EC6E4
    r6 = r6 + r0; // 0x806EC6E8
    r0 = *(0x59 + r6); // lbz @ 0x806EC6EC
    if (!=) goto 0x0x806ec70c;
    /* slwi r0, r5, 3 */ // 0x806EC6F8
    r3 = r3 + r0; // 0x806EC6FC
    r3 = *(0x1e + r3); // lbz @ 0x806EC700
    /* extsb r3, r3 */ // 0x806EC704
    return;
    /* mulli r4, r4, 0x38 */ // 0x806EC70C
    /* slwi r0, r5, 3 */ // 0x806EC710
    r3 = r3 + r4; // 0x806EC714
    r3 = r3 + r0; // 0x806EC718
    r3 = *(0x56 + r3); // lbz @ 0x806EC71C
    /* extsb r3, r3 */ // 0x806EC720
    return;
}