/*
*   haXe code by Martin Lindelšf 2011 (martin.lindelof@gmail.com)
*   original Java code by Jeffrey Traer Bernstein (jeff@traer.cc)
*
*   license: do what-ever you want with it. But we like e-mails
*   with links to your creations :)
*
*   source code is presented as-is, (cc)
*/

package clothx.physics;

interface Integrator {
	function step(t : Float):Void;
}