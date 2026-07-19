/* Function at 0x80799B64, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80799B64(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x38 + r1) = r30; // stw @ 0x80799B74
    r30 = r4;
    r5 = *(0 + r4); // lwz @ 0x80799B7C
    if (==) goto 0x0x80799c48;
    if (==) goto 0x0x80799b94;
    r31 = r5 + 0x30; // 0x80799B8C
    /* b 0x80799b98 */ // 0x80799B90
    /* li r31, 0 */ // 0x80799B94
    /* lis r3, 0 */ // 0x80799B98
    r3 = *(0 + r3); // lwz @ 0x80799BA0
    r3 = *(0x100 + r3); // lwz @ 0x80799BA4
    if (==) goto 0x0x80799bb4;
    r4 = *(0x90 + r5); // lwz @ 0x80799BAC
    /* b 0x80799bb8 */ // 0x80799BB0
    /* li r4, -1 */ // 0x80799BB4
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r6 = *(0x18 + r31); // lwz @ 0x80799BC0
    /* lis r0, 0x4330 */ // 0x80799BC4
    r5 = *(0x14 + r1); // lwz @ 0x80799BC8
    /* lis r4, 0 */ // 0x80799BCC
    /* lis r3, 0 */ // 0x80799BD0
    *(0x28 + r1) = r0; // stw @ 0x80799BD4
}