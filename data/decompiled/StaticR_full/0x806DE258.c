/* Function at 0x806DE258, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_806DE258(int r3, int r4, int r5, int r6)
{
    /* li r0, 0 */ // 0x806DE258
    *(0x40 + r3) = r0; // stw @ 0x806DE25C
    /* li r6, 0 */ // 0x806DE260
    /* li r5, 0 */ // 0x806DE264
    /* b 0x806de294 */ // 0x806DE268
    r4 = *(0x34 + r3); // lwz @ 0x806DE26C
    /* lwzx r4, r4, r5 */ // 0x806DE270
    r0 = *(0x184 + r4); // lwz @ 0x806DE274
    if (>=) goto 0x0x806de28c;
    r4 = *(0x40 + r3); // lwz @ 0x806DE280
    r0 = r4 + 1; // 0x806DE284
    *(0x40 + r3) = r0; // stw @ 0x806DE288
    r5 = r5 + 4; // 0x806DE28C
    r6 = r6 + 1; // 0x806DE290
    r0 = *(0x3c + r3); // lwz @ 0x806DE294
    if (<) goto 0x0x806de26c;
    return;
}