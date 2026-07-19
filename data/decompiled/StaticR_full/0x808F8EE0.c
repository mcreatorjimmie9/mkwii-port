/* Function at 0x808F8EE0, size=352 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808F8EE0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808F8EF8
    *(0x10 + r1) = r28; // stw @ 0x808F8EFC
    r4 = *(0x24 + r3); // lha @ 0x808F8F00
    r0 = *(0x26 + r3); // lbz @ 0x808F8F04
    if (<) goto 0x0x808f8f18;
    /* li r3, -1 */ // 0x808F8F10
    /* b 0x808f9020 */ // 0x808F8F14
    /* lis r3, 0 */ // 0x808F8F18
    r4 = *(0x27 + r31); // lbz @ 0x808F8F1C
    r3 = *(0 + r3); // lwz @ 0x808F8F20
    FUN_808F6C30(r3, r3); // bl 0x808F6C30
    if (!=) goto 0x0x808f8f38;
    /* li r3, -1 */ // 0x808F8F30
    /* b 0x808f9020 */ // 0x808F8F34
    r3 = *(0x26 + r31); // lbz @ 0x808F8F38
    r29 = *(0x1c + r31); // lwz @ 0x808F8F3C
    if (!=) goto 0x0x808f8f50;
    r3 = *(0x18 + r31); // lwz @ 0x808F8F48
    /* b 0x808f9020 */ // 0x808F8F4C
    if (!=) goto 0x0x808f8f70;
    r3 = r31;
    /* li r4, 2 */ // 0x808F8F5C
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r0 = *(0x18 + r31); // lwz @ 0x808F8F64
    r29 = r0 + r3; // 0x808F8F68
    /* b 0x808f901c */ // 0x808F8F6C
    r0 = *(0x24 + r31); // lha @ 0x808F8F70
    /* subf r28, r0, r3 */ // 0x808F8F74
    if (!=) goto 0x0x808f8fb8;
    /* li r5, 0 */ // 0x808F8F80
    /* li r4, 1 */ // 0x808F8F84
    /* mtctr r3 */ // 0x808F8F88
    if (<=) goto 0x0x808f901c;
    r0 = *(0x20 + r31); // lwz @ 0x808F8F94
    r3 = r4 << r5; // slw
    /* andc. r0, r3, r0 */ // 0x808F8F9C
    if (==) goto 0x0x808f8fac;
    r0 = *(0x18 + r31); // lwz @ 0x808F8FA4
    r29 = r0 + r5; // 0x808F8FA8
    r5 = r5 + 1; // 0x808F8FAC
    if (counter-- != 0) goto 0x0x808f8f94;
    /* b 0x808f901c */ // 0x808F8FB4
    /* li r30, 1 */ // 0x808F8FB8
    /* b 0x808f9010 */ // 0x808F8FBC
    r3 = r31;
    r4 = r28;
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r0 = *(0x26 + r31); // lbz @ 0x808F8FCC
    /* li r5, 0 */ // 0x808F8FD0
    /* li r6, 0 */ // 0x808F8FD4
    /* mtctr r0 */ // 0x808F8FD8
    if (<=) goto 0x0x808f9010;
    r0 = *(0x20 + r31); // lwz @ 0x808F8FE4
    r4 = r30 << r6; // slw
    /* andc. r0, r4, r0 */ // 0x808F8FEC
    if (==) goto 0x0x808f9008;
    if (!=) goto 0x0x808f9004;
    r0 = *(0x18 + r31); // lwz @ 0x808F8FFC
    r29 = r0 + r6; // 0x808F9000
    r5 = r5 + 1; // 0x808F9004
    r6 = r6 + 1; // 0x808F9008
    if (counter-- != 0) goto 0x0x808f8fe4;
    r0 = *(0x1c + r31); // lwz @ 0x808F9010
    if (==) goto 0x0x808f8fc0;
    r3 = r29;
    r0 = *(0x24 + r1); // lwz @ 0x808F9020
    r31 = *(0x1c + r1); // lwz @ 0x808F9024
    r30 = *(0x18 + r1); // lwz @ 0x808F9028
    r29 = *(0x14 + r1); // lwz @ 0x808F902C
    r28 = *(0x10 + r1); // lwz @ 0x808F9030
    return;
}