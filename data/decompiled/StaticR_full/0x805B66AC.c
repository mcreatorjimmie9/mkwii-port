/* Function at 0x805B66AC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

int FUN_805B66AC(int r3, int r4, int r5, int r6, int r7, int r8, int r10)
{
    /* Stack frame: -16(r1) */
    r8 = r3;
    r10 = r4;
    *(0x14 + r1) = r0; // stw @ 0x805B66BC
    r0 = *(4 + r3); // lwz @ 0x805B66C0
    if (!=) goto 0x0x805b6720;
    r0 = *(4 + r4); // lwz @ 0x805B66CC
    if (!=) goto 0x0x805b66f8;
    r5 = r8 + 0x10; // 0x805B66D8
    /* li r3, 0x7ff */ // 0x805B66E0
    /* li r4, 0 */ // 0x805B66E4
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x805B66EC
    /* srwi r3, r0, 5 */ // 0x805B66F0
    /* b 0x805b6780 */ // 0x805B66F4
    r5 = r8 + 0x10; // 0x805B66F8
    r6 = *(0xc + r10); // lwz @ 0x805B66FC
    r7 = *(0x5c + r10); // lwz @ 0x805B6700
    /* li r3, 0x7ff */ // 0x805B6704
    r8 = *(8 + r10); // lbz @ 0x805B6708
    /* li r4, 0 */ // 0x805B670C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x805B6714
    /* srwi r3, r0, 5 */ // 0x805B6718
    /* b 0x805b6780 */ // 0x805B671C
    r0 = *(4 + r4); // lwz @ 0x805B6720
    if (!=) goto 0x0x805b6754;
    r6 = *(0xc + r8); // lwz @ 0x805B672C
    r7 = *(0x5c + r8); // lwz @ 0x805B6734
    /* li r3, 0x7ff */ // 0x805B6738
    r8 = *(8 + r8); // lbz @ 0x805B673C
    /* li r4, 0 */ // 0x805B6740
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x805B6748
    /* srwi r3, r0, 5 */ // 0x805B674C
    /* b 0x805b6780 */ // 0x805B6750
}