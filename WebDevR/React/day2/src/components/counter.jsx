import React, { Component } from 'react';

class Counter extends Component {

    state = {
        count: 0,
        tags: ["tag1", "tag2", "tag3"],
    //  imageUrl: 'https://picsum.photos/200', */
    };
    
  /*   style = {
        fontSize: 10,
        fontWeight: "bold",
    }; */

/*     constructor(){       Handling Events
        super();            Binding Event Handlers
        this.handleIncrment = this.handleIncrment.bind(this);
    } */




  /*   handleIncrment(){
        console.log("incrment clicked", this);


        //obj.funtion(); reference
        //funtion(); undefine
    } */

    handleIncrment = () => {

        this.setState({ count: this.state.count+1});    //changing state
        console.log(this.state.count);
    }

    renderTages(){
        if (this.state.tags.length === 0) return <p>There are no tags</p>

        return <ul>{this.state.tags.map(tag => <li key={tag}>{tag}</li>)}</ul>;

    }

    render() { 
 /*        let classes = "badge m-2 badge-";
        classes += this.state.count === 0 ? "warning" : "primary"; 
                let classes = this.getBadgeClasses();

        */

        return (
        

        <div>
{/*          
    <React.Fragment>
   <img src={this.state.imageUrl} alt="200*200pic"/>
       
             <span  className="badge badge-primary m-2">{this.formatCount()}</span>
 */}            
            <span  className={this.getBadgeClasses()}>{this.formatCount()}</span>
            <button onClick={this.handleIncrment} className="btn btn-secondary btn-sm">incrment</button>


         {/*    {this.state.tags.length === 0 && "Please add a tag"} 
            {this.renderTages()} */}



   {/*          <ul>
                {this.state.tags.map(tag => <li key={tag}>{tag}</li>)}  render list of item dynamicaly like ngfor 
            </ul>

            <span style={{fontSize:50}} style={this.style} className="badge badge-primary m-2">{this.formatCount()}</span>
 
        </React.Fragment>
        */}

        </div>
        );
    }

    getBadgeClasses() {
        let classes = "badge m-2 badge-";
        classes += this.state.count === 0 ? "warning" : "primary";
        return classes;
    }

    formatCount(){
        const { count } = this.state; //this.state.count = count
        /*const x = <h1>assign jsx to js var or pass</h1>*/
        return count === 0 ? /*<h1>zero</h1>*/ 'zero' : count;
    }
}
 
export default Counter;