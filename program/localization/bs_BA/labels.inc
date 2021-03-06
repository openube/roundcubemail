<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Dobrodošli u $product';
$labels['username']  = 'Korisnik';
$labels['password']  = 'Šifra';
$labels['server']    = 'Server';
$labels['login']     = 'Prijava';

// taskbar
$labels['logout']   = 'Odjava';
$labels['mail']     = 'Email';
$labels['settings'] = 'Podešavanja';
$labels['addressbook'] = 'Adresar';

// mailbox names
$labels['inbox']  = 'Sanduče';
$labels['drafts'] = 'Skice';
$labels['sent']   = 'Poslano';
$labels['trash']  = 'Smeće';
$labels['junk']   = 'Spam';

// message listing
$labels['subject'] = 'Naslov';
$labels['from']    = 'Od';
$labels['sender']  = 'Pošiljalac';
$labels['to']      = 'Za';
$labels['cc']      = 'Cc';
$labels['bcc']     = 'Bcc';
$labels['replyto'] = 'Reply-To adresa';
$labels['followupto'] = 'Prati';
$labels['date']    = 'Datum';
$labels['size']    = 'Veličina';
$labels['priority'] = 'Prioritet';
$labels['organization'] = 'Organizacija';
$labels['readstatus'] = 'Status poruke';
$labels['listoptions'] = 'Izlistaj opcije...';

$labels['mailboxlist'] = 'Folderi';
$labels['messagesfromto'] = 'Poruke od $from do $to od ukupno $count';
$labels['threadsfromto'] = 'Teme od $from do $to od ukupno $count';
$labels['messagenrof'] = 'Poruka broj $nr od $count';
$labels['fromtoshort'] = '$from – $to od ukupno $count';

$labels['copy']     = 'Kopiraj';
$labels['move']     = 'Premjesti';
$labels['moveto']   = 'Premjesti u...';
$labels['download'] = 'Preuzmi';
$labels['open']     = 'Otvori';
$labels['showattachment'] = 'Prikaži';
$labels['showanyway'] = 'Ipak prikaži';

$labels['filename'] = 'Ime datoteke';
$labels['filesize'] = 'Veličina datoteke';

$labels['addtoaddressbook'] = 'Dodaj u adresar';

// weekdays short
$labels['sun'] = 'Ned';
$labels['mon'] = 'Pon';
$labels['tue'] = 'Uto';
$labels['wed'] = 'Sri';
$labels['thu'] = 'Čet';
$labels['fri'] = 'Pet';
$labels['sat'] = 'Sub';

// weekdays long
$labels['sunday']    = 'Nedjelja';
$labels['monday']    = 'Ponedjeljak';
$labels['tuesday']   = 'Utorak';
$labels['wednesday'] = 'Srijeda';
$labels['thursday']  = 'Četvrtak';
$labels['friday']    = 'Petak';
$labels['saturday']  = 'Subota';

// months short
$labels['jan']	= 'Jan';
$labels['feb']	= 'Feb';
$labels['mar']	= 'Mar';
$labels['apr']	= 'Apr';
$labels['may']	= 'Maj';
$labels['jun']	= 'Jun';
$labels['jul'] 	= 'Jul';
$labels['aug']	= 'Avg';
$labels['sep']	= 'Sep';
$labels['oct']	= 'Okt';
$labels['nov']	= 'Nov';
$labels['dec']	= 'Dec';

// months long
$labels['longjan']	= 'Januar';
$labels['longfeb']	= 'Februar';
$labels['longmar']	= 'Mart';
$labels['longapr']	= 'April';
$labels['longmay']	= 'Maj';
$labels['longjun']	= 'Juni';
$labels['longjul']	= 'Juli';
$labels['longaug']	= 'Avgust';
$labels['longsep']	= 'Septembar';
$labels['longoct']	= 'Oktobar';
$labels['longnov']	= 'Novembar';
$labels['longdec']	= 'Decembar';

$labels['today'] = 'Danas';

// toolbar buttons
$labels['refresh']          = 'Osvježi';
$labels['checkmail']        = 'Provjeri ima li novih poruka';
$labels['compose']          = 'Nova poruka';
$labels['writenewmessage']  = 'Kreiraj novu poruku';
$labels['reply']            = 'Odgovori';
$labels['replytomessage']   = 'Odgovori pošiljaocu';
$labels['replytoallmessage'] = 'Odgovori listi osoba ili pošiljaocu i svim primaocima';
$labels['replyall']         = 'Odgovori svima';
$labels['replylist']        = 'Odgovori listi';
$labels['forward']          = 'Proslijedi';
$labels['forwardinline']    = 'Proslijedi odmah';
$labels['forwardattachment'] = 'Proslijedi kao prilog';
$labels['forwardmessage']   = 'Proslijedi poruku';
$labels['deletemessage']    = 'Obriši poruku';
$labels['movemessagetotrash'] = 'Prebaci poruku u smeće';
$labels['printmessage']     = 'Odštampaj poruku';
$labels['previousmessage']  = 'Prikaži prethodnu poruku';
$labels['firstmessage']     = 'Prikaži prvu poruku';
$labels['nextmessage']      = 'Prikaži sljedeću poruku';
$labels['lastmessage']      = 'Prikaži zadnju poruku';
$labels['backtolist']       = 'Nazad na listu poruka';
$labels['viewsource']       = 'Prikaži izvornu poruku';
$labels['mark']             = 'Označi';
$labels['markmessages']     = 'Označi poruke';
$labels['markread']         = 'Kao pročitane';
$labels['markunread']       = 'Kao nepročitane';
$labels['markflagged']      = 'Kao važne';
$labels['markunflagged']    = 'Kao nevažne';
$labels['moreactions']      = 'Više akcija...';
$labels['more']             = 'Više';
$labels['back']             = 'Nazad';
$labels['options']          = 'Opcije';

$labels['select'] = 'Odaberi';
$labels['all'] = 'Sve';
$labels['none'] = 'Ništa';
$labels['currpage'] = 'Trenutna stranica';
$labels['unread'] = 'Nepročitano';
$labels['flagged'] = 'Važno';
$labels['unanswered'] = 'Neodgovoreno';
$labels['deleted'] = 'Obrisano';
$labels['undeleted'] = 'Nije obrisano';
$labels['invert'] = 'Izokreni';
$labels['filter'] = 'Filter';
$labels['list'] = 'Lista';
$labels['threads'] = 'Teme';
$labels['expand-all'] = 'Proširi sve';
$labels['expand-unread'] = 'Proširi nepročitane';
$labels['collapse-all'] = 'Zatvori sve';
$labels['threaded'] = 'Teme';

$labels['autoexpand_threads'] = 'Proširi teme poruka';
$labels['do_expand'] = 'sve teme';
$labels['expand_only_unread'] = 'samo sa nepročitanim porukama';
$labels['fromto'] = 'Od/Za';
$labels['flag'] = 'Oznaka';
$labels['attachment'] = 'Prilog';
$labels['nonesort'] = 'Ništa';
$labels['sentdate'] = 'Datum slanja';
$labels['arrival'] = 'Datum primanja';
$labels['asc'] = 'rastući';
$labels['desc'] = 'opadajući';
$labels['listcolumns'] = 'Lista kolona';
$labels['listsorting'] = 'Sortiranje kolona';
$labels['listorder'] = 'Raspored sortiranja';
$labels['listmode'] = 'Način prikaza liste';

$labels['folderactions'] = 'Akcije za foldere...';
$labels['compact'] = 'Optimiziraj';
$labels['empty'] = 'Isprazni';

$labels['quota'] = 'Zauzeće diska';
$labels['unknown']  = 'nepoznato';
$labels['unlimited']  = 'neograničeno';

$labels['quicksearch']  = 'Brza pretraga';
$labels['resetsearch']  = 'Resetuj pretragu';
$labels['searchmod']  = 'Modifikacija pretrage';
$labels['msgtext']  = 'Cijela poruka';
$labels['body']  = 'Tijelo';

$labels['openinextwin'] = 'Otvori u novom prozoru';
$labels['emlsave'] = 'Preuzmi (.eml)';
$labels['changeformattext'] = 'Prikaži kao obični tekst';
$labels['changeformathtml'] = 'Prikaži kao HTML';

// message compose
$labels['editasnew']      = 'Uredi kao novo';
$labels['send']           = 'Pošalji';
$labels['sendmessage']    = 'Pošalji poruku';
$labels['savemessage']    = 'Sačuvaj skicu';
$labels['addattachment']  = 'Priloži datoteku';
$labels['charset']        = 'Skup znakova';
$labels['editortype']     = 'Vrsta urednika';
$labels['returnreceipt']  = 'Potvrda o prispijeću poruke';
$labels['dsn']            = 'Obavještenje o statusu dostave';
$labels['mailreplyintro'] = '$date, $sender je napisao/la:';
$labels['originalmessage'] = 'Originalna poruka';

$labels['editidents']    = 'Uredi identitete';
$labels['spellcheck']    = 'Spelovanje';
$labels['checkspelling'] = 'Provjera pravopisa';
$labels['resumeediting'] = 'Nastavi uređivanje';
$labels['revertto']      = 'Vrati na';

$labels['attach'] = 'Priloži';
$labels['attachments'] = 'Prilozi';
$labels['upload'] = 'Dodaj';
$labels['uploadprogress'] = '$percent ($current od $total)';
$labels['close']  = 'Zatvori';
$labels['messageoptions']  = 'Opcije poruke...';

$labels['low']     = 'Nizak';
$labels['lowest']  = 'Najniži';
$labels['normal']  = 'Normalan';
$labels['high']    = 'Visok';
$labels['highest'] = 'Najveći';

$labels['nosubject']  = '(bez naslova)';
$labels['showimages'] = 'Prikaži slike';
$labels['alwaysshow'] = 'Uvijek prikaži slike od $sender';
$labels['isdraft']    = 'Ovo je skica.';
$labels['andnmore']   = 'još $nr...';
$labels['togglemoreheaders'] = 'Prikaži još zaglavlja poruka';
$labels['togglefullheaders'] = 'Aktiviranje izvornih zaglavlja poruka';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Obični tekst';
$labels['savesentmessagein'] = 'Sačuvaj poslane poruke u';
$labels['dontsave'] = 'ne snimaj';
$labels['maxuploadsize'] = 'Maksimalna dozvoljena veličina datoteke je $size';

$labels['addcc'] = 'Dodaj Cc';
$labels['addbcc'] = 'Dodaj Bcc';
$labels['addreplyto'] = 'Dodaj odgovor na';
$labels['addfollowupto'] = 'Dodaj praćenje za';

// mdn
$labels['mdnrequest'] = 'Pošiljaoc ove poruke je tražio da bude obaviješten kada pročitate ovu poruku. Želite li obavijestiti pošiljaoca?';
$labels['receiptread'] = 'Povratnica (pročitano)';
$labels['yourmessage'] = 'Ovo je povratnica vaše poruke';
$labels['receiptnote'] = 'Napomena: Ova povratnica samo potvrđuje da je poruka bila prikazana na računaru primaoca. Nema garancija da je primaoc pročitao ili razumio sadržaj poruke.';

// address boook
$labels['name']         = 'Ime za prikaz';
$labels['firstname']    = 'Ime';
$labels['surname']      = 'Prezime';
$labels['middlename']   = 'Srednje ime';
$labels['nameprefix']   = 'Prefiks';
$labels['namesuffix']   = 'Sufiks';
$labels['nickname']     = 'Nadimak';
$labels['jobtitle']     = 'Titula';
$labels['department']   = 'Odjel';
$labels['gender']       = 'Spol';
$labels['maidenname']   = 'Djevojačko ime';
$labels['email']        = 'Email';
$labels['phone']        = 'Telefon';
$labels['address']      = 'Adresa';
$labels['street']       = 'Ulica';
$labels['locality']     = 'Grad';
$labels['zipcode']      = 'Poštanski broj';
$labels['region']       = 'Oblast';
$labels['country']      = 'Zemlja';
$labels['birthday']     = 'Rođendan';
$labels['anniversary']  = 'Godišnjica';
$labels['website']      = 'Web stranica';
$labels['instantmessenger'] = 'IM';
$labels['notes'] = 'Napomene';
$labels['male']   = 'Muško';
$labels['female'] = 'Žensko';
$labels['manager'] = 'Menadžer';
$labels['assistant'] = 'Pomoćnik';
$labels['spouse'] = 'Supružnik';
$labels['allfields'] = 'Sva polja';
$labels['search'] = 'Pretraga';
$labels['advsearch'] = 'Napredna pretraga';
$labels['advanced'] = 'Napredno';
$labels['other'] = 'Ostalo';

$labels['typehome']   = 'Kućni broj';
$labels['typework']   = 'Poslovni broj';
$labels['typeother']  = 'Ostalo';
$labels['typemobile']  = 'Mobilni broj';
$labels['typemain']  = 'Glavni broj';
$labels['typehomefax']  = 'Fax kuća';
$labels['typeworkfax']  = 'Fax posao';
$labels['typecar']  = 'Automobil';
$labels['typepager']  = 'Pejdžer';
$labels['typevideo']  = 'Video';
$labels['typeassistant']  = 'Pomoćnik';
$labels['typehomepage']  = 'Početna stranica';
$labels['typeblog'] = 'Blog';
$labels['typeprofile'] = 'Profil';

$labels['addfield'] = 'Dodaj polje...';
$labels['addcontact'] = 'Dodaj novi kontakt';
$labels['editcontact'] = 'Uredi kontakt';
$labels['contacts'] = 'Kontakti';
$labels['contactproperties'] = 'Svojstva kontakta';
$labels['personalinfo'] = 'Lični podaci';

$labels['edit']   = 'Uredi';
$labels['cancel'] = 'Otkaži';
$labels['save']   = 'Sačuvaj';
$labels['delete'] = 'Obriši';
$labels['rename'] = 'Preimenuj';
$labels['addphoto'] = 'Dodaj';
$labels['replacephoto'] = 'Zamijeni';
$labels['uploadphoto'] = 'Dodaj fotografiju';

$labels['newcontact']     = 'Dodaj novi kontakt';
$labels['deletecontact']  = 'Obriši odabrane kontakte';
$labels['composeto']      = 'Napiši email za';
$labels['contactsfromto'] = 'Kontakti od $from do $to od ukupno $count';
$labels['print']          = 'Štampaj';
$labels['export']         = 'Izvoz';
$labels['exportall']      = 'Izvezi sve';
$labels['exportsel']      = 'Izvezi označeno';
$labels['exportvcards']   = 'Izvezi kontakte u vCard formatu';
$labels['newcontactgroup'] = 'Kreiraj novu grupu kontakata';
$labels['grouprename']    = 'Preimenuj grupu';
$labels['groupdelete']    = 'Obriši grupu';
$labels['groupremoveselected'] = 'Ukloni odabrane kontakte iz grupe';

$labels['previouspage']   = 'Prikaži prethodnu stranicu';
$labels['firstpage']      = 'Prikaži prvu stranicu';
$labels['nextpage']       = 'Prikaži sljedeću stranicu';
$labels['lastpage']       = 'Prikaži zadnju stranicu';

$labels['group'] = 'Grupa';
$labels['groups'] = 'Grupe';
$labels['personaladrbook'] = 'Lične adrese';

$labels['searchsave'] = 'Sačuvaj pretragu';
$labels['searchdelete'] = 'Obriši pretragu';

$labels['import'] = 'Uvoz';
$labels['importcontacts'] = 'Uvoz kontakata';
$labels['importfromfile'] = 'Uvoz iz datoteke:';
$labels['importtarget'] = 'Dodaj novi kontakt u adresar:';
$labels['importreplace'] = 'Zamijeni cijeli adresar';
$labels['importdesc'] = 'Kontakte možete dodati iz postojećeg adresara.<br/>Trenutno podržavamo uvoz adresara u formatima <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> ili CSV (comma-separated).';
$labels['done'] = 'Završeno';

// settings
$labels['settingsfor'] = 'Podešavanja za';
$labels['about'] = 'Informacije';
$labels['preferences'] = 'Podešavanja';
$labels['userpreferences'] = 'Korisničke opcije';
$labels['editpreferences'] = 'Uredi korisničke opcije';

$labels['identities'] = 'Identiteti';
$labels['manageidentities'] = 'Podesi identitete za ovaj račun';
$labels['newidentity'] = 'Dodaj identitet';

$labels['newitem'] = 'Nova stavka';
$labels['edititem'] = 'Uredi stavku';

$labels['preferhtml'] = 'Prikaži HTML';
$labels['defaultcharset'] = 'Glavni skup znakova';
$labels['htmlmessage'] = 'HTML poruke';
$labels['messagepart'] = 'Dio';
$labels['digitalsig'] = 'Digitalni potpis';
$labels['dateformat'] = 'Format datuma';
$labels['timeformat'] = 'Format vremena';
$labels['prettydate'] = 'Formatirani datum';
$labels['setdefault']  = 'Postavi kao glavno';
$labels['autodetect']  = 'Automatski';
$labels['language']  = 'Jezik';
$labels['timezone']  = 'Vremenska zona';
$labels['pagesize']  = 'Redova po stranici';
$labels['signature'] = 'Potpis';
$labels['dstactive']  = 'Ljetno računanje vremena';
$labels['showinextwin'] = 'Otvori poruku u novom prozoru';
$labels['composeextwin'] = 'Napiši u novom prozor';
$labels['htmleditor'] = 'Piši HTML poruke';
$labels['htmlonreply'] = 'samo kao odgovor na HTML poruke';
$labels['htmlonreplyandforward'] = 'prilikom prosljeđivanja ili odgovaranja na HTML poruku';
$labels['htmlsignature'] = 'HTML potpis';
$labels['previewpane'] = 'Prikaži pregled poruke';
$labels['skin'] = 'Skin interfejsa';
$labels['logoutclear'] = 'Očisti smeće prilikom odjavljivanja';
$labels['logoutcompact'] = 'Optimiziraj sanduče prilikom odjavljivanja';
$labels['uisettings'] = 'Korisnički interfejs';
$labels['serversettings'] = 'Postavke servera';
$labels['mailboxview'] = 'Pregled emaila';
$labels['mdnrequests'] = 'Prilikom zahtjeva za povratnicu';
$labels['askuser'] = 'pitaj korisnika';
$labels['autosend'] = 'pošalji povratnicu';
$labels['autosendknown'] = 'pošalji povratnicu mojim kontaktima, u suprotnom me pitaj';
$labels['autosendknownignore'] = 'pošalji povratnicu mojim kontaktima, u suprotnom zanemari';
$labels['ignore'] = 'zanemari';
$labels['readwhendeleted'] = 'Označi poruku kao pročitanu pri brisanju';
$labels['flagfordeletion'] = 'Označi poruku za brisanje umjesto brisanja';
$labels['skipdeleted'] = 'Ne prikazuj obrisane poruke';
$labels['deletealways'] = 'Ako premještanje poruka u smeće ne uspije, odmah ih obriši';
$labels['deletejunk'] = 'Direktno obriši poruke u smeću';
$labels['showremoteimages'] = 'Prikaži vanjske slike u porukama';
$labels['fromknownsenders'] = 'od poznatih pošiljatelja';
$labels['always'] = 'uvijek';
$labels['showinlineimages'] = 'Prikaži priložene slike ispod poruke';
$labels['autosavedraft']  = 'Automatski sačuvaj skicu';
$labels['everynminutes']  = 'svakih $n minuta';
$labels['refreshinterval']  = 'Osvježi (provjeri ima li novih poruka itd.)';
$labels['never']  = 'nikad';
$labels['immediately']  = 'odmah';
$labels['messagesdisplaying'] = 'Prikaz poruka';
$labels['messagescomposition'] = 'Pisanje poruka';
$labels['mimeparamfolding'] = 'Nazivi priloga';
$labels['2231folding'] = 'Puni RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'Puni RFC 2047 (ostalo)';
$labels['force7bit'] = 'Koristi MIME kodiranje za 8-bitne znakove';
$labels['advancedoptions'] = 'Napredne opcije';
$labels['focusonnewmessage'] = 'Fokusiraj prozor preglednika na novu poruku';
$labels['checkallfolders'] = 'Provjeri ima li novih poruka u svim folderima';
$labels['displaynext'] = 'Aakon brisanja/premještanja poruke, prikaži slijedeću poruku';
$labels['defaultfont'] = 'Osnovni font za HTML poruke';
$labels['mainoptions'] = 'Glavne opcije';
$labels['browseroptions'] = 'Opcije preglednika';
$labels['section'] = 'Sekcija';
$labels['maintenance'] = 'Održavanje';
$labels['newmessage'] = 'Nova poruka';
$labels['signatureoptions'] = 'Opcija potpisa';
$labels['whenreplying'] = 'Prilikom odgovora';
$labels['replyempty'] = 'ne citiraj originalnu poruku';
$labels['replytopposting'] = 'započni novu poruku iznad originala';
$labels['replybottomposting'] = 'započni novu poruku ispod originala';
$labels['replyremovesignature'] = 'Prilikom odgovaranja na poruku, ukloni originalni potpis iz poruke';
$labels['autoaddsignature'] = 'Automatski dodaj potpis';
$labels['newmessageonly'] = 'samo za nove poruke';
$labels['replyandforwardonly'] = 'samo za odgovore i prosljeđivanja';
$labels['replysignaturepos'] = 'Prilikom odgovaranja ili prosljeđivanja potpis ubaci';
$labels['belowquote'] = 'ispod citata';
$labels['abovequote'] = 'iznad citata';
$labels['insertsignature'] = 'Umetni potpis';
$labels['previewpanemarkread']  = 'Obilježi prikazane poruke kao pročitane';
$labels['afternseconds']  = 'nakon $n sekundi';
$labels['reqmdn'] = 'Uvijek zahtjevaj povratnicu';
$labels['reqdsn'] = 'Uvijek zahtjevaj obavijest o statusu dostave';
$labels['replysamefolder'] = 'Sačuvaj odgovore u folder poruke na osnovu koje se piše odgovor';
$labels['defaultabook'] = 'Osnovni adresar';
$labels['autocompletesingle'] = 'Preskoči alternativne email adrese prilikom automatskog popunjavanja';
$labels['listnamedisplay'] = 'Izlistaj kontakte kao';
$labels['spellcheckbeforesend'] = 'Provjeri pravopis prije slanja poruke';
$labels['spellcheckoptions'] = 'Opcije provjere pravopisa';
$labels['spellcheckignoresyms'] = 'Zanemari riječi sa simbolima';
$labels['spellcheckignorenums'] = 'Zanemari riječi sa brojevima';
$labels['spellcheckignorecaps'] = 'Zanemari riječi napisane velikim slovima';
$labels['addtodict'] = 'Dodaj u rječnik';
$labels['mailtoprotohandler'] = 'Registruj upravljač protokola za mailto: linkovi';
$labels['forwardmode'] = 'Prosljeđivanje poruka';
$labels['inline'] = 'u istom redu';
$labels['asattachment'] = 'kao prilog';

$labels['folder']  = 'Folder';
$labels['folders']  = 'Folderi';
$labels['foldername']  = 'Naziv foldera';
$labels['subscribed']  = 'Pretplaćen';
$labels['messagecount'] = 'Poruke';
$labels['create']  = 'Kreiraj';
$labels['createfolder']  = 'Kreiraj novi folder';
$labels['managefolders']  = 'Upravljanje folderima';
$labels['specialfolders'] = 'Specijalni folder';
$labels['properties'] = 'Svojstva';
$labels['folderproperties'] = 'Svojstva foldera';
$labels['parentfolder'] = 'Matični folder';
$labels['location'] = 'Lokacija';
$labels['info'] = 'Informacije';
$labels['getfoldersize'] = 'Kliknite da biste dobili informaciju o veličini foldera';
$labels['changesubscription'] = 'Kliknite da promijenite pretplatu';
$labels['foldertype'] = 'Vrsta foldera';
$labels['personalfolder']  = 'Privatni folder';
$labels['otherfolder']  = 'Folder drugog korisnika';
$labels['sharedfolder']  = 'Javni folder';

$labels['sortby'] = 'Sortiraj po';
$labels['sortasc']  = 'Sortiraj uzlazno';
$labels['sortdesc'] = 'Sortiraj silazno';
$labels['undo'] = 'Nazad';

$labels['installedplugins'] = 'Instalirani plugini';
$labels['plugin'] = 'Plugin';
$labels['version'] = 'Verzija';
$labels['source'] = 'Izvorni kod';
$labels['license'] = 'Licenca';
$labels['support'] = 'Podrška';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unikod';
$labels['english'] = 'engleski';
$labels['westerneuropean'] = 'Zapadna Evropa';
$labels['easterneuropean'] = 'Istočna Evropa';
$labels['southeasterneuropean'] = 'Jugoistočna Evropa';
$labels['baltic'] = 'Baltički';
$labels['cyrillic'] = 'ćirilični';
$labels['arabic'] = 'arapski';
$labels['greek'] = 'grčki';
$labels['hebrew'] = 'hebrejski';
$labels['turkish'] = 'turski';
$labels['nordic'] = 'Nordijski';
$labels['thai'] = 'tajlandski';
$labels['celtic'] = 'keltski';
$labels['vietnamese'] = 'vijetnamski';
$labels['japanese'] = 'japanski';
$labels['korean'] = 'korejski';
$labels['chinese'] = 'kineski';

?>
