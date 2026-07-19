/* Function at 0x806C87E0, size=132 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

void FUN_806C87E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806C87E8
    *(0x14 + r1) = r0; // stw @ 0x806C87EC
    r3 = *(0 + r3); // lwz @ 0x806C87F0
    r4 = *(0 + r3); // lwz @ 0x806C87F4
    r0 = *(0 + r4); // lwz @ 0x806C87F8
    if (<) goto 0x0x806c880c;
    if (<=) goto 0x0x806c8818;
    if (==) goto 0x0x806c8828;
    /* b 0x806c8840 */ // 0x806C8814
    /* li r4, 0x41 */ // 0x806C8818
    /* li r5, 0 */ // 0x806C881C
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* b 0x806c8840 */ // 0x806C8824
    /* li r4, 0x47 */ // 0x806C8828
    /* li r5, 0 */ // 0x806C882C
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x806C8834
    r3 = *(0 + r3); // lwz @ 0x806C8838
    FUN_8078819C(r4, r5, r3); // bl 0x8078819C
    /* lis r3, 0 */ // 0x806C8840
    /* li r4, 0 */ // 0x806C8844
    r3 = *(0 + r3); // lwz @ 0x806C8848
    /* li r5, 0xff */ // 0x806C884C
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806C8854
    return;
}