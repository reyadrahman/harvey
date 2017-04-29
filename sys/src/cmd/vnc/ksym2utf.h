/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

/*
 * VNC uses X11's keysyms defined in X11/keysym.h, this is a converter
 * to unicode characters
 */
static ulong
ksym2utf [] = {
	[0x1a1] =	L'Ą',
	[0x1a2] =	L'˘',
	[0x1a3] =	L'Ł',
	[0x1a5] =	L'Ľ',
	[0x1a6] =	L'Ś',
	[0x1a9] =	L'Š',
	[0x1aa] =	L'Ş',
	[0x1ab] =	L'Ť',
	[0x1ac] =	L'Ź',
	[0x1ae] =	L'Ž',
	[0x1af] =	L'Ż',
	[0x1b1] =	L'ą',
	[0x1b2] =	L'˛',
	[0x1b3] =	L'ł',
	[0x1b5] =	L'ľ',
	[0x1b6] =	L'ś',
	[0x1b7] =	L'ˇ',
	[0x1b9] =	L'š',
	[0x1ba] =	L'ş',
	[0x1bb] =	L'ť',
	[0x1bc] =	L'ź',
	[0x1bd] =	L'˝',
	[0x1be] =	L'ž',
	[0x1bf] =	L'ż',
	[0x1c0] =	L'Ŕ',
	[0x1c3] =	L'Ă',
	[0x1c5] =	L'Ĺ',
	[0x1c6] =	L'Ć',
	[0x1c8] =	L'Č',
	[0x1ca] =	L'Ę',
	[0x1cc] =	L'Ě',
	[0x1cf] =	L'Ď',
	[0x1d0] =	L'Đ',
	[0x1d1] =	L'Ń',
	[0x1d2] =	L'Ň',
	[0x1d5] =	L'Ő',
	[0x1d8] =	L'Ř',
	[0x1d9] =	L'Ů',
	[0x1db] =	L'Ű',
	[0x1de] =	L'Ţ',
	[0x1e0] =	L'ŕ',
	[0x1e3] =	L'ă',
	[0x1e5] =	L'ĺ',
	[0x1e6] =	L'ć',
	[0x1e8] =	L'č',
	[0x1ea] =	L'ę',
	[0x1ec] =	L'ě',
	[0x1ef] =	L'ď',
	[0x1f0] =	L'đ',
	[0x1f1] =	L'ń',
	[0x1f2] =	L'ň',
	[0x1f5] =	L'ő',
	[0x1f8] =	L'ř',
	[0x1f9] =	L'ů',
	[0x1fb] =	L'ű',
	[0x1fe] =	L'ţ',
	[0x1ff] =	L'˙',
	[0x2a1] =	L'Ħ',
	[0x2a6] =	L'Ĥ',
	[0x2a9] =	L'İ',
	[0x2ab] =	L'Ğ',
	[0x2ac] =	L'Ĵ',
	[0x2b1] =	L'ħ',
	[0x2b6] =	L'ĥ',
	[0x2b9] =	L'ı',
	[0x2bb] =	L'ğ',
	[0x2bc] =	L'ĵ',
	[0x2c5] =	L'Ċ',
	[0x2c6] =	L'Ĉ',
	[0x2d5] =	L'Ġ',
	[0x2d8] =	L'Ĝ',
	[0x2dd] =	L'Ŭ',
	[0x2de] =	L'Ŝ',
	[0x2e5] =	L'ċ',
	[0x2e6] =	L'ĉ',
	[0x2f5] =	L'ġ',
	[0x2f8] =	L'ĝ',
	[0x2fd] =	L'ŭ',
	[0x2fe] =	L'ŝ',
	[0x3a2] =	L'ĸ',
	[0x3a3] =	L'Ŗ',
	[0x3a5] =	L'Ĩ',
	[0x3a6] =	L'Ļ',
	[0x3aa] =	L'Ē',
	[0x3ab] =	L'Ģ',
	[0x3ac] =	L'Ŧ',
	[0x3b3] =	L'ŗ',
	[0x3b5] =	L'ĩ',
	[0x3b6] =	L'ļ',
	[0x3ba] =	L'ē',
	[0x3bb] =	L'ģ',
	[0x3bc] =	L'ŧ',
	[0x3bd] =	L'Ŋ',
	[0x3bf] =	L'ŋ',
	[0x3c0] =	L'Ā',
	[0x3c7] =	L'Į',
	[0x3cc] =	L'Ė',
	[0x3cf] =	L'Ī',
	[0x3d1] =	L'Ņ',
	[0x3d2] =	L'Ō',
	[0x3d3] =	L'Ķ',
	[0x3d9] =	L'Ų',
	[0x3dd] =	L'Ũ',
	[0x3de] =	L'Ū',
	[0x3e0] =	L'ā',
	[0x3e7] =	L'į',
	[0x3ec] =	L'ė',
	[0x3ef] =	L'ī',
	[0x3f1] =	L'ņ',
	[0x3f2] =	L'ō',
	[0x3f3] =	L'ķ',
	[0x3f9] =	L'ų',
	[0x3fd] =	L'ũ',
	[0x3fe] =	L'ū',
	[0x4a1] =	L'。',
	[0x4a2] =	L'〈',
	[0x4a3] =	L'〉',
	[0x4a4] =	L'、',
	[0x4a5] =	L'・',
	[0x4a6] =	L'ヲ',
	[0x4a7] =	L'ァ',
	[0x4a8] =	L'ィ',
	[0x4a9] =	L'ゥ',
	[0x4aa] =	L'ェ',
	[0x4ab] =	L'ォ',
	[0x4ac] =	L'ャ',
	[0x4ad] =	L'ュ',
	[0x4ae] =	L'ョ',
	[0x4af] =	L'ッ',
	[0x4b0] =	L'ー',
	[0x4b1] =	L'ア',
	[0x4b2] =	L'イ',
	[0x4b3] =	L'ウ',
	[0x4b4] =	L'エ',
	[0x4b5] =	L'オ',
	[0x4b6] =	L'カ',
	[0x4b7] =	L'キ',
	[0x4b8] =	L'ク',
	[0x4b9] =	L'ケ',
	[0x4ba] =	L'コ',
	[0x4bb] =	L'サ',
	[0x4bc] =	L'シ',
	[0x4bd] =	L'ス',
	[0x4be] =	L'セ',
	[0x4bf] =	L'ソ',
	[0x4c0] =	L'タ',
	[0x4c1] =	L'チ',
	[0x4c2] =	L'ツ',
	[0x4c3] =	L'テ',
	[0x4c4] =	L'ト',
	[0x4c5] =	L'ナ',
	[0x4c6] =	L'ニ',
	[0x4c7] =	L'ヌ',
	[0x4c8] =	L'ネ',
	[0x4c9] =	L'ノ',
	[0x4ca] =	L'ハ',
	[0x4cb] =	L'ヒ',
	[0x4cc] =	L'フ',
	[0x4cd] =	L'ヘ',
	[0x4ce] =	L'ホ',
	[0x4cf] =	L'マ',
	[0x4d0] =	L'ミ',
	[0x4d1] =	L'ム',
	[0x4d2] =	L'メ',
	[0x4d3] =	L'モ',
	[0x4d4] =	L'ヤ',
	[0x4d5] =	L'ユ',
	[0x4d6] =	L'ヨ',
	[0x4d7] =	L'ラ',
	[0x4d8] =	L'リ',
	[0x4d9] =	L'ル',
	[0x4da] =	L'レ',
	[0x4db] =	L'ロ',
	[0x4dc] =	L'ワ',
	[0x4dd] =	L'ン',
	[0x4de] =	L'゛',
	[0x4df] =	L'゜',
	[0x58a] =	L'ロ',
	[0x58b] =	L'ワ',
	[0x58c] =	L'ン',
	[0x58d] =	L'゛',
	[0x58e] =	L'゜',
	[0x590] =	L'۰',
	[0x591] =	L'۱',
	[0x592] =	L'۲',
	[0x593] =	L'۳',
	[0x594] =	L'۴',
	[0x595] =	L'۵',
	[0x596] =	L'۶',
	[0x597] =	L'۷',
	[0x598] =	L'۸',
	[0x599] =	L'۹',
	[0x5a5] =	L'٪',
	[0x5a6] =	L'ٰ',
	[0x5a7] =	L'ٹ',
	[0x5a8] =	L'پ',
	[0x5a9] =	L'چ',
	[0x5aa] =	L'ڈ',
	[0x5ab] =	L'ڑ',
	[0x5ac] =	L'،',
	[0x5ae] =	L'۔',
	[0x5b0] =	L'٠',
	[0x5b1] =	L'١',
	[0x5b2] =	L'٢',
	[0x5b3] =	L'٣',
	[0x5b4] =	L'٤',
	[0x5b5] =	L'٥',
	[0x5b6] =	L'٦',
	[0x5b7] =	L'٧',
	[0x5b8] =	L'٨',
	[0x5b9] =	L'٩',
	[0x5bb] =	L'؛',
	[0x5bf] =	L'؟',
	[0x5c1] =	L'ء',
	[0x5c2] =	L'آ',
	[0x5c3] =	L'أ',
	[0x5c4] =	L'ؤ',
	[0x5c5] =	L'إ',
	[0x5c6] =	L'ئ',
	[0x5c7] =	L'ا',
	[0x5c8] =	L'ب',
	[0x5c9] =	L'ة',
	[0x5ca] =	L'ت',
	[0x5cb] =	L'ث',
	[0x5cc] =	L'ج',
	[0x5cd] =	L'ح',
	[0x5ce] =	L'خ',
	[0x5cf] =	L'د',
	[0x5d0] =	L'ذ',
	[0x5d1] =	L'ر',
	[0x5d2] =	L'ز',
	[0x5d3] =	L'س',
	[0x5d4] =	L'ش',
	[0x5d5] =	L'ص',
	[0x5d6] =	L'ض',
	[0x5d7] =	L'ط',
	[0x5d8] =	L'ظ',
	[0x5d9] =	L'ع',
	[0x5da] =	L'غ',
	[0x5e0] =	L'ـ',
	[0x5e1] =	L'ف',
	[0x5e2] =	L'ق',
	[0x5e3] =	L'ك',
	[0x5e4] =	L'ل',
	[0x5e5] =	L'م',
	[0x5e6] =	L'ن',
	[0x5e7] =	L'ه',
	[0x5e8] =	L'و',
	[0x5e9] =	L'ى',
	[0x5ea] =	L'ي',
	[0x5eb] =	L'ً',
	[0x5ec] =	L'ٌ',
	[0x5ed] =	L'ٍ',
	[0x5ee] =	L'َ',
	[0x5ef] =	L'ُ',
	[0x5f0] =	L'ِ',
	[0x5f1] =	L'ّ',
	[0x5f2] =	L'ْ',
	[0x5f3] =	L'ٓ',
	[0x5f4] =	L'ٔ',
	[0x5f5] =	L'ٕ',
	[0x5f6] =	L'ژ',
	[0x5f7] =	L'ڤ',
	[0x5f8] =	L'ک',
	[0x5f9] =	L'گ',
	[0x5fa] =	L'ں',
	[0x5fb] =	L'ھ',
	[0x5fc] =	L'ی',
	[0x5fd] =	L'ے',
	[0x5fe] =	L'ہ',
	[0x680] =	L'Ғ',
	[0x681] =	L'Җ',
	[0x682] =	L'Қ',
	[0x683] =	L'Ҝ',
	[0x684] =	L'Ң',
	[0x685] =	L'Ү',
	[0x686] =	L'Ұ',
	[0x687] =	L'Ҳ',
	[0x688] =	L'Ҷ',
	[0x689] =	L'Ҹ',
	[0x68a] =	L'Һ',
	[0x68c] =	L'Ә',
	[0x68d] =	L'Ӣ',
	[0x68e] =	L'Ө',
	[0x68f] =	L'Ӯ',
	[0x690] =	L'ғ',
	[0x691] =	L'җ',
	[0x692] =	L'қ',
	[0x693] =	L'ҝ',
	[0x694] =	L'ң',
	[0x695] =	L'ү',
	[0x696] =	L'ұ',
	[0x697] =	L'ҳ',
	[0x698] =	L'ҷ',
	[0x699] =	L'ҹ',
	[0x69a] =	L'һ',
	[0x69c] =	L'ә',
	[0x69d] =	L'ӣ',
	[0x69e] =	L'ө',
	[0x69f] =	L'ӯ',
	[0x6a1] =	L'ђ',
	[0x6a2] =	L'ѓ',
	[0x6a3] =	L'ё',
	[0x6a4] =	L'є',
	[0x6a5] =	L'ѕ',
	[0x6a6] =	L'і',
	[0x6a7] =	L'ї',
	[0x6a8] =	L'ј',
	[0x6a9] =	L'љ',
	[0x6aa] =	L'њ',
	[0x6ab] =	L'ћ',
	[0x6ac] =	L'ќ',
	[0x6ad] =	L'ґ',
	[0x6ae] =	L'ў',
	[0x6af] =	L'џ',
	[0x6b0] =	L'№',
	[0x6b1] =	L'Ђ',
	[0x6b2] =	L'Ѓ',
	[0x6b3] =	L'Ё',
	[0x6b4] =	L'Є',
	[0x6b5] =	L'Ѕ',
	[0x6b6] =	L'І',
	[0x6b7] =	L'Ї',
	[0x6b8] =	L'Ј',
	[0x6b9] =	L'Љ',
	[0x6ba] =	L'Њ',
	[0x6bb] =	L'Ћ',
	[0x6bc] =	L'Ќ',
	[0x6bd] =	L'Ґ',
	[0x6be] =	L'Ў',
	[0x6bf] =	L'Џ',
	[0x6c0] =	L'ю',
	[0x6c1] =	L'а',
	[0x6c2] =	L'б',
	[0x6c3] =	L'ц',
	[0x6c4] =	L'д',
	[0x6c5] =	L'е',
	[0x6c6] =	L'ф',
	[0x6c7] =	L'г',
	[0x6c8] =	L'х',
	[0x6c9] =	L'и',
	[0x6ca] =	L'й',
	[0x6cb] =	L'к',
	[0x6cc] =	L'л',
	[0x6cd] =	L'м',
	[0x6ce] =	L'н',
	[0x6cf] =	L'о',
	[0x6d0] =	L'п',
	[0x6d1] =	L'я',
	[0x6d2] =	L'р',
	[0x6d3] =	L'с',
	[0x6d4] =	L'т',
	[0x6d5] =	L'у',
	[0x6d6] =	L'ж',
	[0x6d7] =	L'в',
	[0x6d8] =	L'ь',
	[0x6d9] =	L'ы',
	[0x6da] =	L'з',
	[0x6db] =	L'ш',
	[0x6dc] =	L'э',
	[0x6dd] =	L'щ',
	[0x6de] =	L'ч',
	[0x6df] =	L'ъ',
	[0x6e0] =	L'Ю',
	[0x6e1] =	L'А',
	[0x6e2] =	L'Б',
	[0x6e3] =	L'Ц',
	[0x6e4] =	L'Д',
	[0x6e5] =	L'Е',
	[0x6e6] =	L'Ф',
	[0x6e7] =	L'Г',
	[0x6e8] =	L'Х',
	[0x6e9] =	L'И',
	[0x6ea] =	L'Й',
	[0x6eb] =	L'К',
	[0x6ec] =	L'Л',
	[0x6ed] =	L'М',
	[0x6ee] =	L'Н',
	[0x6ef] =	L'О',
	[0x6f0] =	L'П',
	[0x6f1] =	L'Я',
	[0x6f2] =	L'Р',
	[0x6f3] =	L'С',
	[0x6f4] =	L'Т',
	[0x6f5] =	L'У',
	[0x6f6] =	L'Ж',
	[0x6f7] =	L'В',
	[0x6f8] =	L'Ь',
	[0x6f9] =	L'Ы',
	[0x6fa] =	L'З',
	[0x6fb] =	L'Ш',
	[0x6fc] =	L'Э',
	[0x6fd] =	L'Щ',
	[0x6fe] =	L'Ч',
	[0x6ff] =	L'Ъ',
	[0x7a1] =	L'Ά',
	[0x7a2] =	L'Έ',
	[0x7a3] =	L'Ή',
	[0x7a4] =	L'Ί',
	[0x7a5] =	L'Ϊ',
	[0x7a7] =	L'Ό',
	[0x7a8] =	L'Ύ',
	[0x7a9] =	L'Ϋ',
	[0x7ab] =	L'Ώ',
	[0x7ae] =	L'΅',
	[0x7af] =	L'―',
	[0x7b1] =	L'ά',
	[0x7b2] =	L'έ',
	[0x7b3] =	L'ή',
	[0x7b4] =	L'ί',
	[0x7b5] =	L'ϊ',
	[0x7b6] =	L'ΐ',
	[0x7b7] =	L'ό',
	[0x7b8] =	L'ύ',
	[0x7b9] =	L'ϋ',
	[0x7ba] =	L'ΰ',
	[0x7bb] =	L'ώ',
	[0x7c1] =	L'Α',
	[0x7c2] =	L'Β',
	[0x7c3] =	L'Γ',
	[0x7c4] =	L'Δ',
	[0x7c5] =	L'Ε',
	[0x7c6] =	L'Ζ',
	[0x7c7] =	L'Η',
	[0x7c8] =	L'Θ',
	[0x7c9] =	L'Ι',
	[0x7ca] =	L'Κ',
	[0x7cb] =	L'Λ',
	[0x7cc] =	L'Μ',
	[0x7cd] =	L'Ν',
	[0x7ce] =	L'Ξ',
	[0x7cf] =	L'Ο',
	[0x7d0] =	L'Π',
	[0x7d1] =	L'Ρ',
	[0x7d2] =	L'Σ',
	[0x7d4] =	L'Τ',
	[0x7d5] =	L'Υ',
	[0x7d6] =	L'Φ',
	[0x7d7] =	L'Χ',
	[0x7d8] =	L'Ψ',
	[0x7d9] =	L'Ω',
	[0x7e1] =	L'α',
	[0x7e2] =	L'β',
	[0x7e3] =	L'γ',
	[0x7e4] =	L'δ',
	[0x7e5] =	L'ε',
	[0x7e6] =	L'ζ',
	[0x7e7] =	L'η',
	[0x7e8] =	L'θ',
	[0x7e9] =	L'ι',
	[0x7ea] =	L'κ',
	[0x7eb] =	L'λ',
	[0x7ec] =	L'μ',
	[0x7ed] =	L'ν',
	[0x7ee] =	L'ξ',
	[0x7ef] =	L'ο',
	[0x7f0] =	L'π',
	[0x7f1] =	L'ρ',
	[0x7f2] =	L'σ',
	[0x7f3] =	L'ς',
	[0x7f4] =	L'τ',
	[0x7f5] =	L'υ',
	[0x7f6] =	L'φ',
	[0x7f7] =	L'χ',
	[0x7f8] =	L'ψ',
	[0x7f9] =	L'ω',
	[0x8a4] =	L'⌠',
	[0x8a5] =	L'⌡',
	[0x8a7] =	L'⌜',
	[0x8a8] =	L'⌝',
	[0x8a9] =	L'⌞',
	[0x8aa] =	L'⌟',
	[0x8bc] =	L'≤',
	[0x8bd] =	L'≠',
	[0x8be] =	L'≥',
	[0x8bf] =	L'∫',
	[0x8c0] =	L'∴',
	[0x8c2] =	L'∞',
	[0x8c5] =	L'∇',
	[0x8c8] =	L'≅',
	[0x8c9] =	L'≆',
	[0x8ce] =	L'⊢',
	[0x8d6] =	L'√',
	[0x8da] =	L'⊂',
	[0x8db] =	L'⊃',
	[0x8dc] =	L'∩',
	[0x8dd] =	L'∪',
	[0x8de] =	L'∧',
	[0x8df] =	L'∨',
	[0x8f6] =	L'ƒ',
	[0x8fb] =	L'←',
	[0x8fc] =	L'↑',
	[0x8fd] =	L'→',
	[0x8fe] =	L'↓',
	[0x9df] =	L'␢',
	[0x9e0] =	L'♦',
	[0x9e1] =	L'▦',
	[0x9e2] =	L'␉',
	[0x9e3] =	L'␌',
	[0x9e4] =	L'␍',
	[0x9e5] =	L'␊',
	[0x9e8] =	L'␊',
	[0x9e9] =	L'␋',
	[0x9ea] =	L'┘',
	[0x9eb] =	L'┐',
	[0x9ec] =	L'┌',
	[0x9ed] =	L'└',
	[0x9ee] =	L'┼',
	[0x9ef] =	L'─',
	[0x9f4] =	L'├',
	[0x9f5] =	L'┤',
	[0x9f6] =	L'┴',
	[0x9f7] =	L'┬',
	[0x9f8] =	L'│',
	[0xaa1] =	L' ',
	[0xaa2] =	L' ',
	[0xaa3] =	L' ',
	[0xaa4] =	L' ',
	[0xaa5] =	L' ',
	[0xaa6] =	L' ',
	[0xaa7] =	L' ',
	[0xaa8] =	L' ',
	[0xaa9] =	L'—',
	[0xaaa] =	L'–',
	[0xaae] =	L'…',
	[0xaaf] =	L'‥',
	[0xab0] =	L'⅓',
	[0xab1] =	L'⅔',
	[0xab2] =	L'⅕',
	[0xab3] =	L'⅖',
	[0xab4] =	L'⅗',
	[0xab5] =	L'⅘',
	[0xab6] =	L'⅙',
	[0xab7] =	L'⅚',
	[0xab8] =	L'℅',
	[0xabb] =	L'‒',
	[0xabc] =	L'‹',
	[0xabd] =	L'․',
	[0xabe] =	L'›',
	[0xac3] =	L'⅛',
	[0xac4] =	L'⅜',
	[0xac5] =	L'⅝',
	[0xac6] =	L'⅞',
	[0xac9] =	L'™',
	[0xaca] =	L'℠',
	[0xacc] =	L'◁',
	[0xacd] =	L'▷',
	[0xace] =	L'○',
	[0xacf] =	L'▭',
	[0xad0] =	L'‘',
	[0xad1] =	L'’',
	[0xad2] =	L'“',
	[0xad3] =	L'”',
	[0xad4] =	L'℞',
	[0xad6] =	L'′',
	[0xad7] =	L'″',
	[0xad9] =	L'✝',
	[0xadb] =	L'∎',
	[0xadc] =	L'◂',
	[0xadd] =	L'‣',
	[0xade] =	L'●',
	[0xadf] =	L'▬',
	[0xae0] =	L'◦',
	[0xae1] =	L'▫',
	[0xae2] =	L'▮',
	[0xae3] =	L'▵',
	[0xae4] =	L'▿',
	[0xae5] =	L'☆',
	[0xae6] =	L'•',
	[0xae7] =	L'▪',
	[0xae8] =	L'▴',
	[0xae9] =	L'▾',
	[0xaea] =	L'☚',
	[0xaeb] =	L'☛',
	[0xaec] =	L'♣',
	[0xaed] =	L'♦',
	[0xaee] =	L'♥',
	[0xaf0] =	L'✠',
	[0xaf1] =	L'†',
	[0xaf2] =	L'‡',
	[0xaf3] =	L'✓',
	[0xaf4] =	L'☒',
	[0xaf5] =	L'♯',
	[0xaf6] =	L'♭',
	[0xaf7] =	L'♂',
	[0xaf8] =	L'♀',
	[0xaf9] =	L'℡',
	[0xafa] =	L'⌕',
	[0xafb] =	L'℗',
	[0xafc] =	L'‸',
	[0xafd] =	L'‚',
	[0xafe] =	L'„',
	[0xcdf] =	L'‗',
	[0xce0] =	L'א',
	[0xce1] =	L'ב',
	[0xce2] =	L'ג',
	[0xce3] =	L'ד',
	[0xce4] =	L'ה',
	[0xce5] =	L'ו',
	[0xce6] =	L'ז',
	[0xce7] =	L'ח',
	[0xce8] =	L'ט',
	[0xce9] =	L'י',
	[0xcea] =	L'ך',
	[0xceb] =	L'כ',
	[0xcec] =	L'ל',
	[0xced] =	L'ם',
	[0xcee] =	L'מ',
	[0xcef] =	L'ן',
	[0xcf0] =	L'נ',
	[0xcf1] =	L'ס',
	[0xcf2] =	L'ע',
	[0xcf3] =	L'ף',
	[0xcf4] =	L'פ',
	[0xcf5] =	L'ץ',
	[0xcf6] =	L'צ',
	[0xcf7] =	L'ק',
	[0xcf8] =	L'ר',
	[0xcf9] =	L'ש',
	[0xcfa] =	L'ת',
	[0xda1] =	L'ก',
	[0xda2] =	L'ข',
	[0xda3] =	L'ฃ',
	[0xda4] =	L'ค',
	[0xda5] =	L'ฅ',
	[0xda6] =	L'ฆ',
	[0xda7] =	L'ง',
	[0xda8] =	L'จ',
	[0xda9] =	L'ฉ',
	[0xdaa] =	L'ช',
	[0xdab] =	L'ซ',
	[0xdac] =	L'ฌ',
	[0xdad] =	L'ญ',
	[0xdae] =	L'ฎ',
	[0xdaf] =	L'ฏ',
	[0xdb0] =	L'ฐ',
	[0xdb1] =	L'ฑ',
	[0xdb2] =	L'ฒ',
	[0xdb3] =	L'ณ',
	[0xdb4] =	L'ด',
	[0xdb5] =	L'ต',
	[0xdb6] =	L'ถ',
	[0xdb7] =	L'ท',
	[0xdb8] =	L'ธ',
	[0xdb9] =	L'น',
	[0xdba] =	L'บ',
	[0xdbb] =	L'ป',
	[0xdbc] =	L'ผ',
	[0xdbd] =	L'ฝ',
	[0xdbe] =	L'พ',
	[0xdbf] =	L'ฟ',
	[0xdc0] =	L'ภ',
	[0xdc1] =	L'ม',
	[0xdc2] =	L'ย',
	[0xdc3] =	L'ร',
	[0xdc4] =	L'ฤ',
	[0xdc5] =	L'ล',
	[0xdc6] =	L'ฦ',
	[0xdc7] =	L'ว',
	[0xdc8] =	L'ศ',
	[0xdc9] =	L'ษ',
	[0xdca] =	L'ส',
	[0xdcb] =	L'ห',
	[0xdcc] =	L'ฬ',
	[0xdcd] =	L'อ',
	[0xdce] =	L'ฮ',
	[0xdcf] =	L'ฯ',
	[0xdd0] =	L'ะ',
	[0xdd1] =	L'ั',
	[0xdd2] =	L'า',
	[0xdd3] =	L'ำ',
	[0xdd4] =	L'ิ',
	[0xdd5] =	L'ี',
	[0xdd6] =	L'ึ',
	[0xdd7] =	L'ื',
	[0xdd8] =	L'ุ',
	[0xdd9] =	L'ู',
	[0xdda] =	L'ฺ',
	[0xdde] =	L'฾',
	[0xddf] =	L'฿',
	[0xde0] =	L'เ',
	[0xde1] =	L'แ',
	[0xde2] =	L'โ',
	[0xde3] =	L'ใ',
	[0xde4] =	L'ไ',
	[0xde5] =	L'ๅ',
	[0xde6] =	L'ๆ',
	[0xde7] =	L'็',
	[0xde8] =	L'่',
	[0xde9] =	L'้',
	[0xdea] =	L'๊',
	[0xdeb] =	L'๋',
	[0xdec] =	L'์',
	[0xded] =	L'ํ',
	[0xdf0] =	L'๐',
	[0xdf1] =	L'๑',
	[0xdf2] =	L'๒',
	[0xdf3] =	L'๓',
	[0xdf4] =	L'๔',
	[0xdf5] =	L'๕',
	[0xdf6] =	L'๖',
	[0xdf7] =	L'๗',
	[0xdf8] =	L'๘',
	[0xdf9] =	L'๙',
	[0xea1] =	L'ᄁ',
	[0xea2] =	L'ᄁ',
	[0xea3] =	L'ᆪ',
	[0xea4] =	L'ᄂ',
	[0xea5] =	L'ᆬ',
	[0xea6] =	L'ᆭ',
	[0xea7] =	L'ᄃ',
	[0xea8] =	L'ᄄ',
	[0xea9] =	L'ᄅ',
	[0xeaa] =	L'ᆰ',
	[0xeab] =	L'ᆱ',
	[0xeac] =	L'ᆲ',
	[0xead] =	L'ᆳ',
	[0xeae] =	L'ᆴ',
	[0xeaf] =	L'ᆵ',
	[0xeb0] =	L'ᆶ',
	[0xeb1] =	L'ᄆ',
	[0xeb2] =	L'ᄇ',
	[0xeb3] =	L'ᄈ',
	[0xeb4] =	L'ᆹ',
	[0xeb5] =	L'ᄉ',
	[0xeb6] =	L'ᄊ',
	[0xeb7] =	L'ᄋ',
	[0xeb8] =	L'ᄌ',
	[0xeb9] =	L'ᄍ',
	[0xeba] =	L'ᄎ',
	[0xebb] =	L'ᄏ',
	[0xebc] =	L'ᄐ',
	[0xebd] =	L'ᄑ',
	[0xebe] =	L'ᄒ',
	[0xebf] =	L'ᅡ',
	[0xec0] =	L'ᅢ',
	[0xec1] =	L'ᅣ',
	[0xec2] =	L'ᅤ',
	[0xec3] =	L'ᅥ',
	[0xec4] =	L'ᅦ',
	[0xec5] =	L'ᅧ',
	[0xec6] =	L'ᅨ',
	[0xec7] =	L'ᅩ',
	[0xec8] =	L'ᅪ',
	[0xec9] =	L'ᅫ',
	[0xeca] =	L'ᅬ',
	[0xecb] =	L'ᅭ',
	[0xecc] =	L'ᅮ',
	[0xecd] =	L'ᅯ',
	[0xece] =	L'ᅰ',
	[0xecf] =	L'ᅱ',
	[0xed0] =	L'ᅲ',
	[0xed1] =	L'ᅳ',
	[0xed2] =	L'ᅴ',
	[0xed3] =	L'ᅵ',
	[0xed4] =	L'ᆨ',
	[0xed5] =	L'ᆩ',
	[0xed6] =	L'ᆪ',
	[0xed7] =	L'ᆫ',
	[0xed8] =	L'ᆬ',
	[0xed9] =	L'ᆭ',
	[0xeda] =	L'ᆮ',
	[0xedb] =	L'ᆯ',
	[0xedc] =	L'ᆰ',
	[0xedd] =	L'ᆱ',
	[0xede] =	L'ᆲ',
	[0xedf] =	L'ᆳ',
	[0xee0] =	L'ᆴ',
	[0xee1] =	L'ᆵ',
	[0xee2] =	L'ᆶ',
	[0xee3] =	L'ᆷ',
	[0xee4] =	L'ᆸ',
	[0xee5] =	L'ᆹ',
	[0xee6] =	L'ᆺ',
	[0xee7] =	L'ᆻ',
	[0xee8] =	L'ᆼ',
	[0xee9] =	L'ᆽ',
	[0xeea] =	L'ᆾ',
	[0xeeb] =	L'ᆿ',
	[0xeec] =	L'ᇀ',
	[0xeed] =	L'ᇁ',
	[0xeee] =	L'ᇂ',
	[0xef2] =	L'ᅀ',
	[0xef5] =	L'ᅙ',
	[0xef6] =	L'ᆞ',
	[0xef8] =	L'ᇫ',
	[0xefa] =	L'ᇹ',
	[0xeff] =	L'₩',
	[0x12a1] =	L'Ḃ',
	[0x12a2] =	L'ḃ',
	[0x12a6] =	L'Ḋ',
	[0x12a8] =	L'Ẁ',
	[0x12aa] =	L'Ẃ',
	[0x12ab] =	L'ḋ',
	[0x12ac] =	L'Ỳ',
	[0x12b0] =	L'Ḟ',
	[0x12b1] =	L'ḟ',
	[0x12b4] =	L'Ṁ',
	[0x12b5] =	L'ṁ',
	[0x12b7] =	L'Ṗ',
	[0x12b8] =	L'ẁ',
	[0x12b9] =	L'ṗ',
	[0x12ba] =	L'ẃ',
	[0x12bb] =	L'Ṡ',
	[0x12bc] =	L'ỳ',
	[0x12bd] =	L'Ẅ',
	[0x12be] =	L'ẅ',
	[0x12bf] =	L'ṡ',
	[0x12d0] =	L'Ŵ',
	[0x12d7] =	L'Ṫ',
	[0x12de] =	L'Ŷ',
	[0x12f0] =	L'ŵ',
	[0x12f7] =	L'ṫ',
	[0x12fe] =	L'ŷ',
	[0x13bc] =	L'Œ',
	[0x13bd] =	L'œ',
	[0x13be] =	L'Ÿ',
	[0x14a1] =	L'❁',
	[0x14a2] =	L'§',
	[0x14a3] =	L'։',
	[0x14a4] =	L')',
	[0x14a5] =	L'(',
	[0x14a6] =	L'»',
	[0x14a7] =	L'«',
	[0x14a8] =	L'—',
	[0x14a9] =	L'.',
	[0x14aa] =	L'՝',
	[0x14ab] =	L',',
	[0x14ac] =	L'–',
	[0x14ad] =	L'֊',
	[0x14ae] =	L'…',
	[0x14af] =	L'՜',
	[0x14b0] =	L'՛',
	[0x14b1] =	L'՞',
	[0x14b2] =	L'Ա',
	[0x14b3] =	L'ա',
	[0x14b4] =	L'Բ',
	[0x14b5] =	L'բ',
	[0x14b6] =	L'Գ',
	[0x14b7] =	L'գ',
	[0x14b8] =	L'Դ',
	[0x14b9] =	L'դ',
	[0x14ba] =	L'Ե',
	[0x14bb] =	L'ե',
	[0x14bc] =	L'Զ',
	[0x14bd] =	L'զ',
	[0x14be] =	L'Է',
	[0x14bf] =	L'է',
	[0x14c0] =	L'Ը',
	[0x14c1] =	L'ը',
	[0x14c2] =	L'Թ',
	[0x14c3] =	L'թ',
	[0x14c4] =	L'Ժ',
	[0x14c5] =	L'ժ',
	[0x14c6] =	L'Ի',
	[0x14c7] =	L'ի',
	[0x14c8] =	L'Լ',
	[0x14c9] =	L'լ',
	[0x14ca] =	L'Խ',
	[0x14cb] =	L'խ',
	[0x14cc] =	L'Ծ',
	[0x14cd] =	L'ծ',
	[0x14ce] =	L'Կ',
	[0x14cf] =	L'կ',
	[0x14d0] =	L'Հ',
	[0x14d1] =	L'հ',
	[0x14d2] =	L'Ձ',
	[0x14d3] =	L'ձ',
	[0x14d4] =	L'Ղ',
	[0x14d5] =	L'ղ',
	[0x14d6] =	L'Ճ',
	[0x14d7] =	L'ճ',
	[0x14d8] =	L'Մ',
	[0x14d9] =	L'մ',
	[0x14da] =	L'Յ',
	[0x14db] =	L'յ',
	[0x14dc] =	L'Ն',
	[0x14dd] =	L'ն',
	[0x14de] =	L'Շ',
	[0x14df] =	L'շ',
	[0x14e0] =	L'Ո',
	[0x14e1] =	L'ո',
	[0x14e2] =	L'Չ',
	[0x14e3] =	L'չ',
	[0x14e4] =	L'Պ',
	[0x14e5] =	L'պ',
	[0x14e6] =	L'Ջ',
	[0x14e7] =	L'ջ',
	[0x14e8] =	L'Ռ',
	[0x14e9] =	L'ռ',
	[0x14ea] =	L'Ս',
	[0x14eb] =	L'ս',
	[0x14ec] =	L'Վ',
	[0x14ed] =	L'վ',
	[0x14ee] =	L'Տ',
	[0x14ef] =	L'տ',
	[0x14f0] =	L'Ր',
	[0x14f1] =	L'ր',
	[0x14f2] =	L'Ց',
	[0x14f3] =	L'ց',
	[0x14f4] =	L'Ւ',
	[0x14f5] =	L'ւ',
	[0x14f6] =	L'Փ',
	[0x14f7] =	L'փ',
	[0x14f8] =	L'Ք',
	[0x14f9] =	L'ք',
	[0x14fa] =	L'Օ',
	[0x14fb] =	L'օ',
	[0x14fc] =	L'Ֆ',
	[0x14fd] =	L'ֆ',
	[0x14fe] =	L'’',
	[0x14ff] =	L''',
	[0x15d0] =	L'ა',
	[0x15d1] =	L'ბ',
	[0x15d2] =	L'გ',
	[0x15d3] =	L'დ',
	[0x15d4] =	L'ე',
	[0x15d5] =	L'ვ',
	[0x15d6] =	L'ზ',
	[0x15d7] =	L'თ',
	[0x15d8] =	L'ი',
	[0x15d9] =	L'კ',
	[0x15da] =	L'ლ',
	[0x15db] =	L'მ',
	[0x15dc] =	L'ნ',
	[0x15dd] =	L'ო',
	[0x15de] =	L'პ',
	[0x15df] =	L'ჟ',
	[0x15e0] =	L'რ',
	[0x15e1] =	L'ს',
	[0x15e2] =	L'ტ',
	[0x15e3] =	L'უ',
	[0x15e4] =	L'ფ',
	[0x15e5] =	L'ქ',
	[0x15e6] =	L'ღ',
	[0x15e7] =	L'ყ',
	[0x15e8] =	L'შ',
	[0x15e9] =	L'ჩ',
	[0x15ea] =	L'ც',
	[0x15eb] =	L'ძ',
	[0x15ec] =	L'წ',
	[0x15ed] =	L'ჭ',
	[0x15ee] =	L'ხ',
	[0x15ef] =	L'ჯ',
	[0x15f0] =	L'ჰ',
	[0x15f1] =	L'ჱ',
	[0x15f2] =	L'ჲ',
	[0x15f3] =	L'ჳ',
	[0x15f4] =	L'ჴ',
	[0x15f5] =	L'ჵ',
	[0x15f6] =	L'ჶ',
	[0x16a2] =	L'',
	[0x16a3] =	L'Ẋ',
	[0x16a5] =	L'',
	[0x16a6] =	L'Ĭ',
	[0x16a7] =	L'',
	[0x16a8] =	L'',
	[0x16a9] =	L'Ƶ',
	[0x16aa] =	L'Ǧ',
	[0x16af] =	L'Ɵ',
	[0x16b2] =	L'',
	[0x16b3] =	L'ẋ',
	[0x16b4] =	L'Ǒ',
	[0x16b5] =	L'',
	[0x16b6] =	L'ĭ',
	[0x16b7] =	L'',
	[0x16b8] =	L'',
	[0x16b9] =	L'ƶ',
	[0x16ba] =	L'ǧ',
	[0x16bd] =	L'ǒ',
	[0x16bf] =	L'ɵ',
	[0x16c6] =	L'Ə',
	[0x16d1] =	L'Ḷ',
	[0x16d2] =	L'',
	[0x16d3] =	L'',
	[0x16e1] =	L'ḷ',
	[0x16e2] =	L'',
	[0x16e3] =	L'',
	[0x16f6] =	L'ə',
	[0x1e9f] =	L'̃',
	[0x1ea0] =	L'Ạ',
	[0x1ea1] =	L'ạ',
	[0x1ea2] =	L'Ả',
	[0x1ea3] =	L'ả',
	[0x1ea4] =	L'Ấ',
	[0x1ea5] =	L'ấ',
	[0x1ea6] =	L'Ầ',
	[0x1ea7] =	L'ầ',
	[0x1ea8] =	L'Ẩ',
	[0x1ea9] =	L'ẩ',
	[0x1eaa] =	L'Ẫ',
	[0x1eab] =	L'ẫ',
	[0x1eac] =	L'Ậ',
	[0x1ead] =	L'ậ',
	[0x1eae] =	L'Ắ',
	[0x1eaf] =	L'ắ',
	[0x1eb0] =	L'Ằ',
	[0x1eb1] =	L'ằ',
	[0x1eb2] =	L'Ẳ',
	[0x1eb3] =	L'ẳ',
	[0x1eb4] =	L'Ẵ',
	[0x1eb5] =	L'ẵ',
	[0x1eb6] =	L'Ặ',
	[0x1eb7] =	L'ặ',
	[0x1eb8] =	L'Ẹ',
	[0x1eb9] =	L'ẹ',
	[0x1eba] =	L'Ẻ',
	[0x1ebb] =	L'ẻ',
	[0x1ebc] =	L'Ẽ',
	[0x1ebd] =	L'ẽ',
	[0x1ebe] =	L'Ế',
	[0x1ebf] =	L'ế',
	[0x1ec0] =	L'Ề',
	[0x1ec1] =	L'ề',
	[0x1ec2] =	L'Ể',
	[0x1ec3] =	L'ể',
	[0x1ec4] =	L'Ễ',
	[0x1ec5] =	L'ễ',
	[0x1ec6] =	L'Ệ',
	[0x1ec7] =	L'ệ',
	[0x1ec8] =	L'Ỉ',
	[0x1ec9] =	L'ỉ',
	[0x1eca] =	L'Ị',
	[0x1ecb] =	L'ị',
	[0x1ecc] =	L'Ọ',
	[0x1ecd] =	L'ọ',
	[0x1ece] =	L'Ỏ',
	[0x1ecf] =	L'ỏ',
	[0x1ed0] =	L'Ố',
	[0x1ed1] =	L'ố',
	[0x1ed2] =	L'Ồ',
	[0x1ed3] =	L'ồ',
	[0x1ed4] =	L'Ổ',
	[0x1ed5] =	L'ổ',
	[0x1ed6] =	L'Ỗ',
	[0x1ed7] =	L'ỗ',
	[0x1ed8] =	L'Ộ',
	[0x1ed9] =	L'ộ',
	[0x1eda] =	L'Ớ',
	[0x1edb] =	L'ớ',
	[0x1edc] =	L'Ờ',
	[0x1edd] =	L'ờ',
	[0x1ede] =	L'Ở',
	[0x1edf] =	L'ở',
	[0x1ee0] =	L'Ỡ',
	[0x1ee1] =	L'ỡ',
	[0x1ee2] =	L'Ợ',
	[0x1ee3] =	L'ợ',
	[0x1ee4] =	L'Ụ',
	[0x1ee5] =	L'ụ',
	[0x1ee6] =	L'Ủ',
	[0x1ee7] =	L'ủ',
	[0x1ee8] =	L'Ứ',
	[0x1ee9] =	L'ứ',
	[0x1eea] =	L'Ừ',
	[0x1eeb] =	L'ừ',
	[0x1eec] =	L'Ử',
	[0x1eed] =	L'ử',
	[0x1eee] =	L'Ữ',
	[0x1eef] =	L'ữ',
	[0x1ef0] =	L'Ự',
	[0x1ef1] =	L'ự',
	[0x1ef2] =	L'̀',
	[0x1ef3] =	L'́',
	[0x1ef4] =	L'Ỵ',
	[0x1ef5] =	L'ỵ',
	[0x1ef6] =	L'Ỷ',
	[0x1ef7] =	L'ỷ',
	[0x1ef8] =	L'Ỹ',
	[0x1ef9] =	L'ỹ',
	[0x1efa] =	L'Ơ',
	[0x1efb] =	L'ơ',
	[0x1efc] =	L'Ư',
	[0x1efd] =	L'ư',
	[0x1efe] =	L'̉',
	[0x1eff] =	L'̣',
	[0x20a0] =	L'₠',
	[0x20a1] =	L'₡',
	[0x20a2] =	L'₢',
	[0x20a3] =	L'₣',
	[0x20a4] =	L'₤',
	[0x20a5] =	L'₥',
	[0x20a6] =	L'₦',
	[0x20a7] =	L'₧',
	[0x20a8] =	L'₨',
	[0x20a9] =	L'₩',
	[0x20aa] =	L'₪',
	[0x20ab] =	L'₫',
	[0x20ac] =	L'€',
};
