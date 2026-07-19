/* Function at 0x80676918, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80676918(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80676924
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x80676930
    /* lis r4, 0 */ // 0x80676934
    r3 = r3 + 0; // 0x80676938
    *(0 + r31) = r3; // stw @ 0x8067693C
    /* lis r7, 0 */ // 0x80676940
    r4 = r4 + 0; // 0x80676944
    r6 = *(0 + r7); // lwzu @ 0x80676948
    r3 = r31;
    *(8 + r1) = r6; // stw @ 0x80676950
    r5 = *(4 + r7); // lwz @ 0x80676954
    r0 = *(8 + r7); // lwz @ 0x80676958
    *(0x184 + r31) = r0; // stw @ 0x8067695C
    *(0x174 + r31) = r4; // stw @ 0x80676960
    *(0x178 + r31) = r31; // stw @ 0x80676964
    *(0x17c + r31) = r6; // stw @ 0x80676968
    *(0x180 + r31) = r5; // stw @ 0x8067696C
    *(0x10 + r1) = r0; // stw @ 0x80676970
    r31 = *(0x1c + r1); // lwz @ 0x80676974
    r0 = *(0x24 + r1); // lwz @ 0x80676978
    *(0xc + r1) = r5; // stw @ 0x8067697C
    return;
}