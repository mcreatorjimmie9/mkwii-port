/* Function at 0x8071D7A4, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8071D7A4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x8071D7AC
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8071D7BC
    r30 = r4;
    r4 = r6;
    *(0x14 + r1) = r29; // stw @ 0x8071D7C8
    r29 = r5;
    r3 = *(0 + r7); // lwz @ 0x8071D7D0
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DECC(r4); // bl 0x8061DECC
    if (==) goto 0x0x8071d870;
    r0 = *(0x30 + r31); // lbz @ 0x8071D7E4
    if (!=) goto 0x0x8071d870;
    r3 = *(0x14 + r31); // lwz @ 0x8071D7F0
    /* slwi r30, r30, 2 */ // 0x8071D7F4
    /* lwzx r3, r3, r30 */ // 0x8071D7F8
    r3 = r3 + 0x74; // 0x8071D7FC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8071d814;
    /* li r3, 0 */ // 0x8071D80C
    /* b 0x8071d818 */ // 0x8071D810
    r3 = *(0xc + r3); // lwz @ 0x8071D814
}