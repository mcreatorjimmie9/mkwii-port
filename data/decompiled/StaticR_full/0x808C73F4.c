/* Function at 0x808C73F4, size=128 bytes */
/* Stack frame: 96 bytes */
/* Calls: 1 function(s) */

void FUN_808C73F4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -96(r1) */
    /* lis r5, 0 */ // 0x808C73FC
    *(0x64 + r1) = r0; // stw @ 0x808C7400
    r5 = r5 + 0; // 0x808C7404
    /* li r0, 0xa */ // 0x808C7408
    r7 = r5 + -4; // 0x808C7410
    /* mtctr r0 */ // 0x808C7414
    r5 = *(4 + r7); // lwz @ 0x808C7418
    r0 = *(8 + r7); // lwzu @ 0x808C741C
    *(4 + r8) = r5; // stw @ 0x808C7420
    *(8 + r8) = r0; // stwu @ 0x808C7424
    if (counter-- != 0) goto 0x0x808c7418;
    r0 = *(0x20c + r4); // lwz @ 0x808C742C
    if (<) goto 0x0x808c7464;
    if (>=) goto 0x0x808c7444;
    /* b 0x808c7464 */ // 0x808C7440
    /* slwi r5, r0, 4 */ // 0x808C7444
    r0 = r0 + r5; // 0x808C744C
    /* slwi r4, r6, 2 */ // 0x808C7450
    r3 = *(0x2bc + r3); // lwz @ 0x808C7454
    /* li r5, 0 */ // 0x808C7458
    /* lwzx r4, r4, r0 */ // 0x808C745C
    FUN_808D5A00(r5); // bl 0x808D5A00
    r0 = *(0x64 + r1); // lwz @ 0x808C7464
    return;
}