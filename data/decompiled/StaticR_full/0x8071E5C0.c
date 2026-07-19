/* Function at 0x8071E5C0, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8071E5C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8071E5CC
    r31 = r3;
    FUN_8071E670(); // bl 0x8071E670
    r3 = r31;
    FUN_8071EC5C(r3); // bl 0x8071EC5C
    r0 = *(0x14c + r31); // lbz @ 0x8071E5E0
    if (==) goto 0x0x8071e60c;
    r3 = *(0x158 + r31); // lwz @ 0x8071E5EC
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0x158 + r31); // lwz @ 0x8071E5F4
    /* li r4, 0 */ // 0x8071E5F8
    r12 = *(0 + r3); // lwz @ 0x8071E5FC
    r12 = *(0xc + r12); // lwz @ 0x8071E600
    /* mtctr r12 */ // 0x8071E604
    /* bctrl  */ // 0x8071E608
    r0 = *(0x14d + r31); // lbz @ 0x8071E60C
    if (==) goto 0x0x8071e638;
    r3 = *(0x15c + r31); // lwz @ 0x8071E618
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0x15c + r31); // lwz @ 0x8071E620
    /* li r4, 0 */ // 0x8071E624
    r12 = *(0 + r3); // lwz @ 0x8071E628
    r12 = *(0xc + r12); // lwz @ 0x8071E62C
    /* mtctr r12 */ // 0x8071E630
    /* bctrl  */ // 0x8071E634
    r0 = *(0x151 + r31); // lbz @ 0x8071E638
    if (==) goto 0x0x8071e65c;
    r3 = *(0x160 + r31); // lwz @ 0x8071E644
    /* li r4, 0 */ // 0x8071E648
    r12 = *(0 + r3); // lwz @ 0x8071E64C
    r12 = *(0xc + r12); // lwz @ 0x8071E650
    /* mtctr r12 */ // 0x8071E654
    /* bctrl  */ // 0x8071E658
    r0 = *(0x14 + r1); // lwz @ 0x8071E65C
    r31 = *(0xc + r1); // lwz @ 0x8071E660
    return;
}